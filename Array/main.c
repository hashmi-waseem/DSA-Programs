#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *A;
	int size;
	int length;
};
void display(struct array ar)
{
	int i;
		printf("Elements of the array are");
	for(i=0;i<ar.length;i++)
	{
		printf("%d \n",ar.A[i]);
	}
}
int main()
{

	struct array ar;
	int i;
	ar.A=(int*)malloc(ar.size*sizeof(int));

	printf("Enter the length of array\n");
	scanf("%d \n",&ar.length);
	printf("Enter the elements of the array\n");
	for(i=0;i<ar.length;i++)
	scanf("%d\n",&ar.A[i]);
	display(ar);


return 0;

}
