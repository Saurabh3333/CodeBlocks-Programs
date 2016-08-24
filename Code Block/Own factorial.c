#include<stdio.h>
int mul();
main()
{
    int n;
    int i;
    printf("\nEnter any number between 0-100\t");
    scanf("%d",&n);



    int ans;
    ans=mul(254,475);



    return 0;
}

int mul(int a,int b)
{
    int carry[200];
    int remainder[200];
    int quotient[200];

     if(a<b)
     {
         int c;
         c=a;
         a=b;
         b=c;
     }

     printf("Product of %d and %d is  ",a,b);

     int m,n,l;
     int f,g=0,h;
     int i,j;
     for(i=1;i<=3;i++){
     l=a%10;
     m=l*b+g;
     f=m%10;
     g=m/10;
     a=a/10;
     f=remainder[i];
     printf("%d",remainder[i-1]);
        }
}
