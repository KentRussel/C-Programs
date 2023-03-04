#include <stdio.h>

void Print(void);
float convertion (int x);

int main()
{
	Print();
	float kg;
	
	printf("\n\n\tEnter your weight in kilogram: ");
	scanf("%f", &kg);
	
	printf("\n\n\tYour weight in Pounds: %0.2f", convertion(kg));
	
	return 0;
}

float convertion (int x)
{
	float convert;
	
	convert = x * 2.20462;
	
	return convert;
}

void Print(void)
{
	printf("\n\n\t Program to convert Kilo to Pounds: ");
}
