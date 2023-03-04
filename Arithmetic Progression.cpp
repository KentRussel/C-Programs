/* C Program to find Sum of Arithmetic Progression Series */
#include <stdio.h>

int main() {
    	printf("Arithmetic Progression by Kent Russel C. Payumo of BSIT 1-2");

    int a, n, d, nt, i;
    int sum = 0;
       
    printf("\n\n\t Please enter first number of the Arithmetic Progression:");
    scanf("%d", &a);
    printf("\n\t Please enter the common difference of the Arithmetic Progression:  ");
    scanf("%d", &n);
    printf("\n\t Please enter the total numbers of the Arithmetic Progression:  ");
    scanf("%d", &d);
    
    //formula for the arithmetic progression
    sum = (d * (2 * a + (d - 1) * n)) / 2;
    nt = a + (d - 1) * d;
    printf("\n The sum of the Arithmetic Progression from the A1 to An is: ");
    for(i = a; i <= nt; i = i + n)
    {
        if(i != nt)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
    }
    printf("\n");
    return 0;
}
