#include<stdio.h>
#include<conio.h>

int main()
{
  int a = 1;
  do
  {
    printf("5 X %d = %d \n\a",a,(5 * a));
    ++a ;

  } while(a <= 10);


  getch();
  return 0;
}
