#include<stdio.h>

#include<conio.h>

int main()
{
  int x ;
  // program to display 10 odd natural numbers in reverse order ;
  for (x = 9 ; x >= 0 ; x--)
  {
    printf("%d\n",(2*x+1));
  }

  getch();
  return 0;
}
