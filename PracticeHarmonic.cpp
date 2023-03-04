#include <stdio.h>

int main() {
	unsigned short int n, i;
	float sum = 0;

	printf("\n\n\t Please enter the value of n: ");
	scanf("%hu", &n);

	for(i = 1; i <= n; i++) {
		sum += 1/(float) i;
	}

	printf("The sum of Harmonic Series up to %hu terms is: %f", n, sum);

	return 0;
}
