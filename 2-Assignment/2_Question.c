#include <stdio.h>
#include <conio.h>

int main ()
{
  // Printing A given Number without its last digit

    int a = 879,Ra;

//    Ra = a / 10 ;
    Ra = a / 100 ; // It will vanish last two digits of the numbers

    printf("\n%d without its Unit digit is %d\n",a,Ra);

    float b = 78.98, Rb ;

    Rb = b/10 ;
    printf("%f without its unit digit is %.0f\n",b,Rb); // Here round up took place


    // Program to print a given number without its unit digit
    int n1,Rn1;
    printf("Enter a Number \nN = ");
    scanf("%ld",&n1);

    Rn1 = n1 / 10 ;

    printf("Number withour last unit is %ld",Rn1);
    getch() ;

    return 0 ;
}
