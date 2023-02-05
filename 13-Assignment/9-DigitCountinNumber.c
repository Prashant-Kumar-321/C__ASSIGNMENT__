//9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
#include<conio.h>

int findigitNumber(long long int N, int count)
{
  if(N == 0)
    return count;
  else
    findigitNumber(N/10,++count);

}

// Driver code
int main()
{
  long long int N = 768;

  printf("Enter a Number : ");
  scanf("%lld",&N);

  printf("Number of Digit = %d ",findigitNumber(N,0));

  printf("\a");
  getch();
  return 0;
}
