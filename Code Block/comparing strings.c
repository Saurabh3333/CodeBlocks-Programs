#include<stdio.h>

void main()
{
    int i,j,m,n;
    int c=0,d=0;
     char a[25];
    char b[25];

    printf("Enter first string\t");
    scanf("%s",a);
    printf("\nEnter second string\t",b);
    scanf("%s",b);

    m=strlen(a);
    n=strlen(b);

    for(i=0;i<m-1;i++)
    {


    if(a[i]==b[i])
        c=c+1;

    }


    if(c==(m-1))         // problem in c==m-1
        printf("\n\tBoth are same");
    else
        printf("\n\tThey are not same");
}
