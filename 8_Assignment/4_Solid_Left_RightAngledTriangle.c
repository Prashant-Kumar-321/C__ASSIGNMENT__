#include<stdio.h>
#include<conio.h>

int main()
{
  short int i,j,n = 4;

  for(i=0; i<=n; i++)
  {

    for(j=0; j<=n; j++)
    {
      if(j>=i)
        printf("*");
      else
        printf(" ");
    }

    printf("\n");
  }


 return 0;
}
