#include<stdio.h>
#include<conio.h>

// Computing Nth term of Fibonacci series
unsigned int fib(int N)
{
  if(N==1 || N==2)
    return 1;
  else
    return fib(N-1) + fib(N-2);
}

/* Driver code */
int main()
{
  int N;
  printf("Get N terms of Fibonacci Series \n");
  printf("Enter value of N : ");
  scanf("%d",&N);

  printf("\nFirst %d Terms of FIBONACCI SERIES ::-- \n",N);
  for(int i=1; i<=N; i++)
   printf("%u ", fib(i));

  printf("\a");
  getch();
  return 0;
}
