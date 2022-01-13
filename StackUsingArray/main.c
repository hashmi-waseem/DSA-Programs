#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *A;
};
void create(struct stack *st)
{
    printf("Enter The Size");
    scanf("%d",st->size);
    st->top=-1;
    st->A=(int *)malloc(st->size*sizeof(int));
}
void push(struct stack *st, int value)
{
    if(st->top==st->size-1)
    {
        printf("Stack Overflow");
    }
    else
        st->top++;
        st->A[st->top]=value;
}
void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
        printf("%d \n",st.A[i]);
}
int pop(struct stack *st)
{
    int x;
    if(st->top==-1)
        printf("Stack Underflow\n");
    else
        {
        x=st->A[st->top];
        st->top--;
        return x;
        }
}
int peep(struct stack st, int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        x=st.A[st.top-pos+1];
        return x;
    }
}
int stacktop(struct stack st)
{
    if(st.top==-1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return st.A[st.top];
    }
}
void isFullEmpty(struct stack st)
{
    if(st.top==st.size-1)
        printf("Stack Is Full\n");
    else if(st.top==-1)
        printf("Stack Is Empty\n");
}
int main()
{
    struct stack st;
    create(&st);

    push(&st,10);
    //push(&st,15);
    //push(&st,1);
    //pop(&st);
    printf("Value at Given Position Is %d\n",peep(st,1));
    printf("The top element is %d\n",stacktop(st));
    isFullEmpty(st);
    display(st);
    return 0;
}
