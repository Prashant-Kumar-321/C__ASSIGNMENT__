
#include <stdio.h>
#include <conio.h>

int main()
{

    //Program to To check whether the number is even or odd ;
    int sankhya ;

    printf("Enter a number \n") ;
    scanf("%d",&sankhya) ;

    //conditional Ternary Operator
    (sankhya&1) ? printf("%d is ODD \n",sankhya) : printf("%d is EVEN \n",sankhya) ;

    getch() ;

    // Program to Check whether the inserted number is even or odd  By Ternary Operator ? : ;
    int Number ;
    printf("Again Enter a number\n") ;
    scanf ("%d",&Number);

    // Logic of even odd ;
    ( Number % 2 == 0  ) ? printf("Number is Even"):  printf("Number is Odd")  ;


    return 0 ;

}
