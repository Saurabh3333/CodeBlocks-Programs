#include<stdio.h>
#include<conio.h>
main(){
int a,b,c;
int *p1,*p2;
printf("Enter ur first number\t");
scanf("%d",&a);
printf("Enter ur Second number\t");
scanf("%d",&b);
p1=&a;
p2=&b;
c=*p1**p2;
printf("Multiplication of %d and %d is \t%d",a,b,c);
}
