#include <stdio.h>
#include <math.h>

int main()
{
	//printfs
	printf("\n\n\t COMPARATIVE VALUES FOR ARITHMETIC, GEOMETRIC, AND HARMONIC PROGRESSION:");
	
	//values
	float a1, r, n, ctr = 1;
	
	//printfs
	printf("\n\n\t Please enter the value of the first term (A1): ");
	scanf("%f", &a1);
	
	printf("\n\n\t Please enter the value of the ratio (or common difference): ");
	scanf("%f", &r);
	
	printf("\n\n\t Please enter the value of the total number of terms (n): ");
	scanf("%f", &n);
	
	printf("\n\n\t THE ELEMENTS OF THE SERIES: ");
	
	printf("\n\n\tARITHMETIC\t\tGEOMETRIC\t\tHARMMONIC");
	
	//values
	float arithmetic = a1, geometric = a1, harmonic = a1;
	while (ctr<=n)
	{
		//execution
		printf("\n\n\t%0.0f\t\t\t%0.0f\t\t\t1/%0.0f or %0.2f", arithmetic, geometric, harmonic, 1/harmonic);
		arithmetic+=r;
		geometric*=r;
		harmonic+=r;
		ctr++;
	} 
	

	return 0;
}
