//Write a recursive function to print octal of a given decimal number

#include<stdio.h>
#include<conio.h>

#define BSE 8 // macros for Base

void findOctalPattern(int N)
{
  if(N < BSE)
    printf("%d",N);
  else
  {
    findOctalPattern(N/BSE); // RECURSIVE CALL
    printf("%d",N%BSE);
  }
}

//Driver code
int main()
{
  int DecNum = 23;
  printf("Enter a Decimal Number\n");
  scanf("%d",&DecNum);

  printf("\n");
  printf("%d in Octal Base:-\n",DecNum);
  findOctalPattern(DecNum);

  printf("\n\a");
  getch();
  return 0;
}
