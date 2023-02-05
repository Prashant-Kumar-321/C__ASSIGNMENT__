#include <stdio.h>
#include <conio.h>

int main()
{
  // program to convert INR into USD
  float USD, INR ;

  printf("\n\n\n\t\t\t\t\t\t\t*INR Convertor into USD *\n");
  printf("\t\t\t\t\t \t\t *--**********************--*\n");

  printf("Enter Money you have in INR = ");
  scanf("%f",&INR);

  USD = INR / 76.23 ; // converting  inr into usd

  printf("You have %0.2f US Dollar ",USD);


  getch() ;
  return 0 ;
}
