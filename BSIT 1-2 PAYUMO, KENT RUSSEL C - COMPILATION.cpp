#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
  	
int n, r, npr_var;
int a, b, c = 1;
int d, nt, i, sum = 0;
float a1, an, sn, ctr = 1;
float iF, iC, fF, fC;
float f, k, h, Fh, Pw;    
float P, T, R, CI, nPr;
char N, A, fact;

     printf("\n\n\n\n\t\t 8 Different Programs:" );
     
     printf("\n\n\n\t (A)  Height and Weight Converter Program ");
     printf("\n\n\n\t (B)  Temperature Converter Program"); 
     printf("\n\n\n\t (C)  Compound Interest Program");
     printf("\n\n\n\t (D)  Permutation Program");
     printf("\n\n\n\t (E)  Factorial Program");
     printf("\n\n\n\t (F)  Arithmetic Progression Program");
     printf("\n\n\n\t (G)  Geometric Progression Program");
     printf("\n\n\n\t (H)  Harmonic Progression");
     
	 printf("\n\n\n\t Please enter the letter of the program you want to use:");
	 scanf("%c", &N);

switch(N){

case 'A':case 'a':
      
	    //title of the program
        printf("\n\n\t Program to convert your Height in feet into centimeters and Weight in kilo into pounds\n");

              
        //to ask the user for values/inputs
        printf("\n\t Please enter your Height in Feet: ");
        scanf("%f", &f);
        printf("\n\t Please enter the inches in your Height: ");
        scanf("%f", &i);
        printf("\n\t Please enter your Weight in kilo: ");
        scanf("%f", &k);

        //formula
        h = (f*12)+0;
        Fh = (h*2.54);
        Pw = (k*2.2);  

        printf("\n\n\t The Height in centimeters is %0.2f cm", Fh);
        printf("\n\n\t The Weight in centimeters is %0.2f lbs", Pw);
        
        printf("\n\n\t Please enter the letter of the program you want to use:");
	    scanf("%c", &N);
       
     break;
     
case 'B':case 'b': 
         //title of the program
		printf("\n\n\t Program to convert Fahrenheit to Celcius and vice versa \n\n\t");
    
		//to get input values
        printf("\n\n\t Please enter the temperature in Fahrenheit: ");
        scanf("%f", &iF);
        
        //formula of the program
        fF = (iF - 32)*5 / 9;
        
		//output
        printf("\n\n\t The temperature from fahrenheit to celcius is %.2f C", fF);
    
		printf("\n\n\t Please enter the temperature in Celcius: ");
        scanf("%f", &iC);
        
		//formula of the program
        fC = (iC * 9)/5 + 32;
        
		//output
        
		printf("\n\n\t The temperature from celcius to fahrenheit is %.2f F", fC);
     
	 break;


case 'C': case 'c': 
        
        //title of the Program
        printf("\n\n\t\t Program to Compute for the Compound Interest:");
        
		//to get user input values
        printf("\n\n\t\t Please enter the Principle Amount:");
        scanf("%f", &P);
        printf("\n\n\t\t Please enter the Time:");
        scanf("%f", &T);
        printf("\n\n\t\t Please enter the Rate:");
        scanf("%f", &R);
        
        //calculations
        CI = P*((pow((1+R/100),T)-1));
        
        //result
        printf("\n\n\t\t The Compound Interest computation is %.2f", CI);
		 
     break;

case 'D':case 'd':  
     
        //Title of the Program
        printf("\n\t Program to compute for Permutation:");
        
		printf("\n\t Please Enter the value of n:");
        scanf("%d", &n);
        printf("\n\t PleaseEnter the value of r:");
        scanf("%d", &r);
        
		//Computation
		nPr = (n) / (n - r);
        printf("\n\t The value of Permutation is: %d", nPr);

    break;

case 'E': case 'e':
        
        //Title of the Program
        printf("\n\t Factorial Program:");
        
		printf("Please enter a number to calculate its factorial:\n");
        scanf("%d", &b);
        
		//formula
		for (a = 1; a <= b; a++)
        c = c * a;
 
        printf("Factorial of %d = %d\n", b, c);
        
    break;

case 'F': case 'f':
	    
	    //Title of the Program
	    printf("\n\t Program to compute for Arithmetic Progression");
	    
	    //User input Values
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
    
	break;
	
case 'G': case 'g':
	     
	    //Title of the Program
	    printf("\n\t Program to compute for Geometric Progression");
        
        //User input values
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
    
    break;
    
case 'H': case 'h':
         
		//Title of the Program
		printf("\n\t Program to compute for Harmonic Progression");
		
		printf("\n\t Please enter the first number of the Harmonic Progression: ");
	    scanf("%f", &a1);
	    printf("\n\t Please enter the common difference of the Harmonic Progression: ");
	    scanf("%f", &d);
	    printf("\n\t Please enter the total numbers of the Harmonic Progression: ");
	    scanf("%f", &n);
	
	    //formula for the Harmonic Series
	    an = a1 + (n - 1) * d;
	
	
	    printf("\n\n\t The Nth term: 1/%.0f", an);
	    printf("\n\n\n\t The Elements of the Series from A1 to An: ", a1);
	
	    while (ctr <= an)
	{
		printf("\n\n\n\t 1/%.0f", a1);
		a1 = a1 + d;
		ctr = ctr + d;
	} 
	
	break;


default:
     printf("\n\n\n\t\t\t Error input, please try again. \n\n\n\t\t\t  ");
     
     return 0;
            
     	}
     }
