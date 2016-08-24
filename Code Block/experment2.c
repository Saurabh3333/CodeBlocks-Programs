#include<stdio.h>
main()
{
    int arr[3]={10,20,30,40}; //Error as we have entered more values than the capacity of the array
    int i;
    for(i=0;i<=3;i++){
    printf("%d\t",arr[i]);
    }
}
