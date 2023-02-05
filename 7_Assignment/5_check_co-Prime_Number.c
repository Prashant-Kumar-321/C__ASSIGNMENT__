#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,hcf,min ;

  printf("Enter two numbers \n");
  scanf("%d %d",&a,&b);

  // program to calculate hcf of a , b;

  min = (a>b) ? b : a;

  for (min = min ; min>0 ; min--)
  {
    if((a % min == 0) && (b % min == 0))
    {
      hcf = min;
      break;
    }

  }

  if(hcf==1)
    printf("hcf = %d \n%d and %d is co-prime number \n",hcf,a,b);
  else
    printf("hcf = %d \n%d and %d is not co-prime number \n",hcf, a, b);

  getch();
  return 0;
}
