#include<stdio.h>
#include<conio.h>

int main()
{
    // Program to swap value of two Numbers without using third variable ;
    int num1 = 6, num2 = 3 ;

    printf("Enter two Numbers \n" );
    printf("num1, num2 = ") ;
    scanf("%d %d",&num1,&num2) ;

    printf("#Before Swapping num1 = %d and num2 = %d\n",num1, num2 ) ;

    //Logic
    num1 = num1 + num2 ; // 9 ; num1 +=num2 // num1 += num2 ;
    num2 = num1 - num2 ; // num2 = 6 ;
    num1 = num1 - num2 ;  // num1 = 9-6 =  3 ; // num1 -= num2 ;


    printf("*After Swapping num1 = %d and num2 = %d",num1, num2 ) ;


    getch() ;
    return 0 ;
}
