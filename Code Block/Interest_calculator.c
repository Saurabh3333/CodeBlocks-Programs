#include<stdio.h>
#include<conio.h>
main()
{
    int time=0;
    float amount,rate=0.11,principle=5000.00;
    while(time<=10)
    {
    amount=principle+amount*rate;
    principle=amount;
    printf("%d\t",time);
    printf("%8.2f",amount);
    printf("\n");
    time++;

    }
}
