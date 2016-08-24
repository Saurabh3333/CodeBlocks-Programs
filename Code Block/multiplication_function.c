#include<stdio.h>
#include<conio.h>
mul(int x,int y);
int main()
{
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    c=mul(a,b);
    printf("Multiplication of %d and %d is %d",a,b,c);
}
mul(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
