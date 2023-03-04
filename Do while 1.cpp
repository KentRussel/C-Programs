#include <stdio.h>

int main()
{
  int value, total=1;
 
  printf("\n Please Enter any integer value ranging from 1 to 10 \n");
  scanf("%d", &value);

  do
   {
     total = total + value;
     printf(" Number = %d\n", value);
     printf(" Total Value is: %d\n", total); 
     value++;
   }while (value< 10);

  printf(" Total Value from outside of the Loop is : %d \n", total);
  return 0;
}

