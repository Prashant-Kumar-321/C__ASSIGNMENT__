// Write a recursive function to print first N natural numbers

#include<stdio.h>
#include<conio.h>

void printN_N(int n)
{
  int static count = 0;

  if(n==0)
    return ;


  printN_N(n-1);
  printf("%d ",n);
  count++;

  if(count == 10)
  {
    printf("\n");
    count = 0;
  }

}

int main()
{
  int n;
  printf("Enter a number upto which you want to print natural numbers \n");
  scanf("%d",&n);

  printN_N(n);

  getch();
  return 0;
}
