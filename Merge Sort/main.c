#include <stdio.h>
#include <stdlib.h>
void Merge(int A[],int l,int mid, int h)
{
    int i,j,k,B[h+1];
    i=l;
    j=mid+1;
    k=0;

    while(i<=mid&&j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else if(A[j]<A[i])
            B[k++]=A[j++];
    }
    for( ;i<=mid;i++)
        B[k++]=A[i];
    for( ;j<=h;j++)
        B[k++]=A[j];


    for(i=l;i<=h;i++)
        A[i]=B[i];
}

void MergeSort(int A[] ,int l ,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
    for(int n=0;n<=h;n++)
    {
        printf("\n%d\n",A[n]);
    }

}
int main()
{
    int A[6]={10,13,45,1,90,10};
    MergeSort(A,0,5);
    for(int n=0;n<=6;n++)
    {
        printf("\n%d\n",A[n]);
    }
    return 0;
}
