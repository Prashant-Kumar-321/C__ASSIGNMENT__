#include<stdio.h>
#include<conio.h>

unsigned long long int factorial(unsigned int n) // Factorial of n
{
    if(n>=0)
    {
      int i, fact = 1;
      for(i=1; i<=n; i++)
        fact *= i;

      return fact;
    }
}

// Driver funtion
int main()
{
  int num,i;
  unsigned long long int sum = 0;

  num = 20;

  for(i=1; i<=num; i++)
  {
   sum = sum + factorial(i)/i;
  }

  printf("Sum = %llu",sum);

  getch();
  return 0;
}
