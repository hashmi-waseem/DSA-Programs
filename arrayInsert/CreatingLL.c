#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(struct Node *first,struct Node*last,int value)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node*));
    t->data=value;
    t->next=NULL;
    if(first==last)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d \n",p->data);
        p=p->next;
    }
}
int main()
{
    struct Node *last=first;
    create(first,last,10);
    create(first,last,8);
    display(first);
}
