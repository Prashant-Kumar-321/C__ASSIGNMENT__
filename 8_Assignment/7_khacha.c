#include<stdio.h>
#include<conio.h>
void khacha_print();

// funtion definition;
int main()
{

  khacha_print();

  getch();
  return 0;
}

// funtion definition
void khacha_print()
{
  int i,j,n;
  n = 4;

  printf("Enter a number of n\n");
  scanf("%d",&n);

  for(i=0; i<=n; i++)
  {

    for(j=0; j<=(2*n+1); j++ )
    {
      if(j<=(n-i) || j>=(n+1+i) ) // if i==n then a hollow triangle will show
        printf("*");
      else
        printf(" ");

    }

    printf("\n");

  }
}

