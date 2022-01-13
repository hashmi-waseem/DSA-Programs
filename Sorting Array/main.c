#include <stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int temp,A[6]={-60,5,6,-300,-2,-56};
    int i=0,j=5;


while(i<j)
{
    while(A[i]<0)
    {
        i++;
    }
    while(A[j]>0)
    {
        j--;
    }
    if(i<j)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }

}
    for(int i=0;i<6;i++)
        printf("%d \n",A[i]);

    return 0;
}

/*int main()
{
    int A[6]={-60,5,6,-300,-310,-56};
    for(int i=0;i<6;i++)
    {
        if(A[i]>A[i+1])
            printf("Array is not sorted\n");
    }
    int j=6,i=0,temp;
    while(i<j)
    {
        while(A[i]<0)
        {
            i++;
        }
        while(A[j]>0)
         {
            j--;
         }
        while(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    for(i=0;i<6;i++)
        printf("%d\n",A[i]);




}
*/
