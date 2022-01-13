#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5]={2,4,6,8,10},B[7]={-1,-3,-15,17,19,111,113},C[13];
    int i,j,k;
    i=j=k=0;
    while(i<5&&j<7)
    {
        if(A[i]<B[j])
        C[k++]=A[i++];
        else if(B[j]<A[i])
            C[k++]=B[j++];
    }
    for(;i<5;i++)
    C[k++]=A[i];
    for(;j<7;j++)
    C[k++]=B[j];
    for(i=0;i<12;i++)
    printf("%d \n",C[i]);
    return 0;
}
