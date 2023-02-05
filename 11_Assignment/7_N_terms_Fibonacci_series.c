#include<stdio.h>
#include<conio.h>

void PrintFibb(int n)
{
  unsigned int a =1, b=1, c, i;

  printf("%u %u ",a,b);

  for(i = 3; i<= n; i++)
  {
    c = a+b;
    a = b;
    b = c;
    printf("%u ",c);
  }

}

int main()
{
  int n;

  printf("Firs N terms of fibonacci Series \n");
  printf("Enter value of n : \n");

  scanf("%d",&n);

  printf("\nFIRST %d TERM OF FIBBONACCI SERIES : ----\n\n",n);
  PrintFibb(n);


  getch();
  return 0;
}
