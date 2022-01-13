#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int end;
    int *A;
};
void enqueue(struct queue *q, int value)
{
    if(q->end==q->size-1)
        printf("Queue Is Full");
    else
    {
        q->end++;
        q->A[q->end]=value;
    }
}
void display(struct queue *q)
{
    for(int i=q->front+1;i<=q->end;i++)
    {
        printf("%d \n",q->A[i]);
    }
}
void dequeue(struct queue *q)
{
    if(q->front==q->end)
        printf("Queue Is Empty");
    else
    {
        q->front++;
    }
}

void create(struct queue *q)
{
    printf("Enter The Size Of The Queue \n");
    scanf("%d",&q->size);
    q->A=(int*)malloc(q->size*sizeof(int*));
    q->front=q->end=0;
}
void circularenQueue(struct queue *q,int value)
{
    if((q->end+1)%q->size==q->front)
        printf("Queue is full");
    else
    {
        q->end=(q->end+1)%q->size;
        q->A[q->end]=value;
    }
}
void circulardeQueue(struct queue *q)
{
    if(q->end==q->front)
    {
        printf("Queue is Empty");
    }
    else
    {
        q->front=(q->front+1)%q->size;
    }
}
void Cdisplay(struct queue *q)
{
    static int flag=0;
    int i=q->front+1;
    do
    {
        printf("%d\n",q->A[i]);
        i=(i+1)%q->size;
    }while(i!=(q->end+1)%q->size);
}
int main()
{
    struct queue *q;
    create(&q);
   circularenQueue(&q,12);
   circularenQueue(&q,21);
   circularenQueue(&q,34);
   circularenQueue(&q,3);
   Cdisplay(&q);
   circulardeQueue(&q);
   circulardeQueue(&q);
   Cdisplay(&q);

    return 0;
}
