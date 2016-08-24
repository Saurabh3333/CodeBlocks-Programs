#include<stdio.h>
#include<conio.h>
void main()
{  float a,b,i,n;
   printf("Enter any integer\t");
   scanf("%f",&n);
   for(i=1;i<=n;i++)
    {
      if(i==1)
	{ a=1+(i/n);
	  b=a;
	  }
     if(i>1)
     {
       b=1+(i/b);
       }
    }
    printf("%f",b);
 getch();
}
