#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

int count(struct Node *p)
{
    int i=0;

   while(p!=0)
   {
     i++;
     printf("Working");
   }

    return i;
}

int insert(struct Node *p,int pos,int value)
{
    struct Node *t;
    int i=0;
    if(pos==0)
    {
        t=(struct Node*)malloc(sizeof (struct Node *));
        t->data=value;
        t->next=first;
        first=t;
    }
    else if(pos>0&&pos<10)
    {
        t=(struct Node*)malloc(sizeof(struct Node *));
        t->data=value;
        for(i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void insertSortedList(struct Node *p,int value)
{
    int i;
    struct Node *t,*q=NULL;
    while(p!=0&&p->data<value)
    {
        if(p->data<value)
        {
            q=p;
            p=p->next;
        }
    }
    t=(struct Node*)malloc(sizeof(struct Node*));
    t->data=value;
    t->next=q->next;
    q->next=t;
}
search(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
        {
            return (p);
        }

        p=p->next;

    } return 0;
}
void create1(int B[],int n)
{
    int i;
    struct Node *t,*last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=B[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int sum(struct Node *p)
{
    int s=0;
    while(p!=0)
    {
        s=s+p->data;
        p=p->next;
    }
    return s;
}
int min(struct Node *a)
{
    int min=INT_MAX,i=11;
    while(a!=0)
    {        if(a->data<min)
            min=a->data;
            a=a->next;
    }
    return min;
}
int max(struct Node *a)
{
    int max=INT_MIN;
    while(a!=0)
    {
        if(a->data>max)
            max=a->data;
        a=a->next;
    }
    return max;
}
void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d \n",p->data);
        p=p->next;
    }
}
void Delete(struct Node *p, int pos)
{
    struct Node *b=NULL;
    if(pos==0)
    {
        b=first;
        first=first->next;
        int x=b->data;
        free (b);
    }
    else if(pos!=0)
    {
        for(int i=0;i<pos;i++)
        {
            b=p;
            p=p->next;
        }
        b->next=p->next;
        int x=p->data;
        free (p);
    }

}
int CheckSort(struct Node *p)
{
    int x=INT_MIN;
    while(p!=0)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}
void duplicate(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=0)
    {
        if(q->data!=p->data)
        {
        p=q;
        q=q->next;
        }
        else if(q->data==p->data)
        {
            p->next=q->next;
            free (q);
            q=p->next;
        }
    }
}
void concat(struct Node *p, struct Node *q)
{
    third=p;

    while(p->next!=0)
    {
        p=p->next;
    }
    p->next=q;
    q=NULL;
}
void merge(struct Node*p,struct Node *q)
{
    struct Node *last;

    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        third->next=0;
    }
    if(q->data<p->data)
    {
        third=last=q;
        q=q->next;
        third->next=0;
    }
    while(p->next&&q->next)
    {
        if(p->data<q->data)
        {
            last->next=q;
            last=p;
            p=p->next;
            last->next=0;

        }
        printf("hi");
         if(q->data<p->data)
         {
             last->next=q;
             last=q;
             q=q->next;
             last->next=0;
         }
    }
    if(p->next!=0)
        last->next=p;
    else if(q->next!=0)
        last->next=q;

}
int isLoop(struct Node *f)
{
    struct Node *q,*p;
    q=p=f;
    do
    {
        p=p->next;
        q=q->next;
        if(q!=0)
           q=q->next;
    }while(q!=0&&p!=0&&p!=q);

    if(p==q)
        return 1;
    else
        return 0;
}
int main()
{
    int A[9]={1,2,3,4,5,6};
    int B[10]={-1,-2,-3,0,9,87,765};
    struct Node *t1=NULL;
    struct Node *t2=NULL;
   t1=first->next->next;
   t2=first->next->next->next->next->next;
   t2->next=t1;
    create(A,6);
    create1(B,7);
    printf("Loop %d",isLoop(first));
    display(third);

    return 0;
}
