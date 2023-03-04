#include<stdio.h>  
  
int main()  
{  
    const float POUND = 2.20462;  
    float kg;  
    
    printf("Program to convert Kilo to Pounds: \n");
    printf("\n Please enter weight in Kilograms:");  
    scanf("%f", &kg);  
  
    printf("The weight in Pounds is %f\n", (kg * POUND));  
  
    return 0;  
}
