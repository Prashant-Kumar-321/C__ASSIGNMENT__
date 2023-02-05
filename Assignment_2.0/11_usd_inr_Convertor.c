
#include<stdio.h>
#include<conio.h>

int main()
{
  float inr,usd;
  printf("Enter money in INR \n") ;
  scanf("%f",&inr) ;

  usd = inr / 76.23 ;

  printf("%.2f INR is equal to %.2f US Dollor\n",inr,usd) ;

  getch() ;
  return 0 ;
}
