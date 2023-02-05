#include <stdio.h>
#include <conio.h>

int main ()
{

  // Program to find ASCII CODE of a character "inserted"  by user //

  char character ;
  int Ascii ;

  printf("Enter a Character\n");
  scanf("%c",&character) ; //taking input a character from user

  Ascii = character ; // character is stored in Ascii code in int type variable

  printf("ASCII CODE = %ld \n",Ascii);

  return 0 ;
}
