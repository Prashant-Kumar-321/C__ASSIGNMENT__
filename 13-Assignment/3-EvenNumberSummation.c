//Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>
#include<conio.h>

int evensum(int N)
{
  if(N==1)
    return (2*N);
  else
    return (2*N) + evensum(N-1);
}

int main()
{
  int N = 3;
  printf("Summation of first N Even Natural Numbers\n");
  printf("Enter a value of N = ");
  scanf("%d",&N);

  printf("\n");
  int EvenSum = evensum(N);

  printf("Summation of 1st %d EVEN natural number is \n%d",N, EvenSum);

  printf("\a");
  getch();
  return 0;
}
