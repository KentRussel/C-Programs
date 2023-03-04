#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{

int choice;
char N,
float f, i, k, h, Fh, Pw;
float iF, iC, fF, fC;
float p,r,t,ci; 

     printf("\n\n\n\t Please enter the letter of the program you want to use:");
	 scanf("%c", &N);

	 
	 printf("\n\n\n\n\t\t 8 Different Programs:");
     printf("\n\n\n\t (B)  Height and Weight Converter Program ");
     printf("\n\n\n\t (C)  Temperature Converter Program"); 
     printf("\n\n\n\t (D)  Compound Interest Program");
     printf("\n\n\n\t (E)  Permutation Program");
     printf("\n\n\n\t (F)  Factorial Program");
     printf("\n\n\n\t (G)  Arithmetic Progression Program");
     printf("\n\n\n\t (H)  Geometric Progression Program");
     printf("\n\n\n\t (I) Harmonic Progression");
	 
switch(N){

case 'B': 
case 'b':
	  
	    //title of the program
        printf("\n\n\t Program to convert your Height in feet into centimeters and Weight in kilo into pounds \n\n\t");
        printf("\n\t Height Conversion");
        printf("\n\t Weight Conversion");
        printf("Please choose between (1, 2):");
        scanf("%d", &choice);
		
		//to ask the user for values/inputs
		if(choice == 1){
		printf("\n\t Please enter your Height in Feet: ");
        scanf("%f", &f);
        printf("\n\t Please enter the inches in your Height: ");
        scanf("%f", &i);
        
        //formula
        h = (f*12)+0;
        Fh = (h*2.54);
        //print output
		printf("\n\n\t The Height in centimeters is %0.2f cm", Fh);
    }
        
		else (choice == 2){
		printf("\n\t Please enter your Weight in kilo: ");
        scanf("%f", &k);
    
	    //formula
	    h = (f*12)+0;
	    Pw = (k*2.2);
	    //print output
		printf("\n\n\t The Weight in centimeters is %0.2f lbs", Pw);

	}
	    else{
        printf("\n\t Invalid Choice!");
		printf("\n\n\t Press tab key to Continue");
				if (getch() == '	'){
					system("cls");
				}
			}
     break;

case 'C':
case 'c': 
        //title of the program
		printf("\n\n\t Program to convert Fahrenheit to Celcius and vice versa \n\n\t");
		printf("\n\n\t 1 Fahrenheit to Celcius");
		printf("\n\n\t 2 Celcius to Fahrenheit");
		printf("\n\n\t Please choose between (1, 2):");
        scanf("%d", &choice);
    
        if(choice == 1 ){
		}
		//to get input values
        printf("\n\n\t Please enter the temperature in Fahrenheit: ");
        scanf("%f", &iF);
        
        //formula of the program
        fF = (iF - 32)*5 / 9;
        
		//output
        printf("\n\n\t The temperature from fahrenheit to celcius is %.2f C", fF);
    }
        else(choice == 2){
		
		printf("\n\n\t Please enter the temperature in Celcius: ");
        scanf("%f", &iC);
        
        //formula of the program
        fF = (iF - 32)*5 / 9;
        fC = (iC * 9)/5 + 32;
        //output
        printf("\n\n\t The temperature from celcius to fahrenheit is %.2f F", fC);
    }
        else{
        printf("\n\t Invalid Choice!");
		printf("\n\n\t Press tab key to Continue");
				if (getch() == '	'){
					system("cls");
				}
			}
     break;

case 'D': 
case 'd':
	    
		//title of the program
	    printf("\n\n\\t Compound Interest Program ");
	    printf("Enter Principle, Rate and Time: ");
        scanf("%f%f%f",&p,&r,&t);
        ci=p*pow((1+r/100),t);
        printf("Bank Loans Compound Interest = %f%",ci);
}
     
     break;
	
return 0;

}
