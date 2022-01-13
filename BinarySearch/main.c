#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *A;
	int length;
};
void elements(struct array *ar)
{
	printf("Enter the elements of array\n");
		for (int i=0;i<ar->length;i++)
	{
		scanf("%d",&ar->A[i]);
	}
}
void display(struct array ar)
{
	printf("The elements are\n");
	for(int i=0;i<ar.length;i++)
	{
		printf("%d \n",ar.A[i]);
	}
}
int BinarySearch(struct array *ar,int key)
{
	int low=0;
	int high=ar->length;
	int mid;
	if(low<=high)
	for(int i=0;i<ar->length;i++)
	{
		mid=(low+high)/2;
		if(key==ar->A[mid])
		{
			return mid;
		}
		else if(key<ar->A[mid])
		{
			high=mid-1;
		}
		else if(key>ar->A[mid])
		{
			low=mid+1;
		}
	}
	return -1;
}
int recbinsearch(struct array *ar,int low, int high,int key)
{

    int mid;
    low=0;
    high=ar->length;
    for(int i=0;i<ar->length;i++)
    {
        mid=(low+high)/2;
        if(key==ar->A[mid])
        {
           return mid;
        }
        else if(key<ar->A[mid])
        {
            return recbinsearch(&ar,low,mid-1,key);
        }
        else if(key>ar->A[mid])
        {
            return recbinsearch(&ar,mid-1,high,key);
        }
    }
    return key;
}
int main()
{
	struct array ar;
	int x,key=-1;
	ar.A=(int*)malloc(5*sizeof(int));
	ar.length=5;
	elements(&ar);
    printf("Enter the key to search\n");
    scanf("%d\n",&key);
	x=recbinsearch(&ar,0,5,key);

	printf("element found at index %d\n\n\n",x);
}
