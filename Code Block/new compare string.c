#include<stdio.h>

void main()
{
      int matchstat=0;
      int m,n,i;

     char a[25];
    char b[25];

    printf("Enter first string\t");
    scanf("%s",a);
    printf("\nEnter second string\t",b);
    scanf("%s",b);

    m=strlen(a);
    n=strlen(b);
    if(m==n)
    {

    for(i=0;i<=m;i++)
    {
        if(a[i]!=b[i])
        {
            matchstat=1;
            break;
        }
    }
    if(matchstat==1)
        printf("\nNo they are not same");
    else
        printf("\nYes they are same");
    }
    else
        printf("They are not same");
}
