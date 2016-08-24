#include<stdio.h>
#include<conio.h>
int func1();
main()
{
    int l;
    char str[20];
    printf("Enter any String");
    printf("\t");
    scanf("%s",str);
    l=strlen(str);
    printf("%d",l);
}
