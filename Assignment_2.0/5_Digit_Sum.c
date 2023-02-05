#include<stdio.h>
#include<conio.h>

void main()
{
  system("color e4") ; // Background Foreground

  // Program to calculate three digit sum ;
  int a = 382,digit_sum = 0 ,Digit ;

  printf("\t\t\tDigit Sum calculator \n") ;
  printf("Input a Three Digits number \n") ;
  printf("Number = ") ;
  scanf("%d",&a) ;

  //Logic
  Digit = a%10 ; // 2
  digit_sum += Digit ;
  a /= 10 ; // 38

  Digit = a%10 ;// 3
  digit_sum += Digit ;// 2+3 = 5 ;
  a /= 10 ; // a = 3

  Digit = a%10 ;//3
  digit_sum += Digit ;

  printf("Digit sum = %d",digit_sum);






  getch() ;
}
