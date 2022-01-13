#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
int valid(char *n)
{
    int i;
    for(i=0;i!='\0'||i<10;i++)
    {
        if(!(n[i]>=65&&n[i]<=90)&&!(n[i]>=97&&n[i]<=122)&&!(n[i]>=48&&n[i]<=57))
            {
            return 0;
            }
            return 1;
    }
    printf("%d",i);
}
int main()
{
    char name[]="Wasee@m";
    if (valid(name))
    {
    printf("The Characters are valid \n");
    }
    else printf("The characters are not valid");
    return 0;
}
