#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
void push(struct Node *stack,int value)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node*));
    if(t==0)
    {
        printf("Stack Is Full");
    }
    else
    {
    t->data=value;
    t->next=top;
    top=t;
    }
}
void peek(struct Node *p,int pos)
{
    p=top;


        for(int i=0;i<pos-1&&p!=0;i++)
        {
            p=p->next;
        }
        if(p!=0)
        printf("Value at Node is %d \n",p->data);
        else
        printf("Position undefined\n");
}
void isEmptyFull(struct Node *p)
{
    if(top==0)
        printf("stack is empty\n");
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node *));
    if(t==0)
        printf("Heap is full and hence stack is also full");
}
void stacktop(struct Node *p)
{

    p=top;
    if(top!=0)
    {
        printf("Value at top stack is %d\n",p->data);
    }
    else
        printf("Stack is empty");
}
void pop(struct Node *p)
{
    p=top;
    if(top==0)
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        top=top->next;
        free (p);
    }
}
void display(struct Node *p)
{
    p=top;
    while(p!=0)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    struct Node *stack;
    isEmptyFull(stack);
    push(stack,10);
    push(stack,5);
    push(stack,15);
    push(stack,20);
    push(stack,30);
    isEmptyFull(stack);
    pop(stack);
    //pop(stack);
    peek(stack,11);
    stacktop(stack);
    display(stack);
    return 0;
}
