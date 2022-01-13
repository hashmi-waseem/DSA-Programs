#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*Head=NULL;

void insert(struct Node *p, int pos, int value)
{
    struct Node *t;
    if(pos==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=value;
        t->next=Head;
        while(p->next!=Head)
        {
            p=p->next;
        }
        p->next=t;
        Head=t;
    }
    else
    {

        for(int i=0;i<pos-1;i++)
    {
            p=p->next;
    }
    t=(struct Node*)malloc(sizeof(struct Node *));
        t->data=value;
        t->next=p->next;
        p->next=t;
    }
}
void createCLL(int A[],int n)
{
    struct Node *t,*last;
    Head=(struct Node*)malloc(sizeof(struct Node *));
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    for (int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=Head;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    do
    {
        printf("%d\n",p->data);
        p=p->next;
    }while(p!=Head);
}
int main()
{
    int A[5]={1,2,3,4,5};
    createCLL(A,5);
    display(Head);
}
