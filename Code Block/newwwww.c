#include<stdio.h>

int main()
{
    float a,b;
    int i;
    int n;
    printf("Enter any integer");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       if(i==1)
       {
           a=1+i/n;
       }
       if(i>1)
       {
           b=1+i/a;
           a=b;
       }
    }
     printf("%f",b);
}
