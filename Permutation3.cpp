#include<stdio.h>
#include<math.h>

int main(void)
{
    double n, r, d, P, c, c2, fact=1, ctr=1, fact2=1, ctr2=1, fact3=1, ctr3=1;

    printf("\n\n\tPERMUTATION and COMBINATION PROGRAM\n");

    printf("\n\n\tPlease input a number (n): ");
    scanf("%lf", &n);
    printf("\n\tPlease input a number (r): ");
    scanf("%lf", &r);


    while (ctr<=n)
    {
        fact=fact*ctr;
        ctr++;
    }

    d=n-r;
    while (ctr2<=d)
    {
        fact2=fact2*ctr2;
        ctr2++;
    }
    P = fact/fact2;

    while (ctr3<=r)
    {
        fact3=fact3*ctr3;
        ctr3++;
    }
    c = fact2*fact3;
    c2 = fact/c;


    printf("\n\n\tThe Factorial of %0.0lf IS: %0.0lf", n, fact);
    printf("\n\n\tThe Permutation P is(%0.0lf, %0.0lf) IS: %0.0lf.", n, r, P);
    printf("\n\n\tThe Combination C is(%0.0lf, %0.0lf) IS: %0.0lf.", n, r, c2);

    printf("\n\n\n\n\n");

return 0;
}
