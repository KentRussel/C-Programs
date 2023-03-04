#include<stdio.h>
int main(void)	
{
int A1, d, n, An, Sn, total=0;

printf("\n\n\t\t\t ARITHMETIC PROGRESSION PROGRAM" );

printf("\n\n\t\t\t PLEASE ENTER THE FIRST TERM:   "  );
scanf("%d", &A1);
printf("\n\n\t\t\t PLEASE ENTER THE COMMON DIFFERENCE OF THE SERIES:    "  );
scanf("%d", &d);
printf("\n\n\t\t\t PLEASE ENTER THE NUMBER OF TERM/S:    "  );
scanf("%d", &n);

An= A1 + (n-1)*d;
Sn=(n * (A1+An))/2;
printf("\n\n\t\t\t SUM OF THE TERMS IS:  %d", Sn );
printf("\n\n\t\t\t THE ELEMENTS OF THE SERIES FROM A1 TO An:\n " );


while (total<=Sn)
	{
		
	printf(" \n\t\t\t\t\t %d " , A1);
	A1=A1+d;
	total=total + A1;
	
	} 	
	

printf(" \n\n\n\t\t\t"); 
		
return 0;
}
