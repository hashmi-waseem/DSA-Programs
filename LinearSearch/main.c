#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *a;
	int length;
};
void element(struct array *ar)
{
	printf("Enter the elements");
	int i;
	for(i=0;i<ar->length;i++)
	{
		scanf("%d",&ar->a[i]);
	}
}
void display(struct array ar)
{
	int i;
	printf("The elements of the array are");
	for(i=0;i<ar.length;i++)
	{
		printf("%d \n",ar.a[i]);
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int search(struct array *ar,int key)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(ar->a[i]==key)
		{
			swap(&ar->a[i],&ar->a[0]);
			return 0;
		}
		else
		return -1;
	}
}
int main()
{
	struct array ar;
	ar.a=(int*)malloc(5*sizeof(int));
	ar.length=5;
	int x;
	element(&ar);
	x=search(&ar,5);
	if(x==0)
	{
		printf("element found at index 0");
	}
	display(ar);
	return 0;
}
