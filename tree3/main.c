#include <stdio.h>
#include <stdlib.h>
struct treeNode
{
    struct treeNode *lchild;
    int data;
    struct treeNode *rchild;
}*root=NULL;

struct queue
{
    int data;
    struct queue *next;
}*first=0;


void enqueue(struct queue *q,struct treeNode *value)
{
    struct queue *s;
    q=(struct queue *)malloc(sizeof(struct queue));

    q->next=0;
    if(first==0)
    {
        q->data=value;
        s=first=q;
    }
    else
    {
         q->data=value;
         s->next=q;
         s=q;
    }
}
int dequeue(struct queue *q)
{
    if(first!=0)
    {
        q=first;
        first=first->next;
        return q;
    }
}


void create(struct queue *q, struct treeNode *root)
{

    struct treeNode *s,*t;
    int a,b,c;
    root=(struct treeNode*)malloc(sizeof(struct treeNode));
    printf("enter the value of the tree");
    scanf("%d",&a);
    root->data=a;
    root->lchild=root->rchild=0;
    enqueue(&q,root);
    int static flag=0;
    if(first!=0||flag==0)
    {
        flag=1;
        s=dequeue(&q);
        printf("Enter the left child of %d",s->data);
        scanf("%d",&b);
        if(b!=-1)
        {
            t=(struct treeNode*)malloc(sizeof(struct treeNode));
            t->data=b;
            t->lchild=t->rchild=0;
            s->lchild=b;
        }

        printf("Enter the right child of %d",s->data);
        scanf("%d",&c);
        if(c!=-1)
        {
            t=(struct treeNode*)malloc(sizeof(struct treeNode));
            t->data=b;
            t->lchild=t->rchild=0;
            s->rchild=c;
        }
    }
}



void preorder(struct treeNode *root)
{
    printf("%d",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}
int main()
{
    struct queue *q;
    struct treeNode *root;
    create(&q,&root);
    preorder(&root);
    return 0;
}
