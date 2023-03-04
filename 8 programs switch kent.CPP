#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
  	
int n, r, npr_var;
float iF, iC, fF, fC;
float f, i, k, h, Fh, Pw;    
float P, T, R, CI;
char N, A, fact;

     printf("\n\n\n\n\t\t 8 Different Programs:" );
     
     printf("\n\n\n\t (1)  Height and Weight Converter Program ");
     printf("\n\n\n\t (2)  Temperature Converter Program"); 
     printf("\n\n\n\t (3)  Compound Interest Program");
     printf("\n\n\n\t (4)  Permutation Program");
     printf("\n\n\n\t (5)  Factorial Program");
     printf("\n\n\n\t (6)  Arithmetic Progression Program");
     printf("\n\n\n\t (7)  Geometric Progression Program");
     printf("\n\n\n\t (8)  Harmonic Progression");
     
	 printf("\n\n\n\t Please enter the letter of the program you want to use:");
	 scanf("%c", &N);

switch(N){

case 'B':case 'b':
      
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
     
case 'C':case 'c': 
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


case 'D': case 'd': 
        
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

case 'E':case 'e':  
     
        //Title of the Program
        printf("\n\n\t\t Program to compute for Permutation:");
        printf("Enter the value of n:");
        scanf("%d", &n);
        printf("\nEnter the value of r:");
        scanf("%d", &r);
        
		//Computation
		npr_var = (n) / (n - r);
        printf("\nThe value of P(%d,%d) is: %d",n,r,npr_var);

    break;
     
default:
     printf("\n\n\n\t\t\t Error input, please choose again. \n\n\n\t\t\t  ");
            
     	}
     }


