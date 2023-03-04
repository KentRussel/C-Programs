#include <stdio.h>
int main() 
{
    int base, exp;
    long double result = 1.0;
    printf("\n\n\tProgramm to calculate for Power:\n");
	
	printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}
