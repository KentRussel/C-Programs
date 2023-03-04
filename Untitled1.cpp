#include<stdio.h>
int main(void)	
{
int A1, d, n, ctr=1;

printf("\n\n\t\t\t ARITHMETIC PROGRESSION PROGRAM" );

printf("\n\n\t\t\t PLEASE ENTER THE FIRST TERM:   "  );
scanf("%d", &A1);
printf("\n\n\t\t\t PLEASE ENTER THE COMMON DIFFERENCE OF THE SERIES:    "  );
scanf("%d", &d);
printf("\n\n\t\t\t PLEASE ENTER THE NUMBER OF TERM/S:    "  );
scanf("%d", &n);
printf("\n\n\t\t\t THE ELEMENTS OF THE SERIES FROM A1 TO An:\n " );


while (ctr<=n)
	{
	printf(" \n\t\t\t\t\t %d " , A1);
	A1=A1+d;
	ctr++; 
	} 	
	

		

printf(" \n\n\n\t\t\t"); 
		
return 0;
}
