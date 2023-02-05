#include<stdio.h>
#include<conio.h>

int main()
{
  // Program to print fist 10 odd natural number
  int n = 0 ;
  printf("First 10 ODD Natural Number \n\n");
  for(n = 0 ; n < 10 ; n++)
  {
    printf("%d  ",(2*n+1)); // Odd Numbers are of (2n+1) type ; n == whole number
  }

  getch() ;
  return 0;
}
