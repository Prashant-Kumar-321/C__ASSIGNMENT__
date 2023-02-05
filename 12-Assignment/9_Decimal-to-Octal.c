//Write a recursive function to print octal of a given decimal number

#include<stdio.h>
#include<conio.h>

void Octal(int n)
{
  int R;
  int static c = 0 ;

  if(n==0)
    {
      if(c==0);
      else
        return ;
    }

  c++;
  R = n%8;
  n /= 8 ;

  Octal(n);
  printf("%d",R);
}


int main()
{
  int Dec;

  printf("Enter Decimal number : ");
  scanf("%d",&Dec);

  printf("Octal Equivalent is : ");
  Octal(Dec);

  return 0;
}
