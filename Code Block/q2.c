#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("Enter the no. of elements of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",arr[i]);
    }


    return 0;
}
