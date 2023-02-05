//Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

// Printing first N natural number
// in Reverse Order
void revPrintNatNo(int N)
{
  if(N==1)
    printf(" 1 ");
  else
  {
    printf("%2d ", N);
    revPrintNatNo(N-1);// recursive call
  }
}

int main()
{
  int N = 5;
  printf("\nEnter a value of N to print First");
  printf(" N Natural number in REVERSE ORDER ----- \n");
  scanf("%d",&N);

  printf("\nFIRST %d NATURAL NUMBER IN REVESE ORDER******** \n",N);
  revPrintNatNo(N);

  printf("\a\n");
  getch();
  return 0;
}
