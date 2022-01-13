#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *A;
	int size;
	int length;
	int a;
};
void display(struct array ar)
{

    int i;
    printf("The elements of the array are\n");
    for(i=0;i<ar.length;i++)
    {
        printf("%d \n",ar.A[i]);
    }
}
void elements(struct array ar)
{

    int i;
    printf("Enter the elements of the array");
    for(i=0;i<ar.length;i++)
    {
        scanf("%d \n",&ar.A[i]);
    }
}
void append(struct array *ar, int x)
{
    printf("Enter the element to be added at the end");
    if(ar->length<ar->size)
    ar->A[ar->length++]=x;
}
void insert(struct array *ar,int v,int in)
{
    int i;
    for(i=ar->length;i>in;i--)
    {
        ar->A[i]=ar->A[i-1];
    }
    ar->A[in]=v;
}
int main()
{
    struct array ar;

    printf("Enter the size of the array");
    scanf("%d",&ar.size);
    printf("Enter the length of the array");
    scanf("%d ",&ar.length);
    ar.A=(int*)malloc(ar.size*sizeof(int));
    elements(ar);
    display(ar);
    append(&ar,10);
    display(ar);
    insert(&ar,65,1);
    display(ar);
    return 0;
}
