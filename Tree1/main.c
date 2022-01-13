#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
}*first=0,*end=0;

struct Node
{
    struct Node *lchild;
    int data1;
    struct Node *rchild;
}*root=0;

void enqueue(struct queue *q,int value)
{
    struct queue *t=0;
    t=(struct queue *)malloc(sizeof(struct queue ));
    t->data=value;
    t->next=0;
    if(first==0)
    {
        first=end=t;
    }
    else
    {
        end->next=t;
        end=t;
    }
}
int dequeue(struct queue *q)
{
    if(first!=0&&first<=end)
    {
        q=first;
        first=first->next;
        return q->data;
        free (q);
    }
}
int qempty(struct queue *q)
{
    static int flag=0;
    if(first!=end||flag==0)
        { flag =1; return 1;}
    else
        return 0;
}

void create(struct queue *q)
{
    struct Node *s,*t,*p;
    int a,b,c;
    root=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value of root");
    scanf("d",&a);
    printf("%d\n\n",a);
    root->data1=a;
    root->lchild=0;
    root->rchild=0;
    enqueue(&q,root);
    static int flag=0;
    if(!qempty(&q))
    {
        p=dequeue(&q);
        printf("Enter the left child of %d",p->data1);
        scanf("%d",&b);
        t=(struct Node*)malloc(sizeof(struct Node));
        if(b!=-1)
        {
        t->data1=b;
        t->lchild=t->rchild=0;
        p->lchild=b;
        enqueue(&q,t);
        }

        printf("Enter the right child of %d",p->data1);
        scanf("%d",&c);
        t=(struct Node*)malloc(sizeof(struct Node));
        if(c!=-1)
        {
        t->data1=c;
        t->lchild=t->rchild=0;
        p->rchild=c;
        enqueue(&q,t);
        }


    }
}
void preorder(struct Node *p)
{
    if(p)
    {
        printf("%d",p->data1);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void display(struct queue *q)
{
    if(first!=0)
    q=first;
        while(q!=0)
    {
        printf("%d\n",q->data);
        q=q->next;
    }
}
int main()
{
    struct queue *q;
    struct Node *p=root;
    create(&q);
    //preorder(&p);
    enqueue(&q,root);
    //enqueue(&q,17);
    //dequeue(&q);
    display(&q);
    return 0;
}
