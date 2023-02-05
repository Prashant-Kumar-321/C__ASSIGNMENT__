//Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

void RPrintNN(int n)
{
  static int count = 0;
  if(n==0)
    return ;

  printf("%d  ",n);
  count++;
  if(count == 10)
  {
    printf("\n");
    count = 0;
  }

  RPrintNN(n-1);
}

int main()
{
  int n ;
  printf("Enter a number upto which you want to print natural number in reverse order \n");
  scanf("%d",&n) ;

  RPrintNN(n);

  getch();
  return 0;
}
