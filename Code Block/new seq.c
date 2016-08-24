#include<stdio.h>

int main()
{
    float z=1;
    int i;
    int n;
    printf("Enter any integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        z=1+i/(z+1);

        printf("%f",z);

}
