#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
   int x=0;
   float y;


    printf("Angle(x)\t   Cos(x)");
    while(x<=180)
    {
        y=(pi/180)*x;
    printf("\n");
    printf("%d\t\t%10.4f",x,cos(y));
    x=x+10;
    }
}
