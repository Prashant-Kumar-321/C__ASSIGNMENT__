
#include<stdio.h>
#include<conio.h>

int main()
{
  int a = 4 ,b = 0 , A,B;

  printf("Enter Two numbers \n") ;
  scanf("%d %d",&a,&b);

  if(a == b)
  {
    printf("numberA = NumberB = %d",a) ;
  }

  else
  {
    if(a > b)
    {
      printf("Max = %d  among %d and %d \n",a,a,b) ;
    }
    else
    {
      printf("Max = %d  among %d and %d \n",b,a,b) ;
    }
  }

  getch() ;
  return 0 ;
}
