#include<stdio.h>
#include<conio.h>


int main()
{
  system("color d6") ;

  // program to print Ascii code of a Character
  char ch;
  printf("Enter a character = ");
  scanf("%c",&ch);

  printf("Ascii Code of %c is %d",ch,ch) ; //on Printing char with %d prints its ascii code

  getch() ;
  return 0 ;
}
