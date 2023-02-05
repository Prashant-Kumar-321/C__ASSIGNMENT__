//Write a recursive function to calculate factorial of a given number

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


unsigned int fact(unsigned int N)
{
  if(N==1) // Base condition ... 1! = 1;
    return 1;

  return N*fact(N-1);
}

/*Driver code */
int main()
{
  int N;

  // Taking input from user
  printf("\n\t\tCompute Factorial\n\n");
  printf("Enter value of n ");
  scanf("%d",&N);

  printf("\n%d! = %u \n\a",N,fact(abs(N))); // to make sure N is +ve

  printf("\n");
  getch();
  return 0;
}
