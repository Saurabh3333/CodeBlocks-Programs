#include<stdio.h>

float func();
float main()
{
    int n;
    float ans;
    printf("Enter any number:\t");
    scanf("%d",&n);

    if(n>=1)
    {
        ans=func(n);
        printf("Answer is %f",ans);
    }
}

float func(int n)
{
    float ans;
    if(n=1)
        {ans=1+1/2;
        return(ans);}
        else
      {ans=1+(n/func(n-1));
        return(ans);}
}
