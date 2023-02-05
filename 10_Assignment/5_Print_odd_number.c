#include<stdio.h>
#include<conio.h>

void print_odd_number(int n)
{
  int i,odd;
  for(i = 0; i < n; i++)
  {
    odd = (2 * i) + 1;
    printf("%d ",odd);

  }
}

// driver funtion

int main()
{
  int num;

  printf("Enter a number \n");
  scanf("%d",&num);
  printf("\n\nFirst %d odd Natural number : \n",num);

  print_odd_number(num);

  getch();
  return 0;
}
