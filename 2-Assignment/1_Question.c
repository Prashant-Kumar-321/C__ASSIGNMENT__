#include <stdio.h>
#include <conio.h>

int main ()
{
  // Programm to print unit digit of a integer value
  //  This can be achieved by using % Operator ;
  // N % 10 ;

  int a,unit_digit;
  printf("\n\t\t\t\t *# UNIT DIGIT OF YOUR NUMBER *# \n");
  printf("Enter a number \n\nNumber = ");
  scanf("%d",&a);

  unit_digit = a % 10 ;
//  unit_digit = a % 100 ; // return last two digits
  printf("\nUnit digit = %d",unit_digit);
  getch() ;

  return 0 ;
}
