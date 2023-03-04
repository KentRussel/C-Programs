#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
double g, facto=1, ctrl=1;
int A1, An, dif, nth, ctr3 = 1;
int a1, ra, nth1, an, ctr4 = 1;
float asub1, diff, nth2, an1, ctr5 = 1;
float iF, iC, fF, fC;
char N;

     printf("\n\n\n\n\t\t 8 Different Programs:" );
     
     printf("\n\n\n\t (B)  Height and Weight Converter Program ");
     printf("\n\n\n\t (C)  Temperature Converter Program"); 
     printf("\n\n\n\t (D)  Compound Interest Program");
     printf("\n\n\n\t (E)  Permutation Program");
     printf("\n\n\n\t (F)  Factorial Program");
     printf("\n\n\n\t (G)  Arithmetic Progression Program");
     printf("\n\n\n\t (H)  Geometric Progression Program");
     printf("\n\n\n\t (I)  Harmonic Progress ion");
     
	 printf("\n\n\n\t Please enter the letter of the program you want to use:");
	 scanf("%c", &N);

switch(N){

case 'B': 
case 'b':
      
	  //title of the program
        printf("\n\n\t Program to convert your Height in feet into centimeters and Weight in kilo into pounds\n");

        //float values
        float f, i, k, h, Fh, Pw;           
        char A;        
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
        
     break;

case 'C':
case 'c': 
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


case 'D': 
case 'd': 
     printf("\n\n\n\t\t\t the Ship Class category is  DESTROYER\n\n\n\t\t\t ");
     break;

case 'F':
case 'f':  
     printf("\n\n\n\t\t\t the Ship Class category is  FRIGATE\n\n\n\t\t\t ");
     break;
     
default:
     printf("\n\n\n\t\t\t Error input, please choose again. \n\n\n\t\t\t  ");
            
     	}
 
return 0;

}
