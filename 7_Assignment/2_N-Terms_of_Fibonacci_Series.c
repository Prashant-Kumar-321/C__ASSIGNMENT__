// Program to calculate N terms of fibonacci series

#include<stdio.h>
#include<conio.h>

int main()
{
  int fib1 = 1, fib2 = 1, count = 2, N;
  long long int  fib3 = 0 ;

  printf("\n\nEnter a value of N = ");
  scanf("%d",&N);

  printf("\nFirst %d terms of FIBONACCI SERIES ...........\n",N);
  printf("\n%d %d ",fib1,fib2);

  while (count < N)
   {
     fib3 = fib1 + fib2 ;
     count++;
     printf("%d ",fib3);

     fib1 = fib2 ;
     fib2 = fib3 ;

   }

  getch();
  return 0;
}
