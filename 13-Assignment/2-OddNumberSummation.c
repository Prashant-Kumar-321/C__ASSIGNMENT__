//Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Oddsum(int N)
{
  if(N==1)
    return 1;
  else
    return ((2*N)-1) + Oddsum(N-1);
}

int main()
{
  int N = 5;
  printf("summation of first N odd natural NUMBERS \n");
  printf("Eneter value of N: ");
  scanf("%d",&N);

  printf("\n");
  int oddsum = Oddsum(abs(N));

  printf("Summation of first %d Odd Natural number: %d \n",N,oddsum);

  printf("\a");
  getch();
  return 0;
}
