// Program to calculate hcf of two numbers
#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,HCF,LCM, max,i;

  printf("Enter two number \na , b = ");
  scanf("%d %d",&a,&b);

  max = (a>b) ? a : b ;

  for(int i = max ; i <= a*b ; i++)
  {
    if( (i % a == 0)  &&  (i % b == 0) )
    {
      LCM = i ;
      break ;
    }

  }

  HCF = a * b / LCM ; // Hcf usin lcm ;

  printf("HCF(%d,%d) = %d\n",a,b,HCF);


  return 0;
}
