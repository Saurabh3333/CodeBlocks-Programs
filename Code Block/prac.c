
#include <stdio.h>

#define TRUE 1

int gcd (int a, int b);

int
main (void)
{
 int g = 0, a, i = 0;
 printf ("\nFinding GCD of n integers");
 printf ("\nEnter numbers serially (\"0\" to end)\n");

 while (TRUE)
 {
   printf ("Enter Number [%d] :", i++);
   scanf ("%d", &a);
   /* 0 to end */
   if (a == 0)
     break;
   /* a is used to hold the temporary value of
 *     * gcd at ith iteration
 *         */
   g = gcd (g, a);
 }
 printf ("\nGCD is %d\n", g);

 return 0;
}

int
gcd (int a, int b)
{
 int rem;

 if (b == 0)
  return a;

 while (TRUE)
 {
   rem = a % b;
   if (rem == 0)
     break;
   a = b;
   b = rem;
 }
 return b;
}
