#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 1 , n = 5 ;
  int Factorial = 1  ;

  printf("\t\t\tFactorial of N \n\t\t\t***************\n");
  printf("\n\nEnte value of N(postive integer!*) = \n");
  scanf("%d",&n);

  for (i = 1 ; i <= n ; i++)
  {
    Factorial *= i ; // factorial = 1 * 2 * 3 * 4 * ----- * n ;
  }
  printf("%d! = %d",n,Factorial);



  getch();
  return 0;
}
