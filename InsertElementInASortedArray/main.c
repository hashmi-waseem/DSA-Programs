#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,A[6]={1,2,8,9,10};
    while(A[i]>5)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=5;
    for(i=0;i<5;i++)
    printf("%d\n",A[i]);
    return 0;
}
