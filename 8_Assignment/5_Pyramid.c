#include<stdio.h>
#include<conio.h>

void pyramid(int n);

int main()
{
  int n;
  n = 7;

  printf("Eenter a number \n");
  scanf("%d",&n);

  pyramid(n);

  getch();
  return 0 ;
}

// funtion pyramid() printing pyramid star pattern
void pyramid(int N)
{
  int i, j ;

  for(i=0; i<=N; i++)
  {

    for(j=0; j<=(N+i); j++ )
    {

      if( j>=(N-i) )
        printf("*");
      else
        printf(" ");

    }

    printf("\n");

  }
}
