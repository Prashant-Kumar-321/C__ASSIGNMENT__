//Write a recursive function to print binary of a given decimal number

#include<stdio.h>
#include<conio.h>

void Binary(int x)
{
  int R = 0;
  int static c = 0;

  if(x==0)
    {
      if(c==0);
      else
        return ;
    }

  c++;
  R = x%2; // Remainder of x/2
  x/=2; // Quotient of x/2 ;

  Binary(x);
  printf("%d",R);

}

int main()
{
  int Dec;
  printf("Enter a Decimal number ");
  scanf("%d",&Dec);

  printf("\nBinary Equivalent is : ") ;
  Binary(Dec);

  getch();
  return 0;
}

