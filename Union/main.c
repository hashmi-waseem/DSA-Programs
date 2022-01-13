#include<conio.h>
#include<stdio.h>
struct array
{
    int *A[500];
    int size;
    int length;
};
void display(struct array ar)
{
        for(int i=0;i<ar.length;i++)
        {printf(" %d \n",ar.A[i]);}
}
void enter(struct array *ar1)
{
    printf("Enter the elements of the array \n");
    for(int i=0;i<ar1->length;i++)
    scanf("%d",&ar1->A[i]);
}
void merge(struct array *ar1, struct array *ar2, struct array *ar3)
{
    int i,j,k;
    i=j=k=0;
    printf("hii");
    while(i<ar1->length&&j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
        {
            ar3->A[k++]=ar1->A[i++];
        }
        else if(ar2->A[j]<ar1->A[i])
        {
            ar3->A[k++]=ar2->A[j++];
        }
        else
        {ar3->A[k++]=ar1->A[i++];j++;}


    }
    for(;i<ar1->length;i++)
        ar3->A[k++]=ar1->A[i];
    for(;j<ar2->length;j++)
        ar3->A[k++]=ar2->A[j++];
}
void intersection(struct array *ar1, struct array *ar2, struct array *ar3)
{
    int i,j,k;
    i=j=k=0;
    printf("hii");
    while(i<ar1->length&&j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
        {
            i++;//ar3->A[k++]=ar1->A[i++];
        }
        else if(ar2->A[j]<ar1->A[i])
        {
            j++;//ar3->A[k++]=ar2->A[j++];
        }
        else
        {ar3->A[k++]=ar1->A[i++];j++;}


    }
}
void diff(struct array *ar1, struct array *ar2, struct array *ar3)
{
    int i,j,k;
    i=j=k=0;
    printf("hii");
    while(i<ar1->length&&j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
        {
            ar3->A[k++]=ar1->A[i++];
        }
        else if(ar2->A[j]<ar1->A[i])
        {
            j++;
        }
        else
        {i++;j++;}
        }
        for(;i<ar1->length;i++)
            ar3->A[k++]=ar1->A[i];

}
int main()
{
    struct array ar1={{1,5,9,11,13,20,21,80},11,8};
    struct array ar2={{1,5,6,13,21,30,76},13,7};
    struct array ar3={{1},20,10};
    diff(&ar1,&ar2,&ar3);
    display(ar3);
    return 0;
}
