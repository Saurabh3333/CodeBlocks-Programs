#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    int a,b,c;
    printf("Enter the First number\t");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the Second number\t");
    scanf("%d",&b);
    printf("\n");
    printf("ENTER THE OPERATION WHICH YOU WANT TO PERFORM\t");

    ch=getchar();

    printf("You have entered \t'%c'",ch);

    if(ch==42)
    {
        c=a*b;
    }
    else
       if(ch==43)
    {
        c=a+b;
    }
    else
        if(ch==45)
    {
        c=a-b;
    }
    else
        if(ch==47)
    {
        c=a/b;
    }

printf("The required result is\t %d",c);
getch();
return(0);
}
