#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*end=NULL;
void enqueue(struct Node *q,int value)
{
    struct Node *t=NULL;
    q=front;
    t=(struct Node *)malloc(sizeof(struct Node*));
    t->next=NULL;
    t->data=value;
    if(front==NULL)
      {
          end=front=t;
      }
    else
    {
        end->next=t;
        end=t;
    }
}
void display(struct Node *q)
{
    q=front;
    for(int i=0;q!=0;i++)
    {
        printf("%d \n",q->data);
        q=q->next;
    }
}
void dequeue(struct Node *q)
{
    q=front;
    front=front->next;
    free(q);
}
int main()
{
    struct Node *q=front;
    enqueue(&q,12);
    enqueue(&q,17);
    enqueue(&q,21);
    display(&q);
    dequeue(&q);
    dequeue(&q);
    display(&q);
    return 0;
}
