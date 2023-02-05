// Program to calculate hcf of two numbers without using there lcm ;

#include<stdio.h>
#include<conio.h>

int main()
{
  int i,a,b,min,HCF;

printf("Enter two numbers to find hcf of them : ");
scanf("%d %d",&a,&b);

min = (a<b) ? a : b; // Consider a == b also in future

for(i = min ; i>0 ; i--)
{
    if((a % i == 0) && (b % i == 0))
    {
      HCF = i ;
      printf("HCF = %d",i);
      break;
    }
}
  return 0;
}

