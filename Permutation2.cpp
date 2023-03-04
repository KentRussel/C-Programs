#include<stdio.h>
#include<math.h>

int main(void)
{
    double x, d, n, r, Per, fact=1, ctr=1, fact1 = 1, ctr1 = 1;

    printf("\n\tPermutation Program\n");

    printf("\n\tEnter an Integer(Whole Number): ");
    scanf("%lf", &n);

    printf("\n\tEnter a Restriction: ");
    scanf("%lf", &r);

    while (ctr<=n)
    {
        fact=fact*ctr;
        ctr++;
    }

    d = n-r;

    while (ctr1<=d)
    {
        fact1=fact1*ctr1;
        ctr1++;
    }
    
    Per = fact/fact1;

    printf("\n\tAnswer: %0.0lf", Per);

return 0;
}

