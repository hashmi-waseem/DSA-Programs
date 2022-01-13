#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void BubbleSort(int A[],int n)
{
    int flag=0,i=0,j=0;

    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            { swap(&A[j],&A[j+1]); flag++; }
        }
    }
    printf("\nElements Sorted In %d Swaps\n",flag);

    for(i=0;i<n;i++)
    {
        printf("\n%d\n",A[i]);
    }
}

void InsertionSort(int A[],int n)
{
    int x,i=0,j=0;
    for(i=1;i<n;i++)
    {
        x=A[i];
        j=i-1;
        while(A[j]>x&&j>-1)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d\n",A[i]);
    }
}
void SelectionSort(int A[],int n)
{
    int i,j,k;

    for(i=0;i<n;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i],&A[k]);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d\n",A[i]);
    }
}
int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l;
    int j=h;
    do
    {

        do
        {
        i++;
        }while(A[i]<=pivot);

        do
        {
        j--;
        }while(A[j]>=pivot);
        if(i<j)
            {
                swap(&A[i],&A[j]);
                printf("hi");
            }

    }while(i<j);

    swap(&A[l],&A[j]);
    return j;
}
void QuickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }

}
int main()
{
    int A[6]={90,5,45,7,6,700};
    QuickSort(A,0,5);
    for(int i=0;i<6;i++)
    {
        printf("%d \n",A[i]);
    }
    return 0;
}
