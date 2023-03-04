/* Aim:C code to calculate the Arithmetic Mean and Harmonic Mean of two numbers */

#include<stdio.h>
#include<math.h>
int main()
{
    int i, op, size;
    float sum = 0, Arithmetic_Mean, Harmonic_Mean, Geometric_Mean,numbers[100];
 
    printf("\n How many numbers to accept:- ");
    scanf(" %d",&size);
    
    //accept the numbers
    for(i=0;i<size;i++)
    {
      printf("\n Enter %d th number: ",i+1);
      scanf(" %f",&numbers[i]);
    }
    
    do{
          printf("\n\n 1. Arihmetic Mean");
          printf("\n 2. Harmonic Mean");
          printf("\n 3. Geometric Mean \n");
 
          printf("\n Which operation do you want to perform:- ");
          scanf(" %d",&op);
 
    switch(op)
    {
        case 1:
            for(i=0;i<size;i++)
            {
              sum += numbers[i];
            }
            
            Arithmetic_Mean = sum/size;
            
            printf("\n\n The Arithmetic Mean is   : %f", Arithmetic_Mean);
            break;

        case 2:
            for(i=0;i<size;i++)
            {
            sum += (1/numbers[i]);
            }
            
            Harmonic_Mean = size/sum;

            printf("\n\n The Harmonic Mean is   : %f", Harmonic_Mean);
            break;

        case 3:
            sum = 1;
            for(i=0;i<size;i++)
            {
               // we will store the product of all numbers
               // in sum varibale
            sum *= numbers[i];
            }
            
            Geometric_Mean = pow(sum,(float)1/size);
            
            printf("\n\n The Geometric Mean is   : %f", Geometric_Mean);
            break;
         
     }
  }while(op!=4);    
    
    return 0;
    
}
