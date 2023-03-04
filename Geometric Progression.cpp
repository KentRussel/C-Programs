#include <stdio.h>
#include<math.h>
int main() {
    
    int a, n, r;
    float nt, sum = 0;
    
    printf("\n\n\n\t Geometric Progression by Kent Russel C. Payumo from BSIT 1-2 ");
    
    printf("\n\n\t Please enter the first number of the Geometric Progression: ");
    scanf("%d", &a);
    printf("\n\n\t Please enter the total numbers of the Geometric Progression: ");
    scanf("%d", &n);
    printf("\n\n\t Please enter the common ratio of the Geometric Progression: ");
    scanf("%d", &r);
  
   //formula of the Geometric Progression to get the nth term and the sum
    
	sum = (a * (1 - pow(r, n ))) / (1- r);
    nt = a * (pow(r, n - 1));
    
    printf("\n\n\n\t The Sum of Geometric Progression is =  %.2f", sum);
   
    printf("\n\n\n\t The Nth term of the Geometric Progression is = %.2f \n", nt);
   
    return 0;
}

