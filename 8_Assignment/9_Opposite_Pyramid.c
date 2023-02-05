#include<stdio.h>
#include<conio.h>

int Opposite_1_Pyramid (int);

int main()
{
  int n;
  n = 7 ;

  Opposite_1_Pyramid (n);

  getch();
  return 0;
}

// functiondefinition

int Opposite_1_Pyramid (int n)
{
  int i, j ;

  for(i=0; i<=n; i++)
  {

   for(j=0; j <= (2*n-i); j++)
   {
      if(j>=i)
        printf("# ");
      else
        printf("  ");
   }

   printf("\n");

  }

  return 0;
}
