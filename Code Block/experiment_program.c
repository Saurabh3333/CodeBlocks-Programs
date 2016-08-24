#include<stdio.h>
main()
{
    typedef int number;
 typedef char name;
     name a[10],b[10];

    number n1,n2;

    n1=10;
    n2=n1+3;
    printf("%d\t%d",n1,n2);
    printf("\n");
    a[10]="saurabh";
     b[10]="shubham";
    printf("%s   %s",a,b);
}
