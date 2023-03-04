#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	double g, facto=1, ctrl=1;
	int A1, An, dif, nth, ctr3 = 1;
	int a1, ra, nth1, an, ctr4 = 1;
	float asub1, diff, nth2, an1, ctr5 = 1;
	
	
	printf("\n\n\n\tDIFFERENT PROGRAMS");
	
	printf("\n\n\tChoose a Program");
	
	printf("\n\n\tTemperature Program (1)");
	printf("\t\t\t\tWeight and Height Conversion Program (2)");
	printf("\t\tCompound Interest Program (3)");
	printf("\n\n\tFactorial Program (4)");
	printf("\t\t\t\tCombination and Permutation Program (5)");
	printf("\t\t\tArithmetic Progression Program (6)");
	printf("\n\n\tGeometric Progression Program (7)");
	printf("\t\tHarmonic Progression Program (8");
	printf("\n\n\tPress 9 to Exit (9)");
	
	int n;
	int isover = 0;
	
	do
	{
		printf("\n\n\n\tEnter the Program you want to use: ");
		scanf("%d", &n);
		
		switch
		{
			case 1:
		
				float f,c;
				int choice;
				
				printf("\n\n\tTemperature Conversion Program\n\n");
				printf("\n\t1. Conversion to Celcius to Fahrenheit. ");
				printf("\n\n\t2. Conversion to Fahrenheit to Celcius. ");
				printf("\n\n\n\tChoose your Conversion (1 or 2): ");
				scanf("%d", &choice);
	
				if(choice==1)
				{
					printf("\n\n\tEnter the temperature in Celcius: ");
					scanf("%f", &c);
					f = (c*1.8 + 32;
					printf("\n\n\tTemperature in Fahrenheit: %0.2f",f);
				}
	
				else if(choice==2)
				{
					printf("\n\n\tEnter the temperature in Fahrenheit: ");
					scanf("%f", &f);
					c = (f-32)*1.8;
					printf("\n\n\tTemperature in Celcius: %0.2f",c);
				}
				else
				{
					printf("\n\n\tInvalid Choice!");
				}
				printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}			
			break;
			
			
			case 2:
				
				printf("\n\n\tHeight and Weight Conversion Program\n\n");

    			float ht, wt, in, hinch, hfinal, wfinal;

    			printf("\n\n\tWhat is your height in Feet: ");
    			scanf("%f", &ht);
   				printf("\n\tWhat is the excess height in inch/es, if none put (0): ");
    			scanf("%f", &in);

    			hinch = (ht*12)+in;
    			hfinal = (hinch * 2.54);

    			printf("\n\n\n\tWhat is you weight in kilogram (kg): ");
    			scanf("%f", &wt);

    			wfinal = (wt*2.20462);

    			printf("\n\n\tYour height in centimeters  is %0.2f cm. and your weight in pounds is %0.2f lbg, Thank you!" ,hfinal,wfinal);
    			
    			printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}
			break;
			
			case 3:
				
				float fa, p, r, t;
	
				printf("\n\n\tPlease put the Principle Amount: ");
				scanf("%f", &p);
	
				printf("\n\n\tPlease enter the Rate: ");
				scanf("%f", &r);
	
				printf("\n\n\tPlease enter the Time: ");
				scanf("%f", &t);
	
				fa = p * (pow((1 + r / 100), t));
	
				printf("\n\n\tThe Future Amount is %0.2f", fa);
				
				printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}
			break;
			
			case 4:

				printf("\n\n\tFactorial Program" );

				printf("\n\n\tPlease enter a Integer (Whole Number) :  ");
				scanf("%lf", &g);


				while (ctrl<=g)
				{
					facto=facto*ctrl;
					printf(" \n\n\tTHE FACTORIAL OF %0.0lf  IS:    %0.0lf " , ctrl, facto);
					ctrl++;
				} 	

				printf(" \n\n\n\t\t\t");
				
				printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				} 
			break;
			
			case 5: {
		
    			double x, d, n, r, y, y2, Per, fact=1, ctr=1, fact1 = 1, ctr1 = 1, fact2 = 1, ctr2 = 1;

    			printf("\n\n\tPermutation and Combination Program");

    			printf("\n\n\tEnter an Integer(Whole Number): ");
    			scanf("%lf", &n);

    			printf("\n\n\tEnter a Restriction: ");
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
    
    			while (ctr2 <= r)
				{
					fact2 = fact2 * ctr2;
					ctr2++;
				}
	
				y = fact1 * fact2;
    			y2 = fact / y;

				printf("\n\n\tThe Factorial of %0.0lf is %0.0lf", n, fact);
    			printf("\n\n\tThe Permutation of %0.0lf taken %0.0lf is %0.0lf", n, r, Per);
    			printf("\n\n\tThe Combination of %0.0lf taken %0.0lf is %0.0lf", n,r, y2);		
    			
    			printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}
			}
			break;
			
			case 6:

				printf("\n\n\t\t\t ARITHMETHIC PROGRESSION PROGRAM" );

				printf("\n\n\t\t\t Please Enter the First Term:   ");
				scanf("%d", &A1);
				printf("\n\n\t\t\t Please Enter the Common Difference in the Series:    ");
				scanf("%d", &dif);
				printf("\n\n\t\t\t Please Enter the number of Term/Terms:    "  );
				scanf("%d", &nth);
	
				An = A1 + (nth - 1) * dif;
	
				printf("\n\n\t\t\t THE Nth Term: %d", An); 
	
	
				printf("\n\n\t\t\t THE Elements of the Series From A1 TO An:\n " );


				while (ctr3<=nth)
				{
					printf(" \n\t\t\t\t\t %d \n\n" , A1);
					A1=A1+dif;
					ctr3++; 
				} 	
	

				printf(" \n\n\n\t\t\t");
				
				printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}
			break;
			
			case 7:
	
				printf("\n\n\t\t\t GEOMETRIC PROGRESSION");
	
				printf("\n\n\t\t\t Please Enter the First Term: ");
				scanf("%d", &a1);
	
				printf("\n\n\t\t\t Please Enter the Common Ratio: ");
				scanf("%d", &ra);
	
				printf("\n\n\t\t\t Please Enter the Number of Term/Terms: ");
				scanf("%d", &nth1);
	
				an = a1 * pow(ra, nth1 - 1);
	
	
				printf("\n\n\t\t\t The Nth term: %d", an);
	
				printf("\n\n\t\t\t THE Elements of the Series From A1 TO An:\n " );
	
				while (a1 <= an)
				{
					printf("\n\n\t\t\t %d", a1);
					a1 = a1 * ra;
					ctr4 = ctr4 + 1;
				}
				
				printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}
			break;
			
			case 8:
	
				printf("\n\n\tHARMONIC PROGRESSION PROGRAM");
	
				printf("\n\n\tPlease Enter the First Digit: ");
				scanf("%f", &asub1);
	
				printf("\n\n\tPlease Enter the Common Difference: ");
				scanf("%f", &diff);
	
				printf("\n\n\tPlease Enter the Number of Term/Terms: ");
				scanf("%f", &nth2);
	
				an1 = asub1 + (nth2 - 1) * diff;
	
	
				printf("\n\n\tThe Nth term: 1/%.0f", an1);
	
				printf("\n\n\n\tThe Elements of the Series from A1 to An: ");
	
				while (ctr5 < an1)
				{
					printf("\n\n\n\t 1/%.0f", asub1);
					asub1 = asub1 + diff;
					ctr5 = ctr5 + diff;
				}
				
				printf("\n\n\tPress spacebar key to Continue");
				if (getch() == ' '){
					system("cls");
				}
			break;					
		}
	} while(n >= 0 && n <= 8);
	
	printf("\n\n\t THANK YOU FOR USING MY PROGRAM, GOD BLESS YOU!!");
				
	return 0;
}
