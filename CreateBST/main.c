#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void insert(struct Node *q,int value)
{
    struct Node *s=0,*t=0;
    if (root==0)
    {
        q=(struct Node *)malloc(sizeof(struct Node));
        q->lchild=q->rchild=0;
        q->data=value;
        root=q;
        return;
    }
    t=root;
    while (t!=0)
    {
        s=t;
        if(value==t->data)
            return;
        else if(value<t->data)
            t=t->lchild;
        else if(value>t->data)
            t=t->rchild;
    }

    q=(struct Node *)malloc(sizeof(struct Node));
    q->lchild=q->rchild=0;
    q->data=value;
    if(value<s->data)
        s->lchild=q;
    if(value>s->data)
        s->rchild=q;

}

void inorder(struct Node *q)
{
    if(q!=0)
    {
        inorder(q->lchild);
        printf("%d \n",q->data);
        inorder(q->rchild);
    }
}
void BSTdelete(struct Node *q)
{
      if(q)
      {
            BSTdelete(q->lchild);
            BSTdelete(q->rchild);
            free (q);
      }

    printf("tree is deleted");
}
int main()
{
    struct Node *q;
    insert(&q,12);
    insert(&q,19);
    insert(&q,190);
    insert(&q,10);
    insert(&q,1);
    insert(&q,9);
    inorder(root);
    BSTdelete(&q);
    inorder(root);
}
