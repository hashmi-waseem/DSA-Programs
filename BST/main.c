#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=0;

void insert(struct Node *q,int key)
{
  struct Node *p=NULL;
  struct Node *s=0,*t=0;

  if (root==0)
  {
      p=(struct Node *)malloc(sizeof(struct Node));
      p->data=key;
      p->lchild=p->rchild=0;
      root=p;
  }
  else
  {
      t=root;
      while(t!=0)
      {
          s=t;
          if(key==t)
            return;
            else if(key<t->data)
                t=t->lchild;
            else if(key>t->data)
                t=t->rchild;
      }
      p=(struct Node *)malloc(sizeof(struct Node));
      p->data=key;
      p->lchild=p->rchild=0;

      if(key<s->data)
        s->lchild=p;

      else if(key>s->data)
        s->rchild=p;
  }
}
void inorder(struct Node *p)
{
    if(p!=0)
    {
    inorder(p->lchild);
    printf("%d\n",p->data);
    inorder(p->rchild);
    }
}

struct Node *search(struct Node *q, int key)
{
    q=root;
    while(q!=0)
    {
        if(key==q->data)
            return q;
        else if(key<q->data)
            q=q->lchild;
        else if(key>q->data)
            q=q->rchild;
    }
    printf("Key not found");
}
int main()
{
    struct Node *q;

    insert(&q,10);
    insert(&q,12);
    insert(&q,7);
    insert(&q,8);
    inorder(root);
    struct Node *a=search(&q,12);
    if(a!=0)
    printf("Element %d found",a->data);
}
