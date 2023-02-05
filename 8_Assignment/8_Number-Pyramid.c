#include<stdio.h>
#include<conio.h>

void pyramid(int N);

int main()
{
  int N;
  N = 4 ;

  printf("Enter a your unlucky number to make it lucky \n");
  scanf("%d",&N) ;

  pyramid(N);

  getch();
  return 0;
}

// funtion definition
void pyramid(int N)
{
  int i, j,c = 1 ;

  for(i=0; i<=N; i++)
  {
    c = 1 ;
    for(j=0; j<=(N+i); j++ )
    {

      if( j>=(N-i) )
      {

        printf("%d ",c);

        if(j < N)
          c++;
        else
          c--;

      }

      else
        printf("  ");

    }

    printf("\n");

  }
}
