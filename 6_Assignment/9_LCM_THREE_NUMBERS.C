#include<stdio.h>

int main()
{
  int n1, n2, n3, a;

  printf("Enter a number \n");
  scanf("%d%d%d",&n1,&n2,&n3);

  for(a=1 ; a <= n1*n2*n3;  a++)
  {
    if(a%n1 == 0 && a%n2 == 0 && a%n3 == 0 )
    {
      printf("LCM = %d",a);
      break;
    }
  }


  getch();
  return 0;
}
