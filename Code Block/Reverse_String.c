#include<stdio.h>
#include<conio.h>
int func1();
main()
{
    int l,i;
    char str[20];
    printf("Enter any String");
    printf("\t");
    scanf("%s",str);
    l=strlen(str);
    printf("The number of Character in the given string is \t%d",l);
    printf("\n");
    printf("The reversed String is");
    printf("\t");
    for(i=l-1;i>=0;i--)
    {
        printf("%C",str[i]);
    }

}
