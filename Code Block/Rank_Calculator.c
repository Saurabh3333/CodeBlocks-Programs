#include<stdio.h>
main()
{
    int n,i,f;
    int n1,n2,n3,n4,n5;
    int sum;

printf("Enter the total number of students");
printf("\t");
scanf("%d",&n);
int mar[n];
for(i=0;i<=n-1;i++)
{
    printf("Enter the marks:: ");
    printf("\n");
    printf("English");
    printf("\t");
    scanf("%d",&n1);
    printf("Engineering Mathematics");
    printf("\t");
    scanf("%d",&n2);
    printf("Physics");
    printf("\t");
    scanf("%d",&n3);
    printf("Engineering Chemistry");
    printf("\t");
    scanf("%d",&n4);
    printf("Principles of Electrical Engineering");
    printf("\t");
    scanf("%d",&n5);
    printf("\n");
    sum=n1+n2+n3+n4+n5;
    printf("Total score of the student=\t%d",sum);
    printf("\n");
    mar[i]=sum;
}                                            //Array not working
 printf("Total marks obtained by all students");
  for(f=0;f<=n-1;f++)
  {
      printf("%d",mar[i]);
      printf("\t");
  }

}
