//Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int FindSum(int N);

int main()
{
  int N = 5;
  printf("Summation of first N Natural Number \n");
  printf("Enter value of N : ");
  scanf("%d",&N);

  printf("\n");
  int sum = FindSum(abs(N));

  printf("Sum of 1st %d Natural Number : %d",N,sum);

  printf("\n\n\a");
  getch();
  return 0;
}
int FindSum(int N)
{
  if(N==1) // Base condition
  {
    printf("1 = \n");
    return 1;
  }
  else
  {
    printf("%d + ",N);
    return N + FindSum(N-1);
  }

}
