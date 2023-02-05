#include<stdio.h>
#include<conio.h>

unsigned long long int total_way_of_arrangement(int n,int r )
{
  unsigned long long int fN = 1, fR = 1;
  int i;

  // program to calculate n factorial
  for(i=1; i<=n; i++)
  {
    fN = fN * i;  // factorial of n
  }

  // program to calculate factorial of n-r

  for(i=1; i<=(n-r); i++)
  {
    fR *= i; // factorial of (n-r)
  }

  //permutation calculation

  return fN / fR ;

}

// driver function

int main()
{
  int n, r;
  unsigned long long int total_way;

  printf("Total number of distinct objects : ");
  scanf("%d",&n);

  printf("\nTotal number of items to be arranged at a time : ");
  scanf("%d",&r);

  total_way = total_way_of_arrangement(n,r);

  printf("\nTotal number of ways of arranging %d items,selected %d at a time : %llu",n,r,total_way);

  getch();
  return 0;

}
