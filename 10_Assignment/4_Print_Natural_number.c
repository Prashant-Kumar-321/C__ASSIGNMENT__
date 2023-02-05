#include<stdio.h>
#include<conio.h>

void print_nat_number(int n) // funtion definition of print natural number
{
  int i;
  for(i = 1; i <= n; i++)
  {
    printf("%d ",i);
  }
}

// driver funtion
int main()
{
  int num;
  printf("Enter a your interest positive number : ");
  scanf("%d",&num);
  printf("First %d Natural number: \n",num);

  print_nat_number(num);

  getch();
  return 0;
}
