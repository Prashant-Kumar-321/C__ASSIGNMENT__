#include<stdio.h>
#include<conio.h>

int is_odd_even (int);

int main()
{
  int num, n;

  printf("Enter a Your choice number : ");
  scanf("%d",&num);

  n = is_odd_even(num); // n = 0 || n = 1 ;

  if(n == 0)
    printf("Odd number \n%d",n);
  else
    printf("Even number \n%d",n);



  getch();
  return 0;
}

// is-odd-even definition

int is_odd_even(int n)
{
  return (n&1) ? 0 : 1 ; // if n&1 == 1 i.e n is odd
}
