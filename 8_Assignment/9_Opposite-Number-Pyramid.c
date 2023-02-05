#include<stdio.h>
#include<conio.h>

int Opposite_1_Pyramid (int); // funtion Declaration

int main()
{
  int N;
  N = 4;

  printf("Enter a bad smelling Number  \n");
  scanf("%d",&N);

  Opposite_1_Pyramid(N);

  getch();
  return 0;
}

// funtion definition
int Opposite_1_Pyramid (int n)
{
  int i, j, c = n +2 ;

  for(i=0; i<=n; i++)
  {
    c--;
   for(j=0; j <= (2*n-i); j++)
   {
      if(j>=i)
       {
         printf("%d  ",c);

//         if(j < n)
//          c++;
//         else
//          c--;
       }

      else
        printf("   ");
   }

   printf("\n");

  }

  return 0;
}

