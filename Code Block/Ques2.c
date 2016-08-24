#include<stdio.h>
int gcd (int a, int b);

int main()
{
     int n;
     int x=-1;
     int g=0;
     int i;
    printf("Enter the no. of elements you want to insert in the array::\t");
    scanf("%d",&n);
    int A[n];
     int arr[n];
     printf("Enter all the elements by pressing enter:\t");

    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&A[i]);

    }

    for(i=1;i<=n-2;i++)
    {
        if(A[i]>A[i-1] && A[i]>A[i+1])
           {

            x=x+1;
            arr[x]=A[i];
           }

    }
    for(i=0;i<=x;i++)
    printf("\nLocal maximums are %d\t",arr[i]);

    for(i=0;i<=x;i++)
    {
        g=gcd(g,arr[i]);
    }
     printf ("\nGCD is %d\n", g);

    return 0;
}

int gcd (int a, int b)
{
  int t=1;
 int rem;

 if (b == 0)
  return a;

 while (1)
 {
   rem = a % b;
   if (rem == 0)
     break;
   a = b;
   b = rem;
 }
 return b;
}
