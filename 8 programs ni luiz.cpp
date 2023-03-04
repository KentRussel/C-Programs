#include <stdio.h>
#include <math.h>

int main (void)
{
	printf ("\n\n\t\t TEN MATH CALCULATOR PROGRAMS\n");		
	
	int mainchoice;
		printf("\n\n\n 1) Feet to Cm: \n 2) Cm to Feet: \n 3) Kilo to Pounds: \n 4) FARENHEIT TO CELCIUS: \n 5) CELCIUS TO FARENHEIT: \n 6) Arithmetic Sequence: \n 7) Geometric Sequence: \n ?? Harmonic Sequence: \n\n\n Choose a program:   ");
		scanf("%d",&mainchoice );
			if (mainchoice == 1) //Feet to Cm//
				{			
		float h, hcm;
			printf ("\n\n\tWhat is your height in feet?: " );
			scanf ("%f", &h );
			hcm=(h*30.48);
			printf("\n Your height in centimeters is %f cm ", hcm);
		}
	else if (mainchoice == 2) //Cm to Feet//
				{
		float i, hfeet;
			printf ("\n\t What is your height in centimeters? : " );
			scanf ( "%f", &i );
			hfeet=(i*0.0328084);
			printf("\n Your height in feet is %f ft.", hfeet);
	}
	else if (mainchoice == 3) //Kilo  to Pounds//
	{ 
		float kg, pounds;
		printf ("\n\n\t What is your weight in kilo?: ");
		scanf ("%f", &kg);
		pounds= (kg*2.20462);
		printf("\n Your weight in pounds is %f lbs.", pounds);
		}
			if (mainchoice == 4) //Farenheit Input//
			{
			int farenheit, celciusanswer1ststep, celciusanswer2ndstep, celciusanswer3rdstep;
			printf("\n\n\n (Now on F to C) Type Your Farenheit:  ");
			scanf("%d", &farenheit); //formula f to f//
				celciusanswer1ststep=farenheit-32;
				celciusanswer2ndstep=celciusanswer1ststep*5;
				celciusanswer3rdstep=celciusanswer2ndstep/9;
					printf("%d degree Farenheit is equal to: %d degree Celsius", farenheit, celciusanswer3rdstep);
		
			}
		else if (mainchoice == 5) //Celcius Input//
			{
			int celcius, farenheitanswer1ststep, farenheitanswer2ndstep, farenheitanswer3rdstep;
			printf("\n\n\n (Now on C to F) Type Your Celcius:  ");
			scanf("%d", &celcius);//formula for c to f//
				farenheitanswer1ststep=celcius*9;
				farenheitanswer2ndstep=farenheitanswer1ststep/5;
				farenheitanswer3rdstep=farenheitanswer2ndstep+32;
					printf("%d degree Celcius is equal to: %d degree Farenheit", celcius, farenheitanswer3rdstep);
			
}		
	if (mainchoice == 6) //Aritmethic Sequence//	
		{
	int a1, d, n, ctr=1, an;

	printf("\n\n\tWelcome to Arithmetic Progression Program!" );

	printf("\n\n\n\tEnter First Term: ");
	scanf("%d", &a1);
	printf("\n\tEnter Common Difference: ");
	scanf("%d", &d);
	printf("\n\tEnter Number of Terms: ");
	scanf("%d", &n);

	printf("\n\n\n\tThe Arithmetic Sequence of %0.0d from a1 to a%d:", a1, n);

	an = a1 + (n - 1) * d;

	while (a1<=an)
	{
		printf("\n\n\ta%d = %d", ctr, a1);
		a1=a1+d;
		ctr++;
	} 	

	printf("\n\n\n\n");
}
	else if (mainchoice == 7) //Geometric Sequence//
	{
    double an, a1, r, n, x, ctr=1;

    printf("\n\n\tWelcome to the Geometric Sequence Calculator!\n\n\tRECALL: The formula for Geometric Sequence is = a1r^n-1.");

    printf("\n\n\n\tEnter the first term: ");
    scanf("%lf", &a1);
    printf("\n\tEnter the ratio: ");
    scanf("%lf", &r);
    printf("\n\tEnter the maximum term position: ");
    scanf("%lf", &n);
    
    printf("\n\n\n\tThe Geometric Sequence of %0.2lf from a1 to a%0.0lf: ", a1, n);

    an = a1 * pow(r, n-1);

    while (a1 <= an)
    {
        printf("\n\n\ta%0.0lf = %0.2lf", ctr, a1);
        a1 = a1 * r;
        ctr++;
    } 
    

    printf("\n\n\n\n");
}
	if (mainchoice == ?? //Harmonic Sequence//
	{
	float a1, d, n, ctr=1, an, x;

	printf("\n\n\tWelcome to Harmonic Progression Program!" );

	printf("\n\n\n\tEnter First Term (denominator): ");
	scanf("%f", &a1);
	printf("\n\tEnter Common Difference: ");
	scanf("%f", &d);
	printf("\n\tEnter Number of Terms: ");
	scanf("%f", &n);

	printf("\n\n\n\t The Arithmetic Sequence of 1/%0.0f from a1 to a%0.0f:", a1, n);

	an = a1 + (n - 1) * d;

	while (a1<=an)
	{
		x = 1 / a1;
		printf("\n\n\ta%0.0f = 1/%0.0f or %0.5f", ctr, a1, x);
		a1=a1+d;
		ctr++;
	} 	

	printf("\n\n\n\n");
}
	return 0;
}
