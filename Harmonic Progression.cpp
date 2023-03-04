#include <stdio.h>
#include <math.h>

int main ()
{
	float a1, d, n, an, sn, ctr = 1;
	
	printf("\n\n\t Harmonic Progression by Kent Russel C. Payumo from BSIT 1-2");
	printf("\n\t Please enter the first number of the Harmonic Progression: ");
	scanf("%f", &a1);
	printf("\n\t Please enter the common difference of the Harmonic Progression: ");
	scanf("%f", &d);
	printf("\n\t Please enter the total numbers of the Harmonic Progression: ");
	scanf("%f", &n);
	
	//formula for the Harmonic Series
	an = a1 + (n - 1) * d;
	
	
	printf("\n\n\t The Nth term: 1/%.0f", an);
	printf("\n\n\n\t The Elements of the Series from A1 to An: ");
	
	while (ctr <= an)
	{
		printf("\n\n\n\t 1/%.0f", a1);
		a1 = a1 + d;
		ctr = ctr + d;
	}
	
	return 0;

}
