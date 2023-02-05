// Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

void Rprintodd(int n)
{
  if(n==0)
    return ;

  printf("%d ", 2 * (n-1) + 1);

  Rprintodd(n-1);
}

int main()
{
  int n;
  printf("To print first___Odd natural number\n");
  printf("Enter a value of n");

  scanf("%d",&n);

  Rprintodd(n);
  getch();
  return 0;
}
