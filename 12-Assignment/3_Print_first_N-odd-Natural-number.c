//Write a recursive function to print first N odd natural numbers

#include<stdio.h>
#include<conio.h>

void printodd(int n)
{
  if(n==0)
    return ;

  printodd(n-1);
  printf("%d , ",(2 * (n-1) + 1));


}

void main()
{
  int n;
  printf("First N odd natural number \n");
  printf("Enter a Number \n");
  scanf("%d",&n);

  printodd(n);

  getch();

}
