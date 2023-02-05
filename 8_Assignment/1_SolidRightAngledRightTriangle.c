#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,n = 4;

  printf("Enter a Number : ");
  scanf("%d",&n);

  for(i=0; i<=n; i++) // this is changing row
  {
    int c = 0 ;

    for(j=0; j<=i; j++) // this is printing * in columns
    {
      printf("*");
    }

    printf("\n");

  }

  getch();
  return 0;

}
