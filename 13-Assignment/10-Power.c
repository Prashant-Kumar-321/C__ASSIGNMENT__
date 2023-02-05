//Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
#include<conio.h>

int Pow(int B, int e)
{
  if(e == 0)
    return 1;

  else if(e == 1)
    return B;

  else
    return B * Pow(B,e-1);
}

int main()
{
  int Base = -2 , exp = 3;
  int res = 0;

  printf("Power of Given Number \n");

  printf("Enter Base : ");
  scanf("%d",&Base);

  printf("Enter exponent : ");
  scanf("%d",&exp);

  res = Pow(Base, exp);// calculating Base ** exp

  printf("%d^%d = %d",Base,exp,res);

  printf("\a");
  getch();
  return 0;
}
