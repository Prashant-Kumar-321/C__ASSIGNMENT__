//8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>
#include<conio.h>

#define BSE 2

// finding binary pattern of given decimal number
void printBinaryPattern(int Num)
{
  if(Num<BSE)
    printf("%d", Num);
  else
  {
    printBinaryPattern(Num/BSE);
    printf("%d",Num % BSE);
  }
}

// Driver code
int main()
{
  int DecNum = 20 ;
  printf("Enter a Number \n");
  scanf("%d", &DecNum);

  printf("Binary Conversion of %d : - \n", DecNum);

  printBinaryPattern(DecNum);

  printf("\n\n\a");
  getch();
  return 0;
}
