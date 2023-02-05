#include<stdio.h>
#include<conio.h>

unsigned int hcf2number(unsigned int n1, unsigned int n2)
{
  unsigned int min;

  min = (n1<n2) ? n1 : n2;

  for(min = min; min >= 1; min--)
  {
    if( (n1 % min == 0) && (n2 % min == 0) )
      return min; // min is hcf

  }

}

int main()
{

  unsigned int num1, num2, hcf;

  printf("Enter two numbers : ");
  scanf("%u %u",&num1,&num2);

  hcf = hcf2number(num1,num2);

  printf("HCF(%d,%d) = %d",num1,num2,hcf);

  getch();
  return 0;

}
