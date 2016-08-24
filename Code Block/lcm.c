#include<stdio.h>

int main()
{
    int num1,num2;
    int i;
    int x=0;
    scanf("%d%d",&num1,&num2);

    for(i=1;i<num1*num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        x=x+1;
    }
}
