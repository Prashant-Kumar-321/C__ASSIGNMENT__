#include<stdio.h>
#include<conio.h>

void  Hollow_Right_Triangle_Print (int);

int main()
{
  int n = 4;

  printf("Enter value of n to See Magic");
  scanf("%d",&n);

  Hollow_Right_Triangle_Print(n); // funtion call

  getch();
  return 0;
}

// funtion Definition

void Hollow_Right_Triangle_Print(int n)
{
  int i = 0, j = 0;

  for(i ; i <= n; i++)
  {

    for(j = 0 ; j <= n; j++)
    {
      if(j == n || j == n-i || i == n)
        printf("* ");
      else
        printf("  ");
    }

    printf("\n");

  }
}
