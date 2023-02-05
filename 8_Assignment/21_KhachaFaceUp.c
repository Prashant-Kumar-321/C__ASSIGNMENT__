#include<stdio.h>
#include<conio.h>

int khacha_FaceUp(int);

int main()
{
  int n;
  n = 4;

  printf("ente a magical number ");
  scanf("%d",&n);

  khacha_FaceUp(n);

  getch();
  return 0;
}

// funtion definition

int khacha_FaceUp(int n) // n = 4 ;
{
  int i, j;

  for(i=0; i<=n; i++)
  {
    for(j=0; j<=2*n+1; j++)
    {
      if(j<=i || j>= (2*n+1-i))
        printf("@ ");
      else
        printf("  ");
    }
    printf("\n");

  }

  return 0;
}
