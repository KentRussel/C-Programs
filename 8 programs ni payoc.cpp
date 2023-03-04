#include<stdio.h>
int main(void)
{
int pa,n,r,x,first,ratio, diff, terms, value, sum=0, a=0, A1,d, An,Sn;
char program;
float celsius,farenheit,c,f, rate, ci,ft,inch,cm,kilo,pounds;
double comb,fact=1, fact1=1, fact2=1, ctr=1,ctr1=1, ctr2=1;

int isTrue = 1;
while(isTrue){
printf("\n\n\t\t\t Programs: " );

printf("\n\n\t\t\t a. Temperature Conversion: " );
printf("\n\n\t\t\t b. Compound Interest: " );
printf("\n\n\t\t\t c. Combination: " );
printf("\n\n\t\t\t d. Do While AP: " );
printf("\n\n\t\t\t e. Do While GP: " );
printf("\n\n\t\t\t f. While AP: " );
printf("\n\n\t\t\t g. Factorial: " );
printf("\n\n\t\t\t h. Height: " );
printf("\n\n\t\t\t i. Exit: " );

printf("\n\n\t\t\t Please enter the program you want to use: " );
scanf(" %c", &program);


switch(program) {

case '1': case 'a':
    printf("\n\n\t\t\t Temperature Conversion   "  );
    printf("\n\n\t\t\t Input Temperature in Degree Celsius: ");
    scanf("%f", &celsius);

   printf("\n\n\t\t\t Input Temperature in Degree Farenheit: ");
   scanf("%f", &farenheit);

   c= (celsius*1.8)+32 ;
   f= ((farenheit-32)*5)/9;

   printf("\n\n\t\t\t Equivalent Temperature of %.2f Degree Celsius in Degree Farenheit is: %.2f",celsius,c);
   printf("\n\n\t\t\t Equivalent Temperature of %.2f Degree Farenheit in Degree Celsius is: %.2f",farenheit,f);
    break;

case '2': case 'b':
    printf("\n\n\t\t\t Compound Interest   "  );
    printf("\n\n\t\t\t Input Principal amount: ");
    scanf("%d", &pa);
    printf("\n\n\t\t\t Input Rate of Interest: ");
    scanf("%f", &rate);
    printf("\n\n\t\t\t Input Number of Years: ");
    scanf("%d", &n);

   ci = pa * pow ((1 + rate / 100), n);

   printf("\n\n\t\t\t The Compound Interest is %.2f", ci) ;
    break;

case '3': case 'c':
    printf("\n\n\t\t\t Combination   "  );
    printf("\n\n\t\t\t PLEASE ENTER THE VALUE OF N (WHOLE NUMBER) :     "  );
scanf("%d", &n);

printf("\n\n\t\t\t PLEASE ENTER THE VALUE OF R (WHOLE NUMBER) :     "  );
scanf("%d", &r);

    while (ctr<=n){
        fact*= ctr;
        ctr++;
    }

    x=n-r;
    while (ctr1 <= x){
        fact1*= ctr1;
        ctr1++;
    }
    while (ctr2 <= r){
        fact2*= ctr2;
        ctr2++;

    }
    comb= fact/(fact1*fact2);

printf(" \n\n\n\t\t\t Combination of %d and %d is %0.0lf ",n,r,comb);
printf(" \n\n\n\t\t\t");

    break;

case '4': case 'd':
    printf("\n\n\t\t\t Do While AP   "  );
    printf("\n\n\t\t\t Enter the number of terms in Arithmetic Progression series: ");
    scanf("%d", &terms);

    printf("\n\n\t\t\t Enter first term: ");
    scanf("%d", &first);
    printf("\n\n\t\t\t Enter  common difference: ");
    scanf("%d", &diff);

    value = first;
    printf("\n\n\t\t\t Arithmetic Progression Series: ");
    do{
        printf("%d ", value);
        sum += value;
        value = value + diff;
        a++;
    }
    while(a<terms);
    printf("\n\n\t\t\t Sum of the AP series till %d terms is %d", terms, sum);
    break;

case '5': case 'e':
    printf("\n\n\t\t\t Do While GP   "  );
    printf("\n\n\t\t\t Enter the number of terms in Geometric Progression series: ");
    scanf("%d", &terms);

    printf("\n\n\t\t\t Enter first term: ");
    scanf("%d", &first);
    printf("\n\n\t\t\t Enter common ratio: ");
    scanf("%d", &ratio);

    value = first;
    printf("\n\n\t\t\t Geometric Progression Series: ");
    do{
        printf("%d ", value);
        sum += value;
        value = value * ratio;
        a++;
    }
    while(a<=terms);
    printf("\n\n\t\t\t Sum of the GP series till %d terms is %d", terms, sum);
    break;

case '6': case 'f':
    printf("\n\n\t\t\t While AP   "  );
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


while (ctr<=An)
	{
    ctr=A1;
	printf(" \n\t\t\t\t\t %d " , A1);
	A1=A1+d;
	ctr++;
	}


printf(" \n\n\n\t\t\t");
    break;

case '7': case 'g':
    printf("\n\n\t\t\t Factorial   "  );

printf("\n\n\t\t\t PLEASE ENTER AN INTEGER (WHOLE NUMBER) :     "  );
scanf("%d", &n);

while (ctr<=n)
	{

    fact=fact*ctr;
    printf(" \n\t\t\t THE FACTORIAL OF %.0lf  IS:    %.0lf " , ctr, fact);
    ctr++;

    }
printf(" \n\n\n\t\t\t");

    break;

case '8': case 'h':
    printf("\n\n\t\t\t Height   "  );

   printf("\n\n\t\t\t Input feet: ");
   scanf("%f", &ft);
   printf("\n\n\t\t\t Input inches: ");
   scanf("%f", &inch);
   printf("\n\n\t\t\t Input kilo: ");
   scanf("%f", &kilo);

   cm= ((ft*12)+inch)*2.54 ;
   pounds= (kilo*2.2);

   printf("\n\n\t\t\t Equivalent height of %.0f'%.0f in centimeters is: %.2f",ft,inch,cm);
   printf("\n\n\t\t\t Equivalent weight of %.2f kilograms in pounds is: %.2f",kilo, pounds);
    break;

    case '9': case 'i':
    isTrue = 0;
    break;
    default: printf("\n\n\t\t\t Unknown Program   "  );
}
}
return 0;
}
