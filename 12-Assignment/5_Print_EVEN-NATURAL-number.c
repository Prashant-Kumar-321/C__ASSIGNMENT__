// Write a recursive function to print first N even natural numbers

#include<stdio.h>
#include<conio.h>


void printEvenNumber(int n)
{
  if(n==0)
    return ;


  printEvenNumber(n-1);
  printf("%d ",2*n);
}

int main()
{
  int n;
  printf("Enter value of n : \nTo print first even natural number \n");
  scanf("%d",&n);

  printEvenNumber(n);

  getch();
  return 0;
}
