#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct array
{
	int *A;

	int size;
};
void display(struct array a)
{
	int i;
	printf("Elements of the array are");
	for(i=0;i<a.size;i++)
	{
	printf("%d",a.A[i]);
	}
}
int main(int argc, char *argv[])
{
	int j;
	struct array a;
	a.A=(int*)malloc(a.size*sizeof(int));
	printf("Enter The size of the array");
	scanf("%d",&a.size);
    printf("Enter the elements of the array");
	for(j=0;j<a.size;j++)
	{
		scanf("%d",&a.A[j]);
	}
	display(a);

	return 0;
}
