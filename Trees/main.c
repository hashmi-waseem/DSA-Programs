#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct treenode
{
    struct treenode *lchild;
    int data;
    struct treenode *rchild;
}*root=NULL;


void createtree(struct Node *q)
{
    struct treenode *s,*t,*p; int x;
    enqueue(&q);
    printf("Enter the value of the root");
    scanf("%d",&x);
    root=(struct treenode *)malloc(sizeof(struct treenode));
    root->data=x;
    root->lchild=root->rchild=0;
    enqueue(&q,root);
    q=first;
    while(q!=0)
    {
       p=dequeue(&q);
       printf("Enter left child");
       scanf("%d",&x);
       s=(struct treenode *)malloc(sizeof(struct treenode));
       s->lchild=s->rchild=0;
       p->lchild=x;

       printf("Enter right child");
       scanf("%d",&x);
       t=(struct treenode *)malloc(sizeof(struct treenode));
       t->lchild=t->rchild=0;
       p->rchild=x;

    }
}
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=0,*end=0;
void enqueue(struct Node *q,int value)
{
    struct Node*t=0;
    t=(struct Node *)malloc(sizeof(struct Node *));
    t->data=value;
    t->next=t->prev=0;
    if(first==0)
    {
        //printf("Queue Is Empty");
        first=end=t;
    }
    else
    {
        end->next=t;
        end=t;
    }
}
void dequeue(struct Node *q)
{
    q=first;
    if(first!=0)
    {
        q=first;
        first=first->next;
        free (q);
    }
}
void display(struct Node *q)
{
    q=first;
    while(q!=0)
    {
        printf("%d \n",q->data);
        q=q->next;
    }
}
int main()
{
    struct Node *q;
    enqueue(&q,12);
    enqueue(&q,18);
    enqueue(&q,21);
    enqueue(&q,56);
    dequeue(&q);
    display(&q);
}
