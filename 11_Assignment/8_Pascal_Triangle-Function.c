#include<stdio.h>
#include<conio.h>

unsigned long long int factorial (int n) // function to calculate  factorial
{
  int i;
  unsigned long long int fact = 1;

  for(i=1; i<=n; i++)
    fact *= i;

  return fact;
}

// function to calculate combination
 unsigned int combination(int n,int r)
{
  unsigned int comb;

  comb = factorial(n) / ( factorial(r) * factorial(n-r));

  return comb;
}

// Main function
int main()
{
  int i,j, n = 9, k ;
  int a = 0;

  printf("\t\t\t\t\tPascal's Triangle \n\n");
  printf("Enter Number of Rows : ");
  scanf("%d",&n);
  n--; // to decrease its value by one so that n row of pascal triangle will be printed

  for(i=0; i<=n; i++)
  {
     a = 0;
     k = -1;
    for(j=0; j<=(n+i); j++)
    {
      if(j==(n-i) || j == (n-i)+a)
      {
        k++;
        printf(" %d ",combination(i,k));
        a += 2;

      }
      else
      {
        printf("   ");
      }
    }

    printf("\n\n");
  }
  getch();
  return 0;
}




