//Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
#include<conio.h>

unsigned int squaresum(int N)
{
  if(N==1)
    return 1;
  else
    return (N*N) + squaresum(N-1);
}

int main()
{
  int N = 5;
  printf("Summation of Squares of First N Natural Number \n");
  printf("Enter value of N : ");
  scanf("%d",&N);


  unsigned int sum = squaresum(N);

  printf("Sum = %u \n",sum);

  printf("\a");
  getch();
  return 0;
}
