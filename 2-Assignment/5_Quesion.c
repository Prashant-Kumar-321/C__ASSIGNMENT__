#include <stdio.h>
#include <conio.h>

int main()
{



    // Digit sum of a Number having three digits
    // ONE LOGIC
    short int a, unit_digit1,unit_digit2,unit_digit3, digit_sum = 0  ;    // a = 678;

    printf("\n\nEnter a three digits Number \n");
    scanf("%d",&a); // Taking input Number ;
    printf("%d\n",a);

    unit_digit1 = a % 10 ;   //unit digit = 8
    digit_sum += unit_digit1; // digit_sum = 0 + 8 = 8 ;

    a /= 10 ; // a = 67 ;
    unit_digit2 = a % 10 ; // unit_digit = 7 ;
    digit_sum += unit_digit2 ; // digit_sum = 8 + 7 = 15 ;

    a /= 10 ; // a = 6
    unit_digit3 = a % 10 ; // unit_digit = 6 ; // As such there was no need but stil due to make consitance
    digit_sum += unit_digit3 ; // digit_sum = 15 + 6 = 21 ;

    printf("digit sum = %d+%d+%d = %d ",unit_digit3,unit_digit2,unit_digit1,digit_sum);

    getch( );


 // ANOTHE LOGIC
    // Digit sum of a Number having three digits
    short int a1, unit_digit20,digit_sum1 = 0  ;    // a = 678;

    printf("\n\nEnter a three digits Number \n");
    scanf("%d",&a1); // Taking input Number ;
    printf("%d\n",a1);

    unit_digit20 = a1 % 10 ;   //unit digit = 8
    digit_sum1 += unit_digit20; // digit_sum = 0 + 8 = 8 ;
    printf("%d + ",unit_digit20); // print unit digit of number

    a1 /= 10 ; // a = 67 ;
    unit_digit20 = a1 % 10 ; // unit_digit = 7 ;
    digit_sum1 += unit_digit20 ; // digit_sum = 8 + 7 = 15 ;
    printf("%d + ",unit_digit20) ; // print second digit

    a1 /= 10 ; // a = 6
    unit_digit20 = a1 % 10 ; // unit_digit = 6 ; // As such there was no need but stil due to make consitance
    digit_sum1 += unit_digit20 ; // digit_sum = 15 + 6 = 21 ;
    printf("%d + ",unit_digit20); // print third digit

    printf(" = %d",digit_sum1); // print digit sum ;

    getch( );









    //Initially I aproached this way but i get wrong and i got it why i'm wrong
    // And Accedentally find how to print ASCII CODE of character ;

    // I am using char data type to take input of digits of a numbers
    printf("\n\n\n\n");
    char d1,d2,d3 ;
    int d_Sum,d ;

    printf("Enter three digit number \n\'Number should be space seperated\' = ");
    scanf("%c %c %c",&d1,&d2,&d3); // ASCII CODE OF CHARACTER IS STORING IN d1, d2, and d3 ;

//    d = d1 ; // Expecting return ASCII CODE
//    printf("%d\n",d);

    d_Sum = d1 + d2 + d3 ; // Sum of ASCII code of character ;
    printf("ASCII CODE SUM = %d\n\n\n\n",d_Sum);

    getch();







    return 0 ;
}
