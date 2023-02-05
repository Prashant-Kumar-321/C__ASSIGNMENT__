//6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>


void RprintEvenNumber(int n)
{
  if(n==0)
    return ;

  printf("%d ",(2*n));
  RprintEvenNumber(n-1);
}

int main()
{
  int NUM;
  printf("Enter a number to print first N even natural number \n");
  scanf("%d",&NUM);

  RprintEvenNumber(NUM);
  getch();

  return 0;
}

