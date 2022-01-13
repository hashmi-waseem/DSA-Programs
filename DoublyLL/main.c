#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[], int length)
{
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->next=first->prev=0;
    last=first;

    for (int i=1;i<length;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void Delete(struct Node *p , int pos)
{
    if(pos==1)
    {
        p=first;
        first=first->next;
        first->prev=0;
        free (p);
    }
    if(pos!=1)
    {
    for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    p->prev->next=p->next;
    if(p->next!=0)
        p->next->prev=p->prev;
    free(p);
    }
}
void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    int A[4]={1,2,3,4};
    create(A,4);
    Delete(first,2);
    display(first);
    return 0;
}
