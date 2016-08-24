#include<stdio.h>
#include<conio.h>
 int lcm(int a,int b);
void main()
{
    int n;
    int x,y;
    printf("Enter the no. of elements you want to insert in the array::\t");
    scanf("%d",&n);
    int A[n];
    int i;
    printf("Enter the numbers by pressing enter:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&A[i]);

    }
    printf("\n");
    for(i=0;i<=n-1;i++)
    {
      printf("%d\t",A[i]);
    }


}

int lcm(int a,int b)
{

}
