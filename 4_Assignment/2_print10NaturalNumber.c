#include<stdio.h>
#include<conio.h>

int main()
{
   // program to print first 10 natural number ;
  int n = 1 ;
  while (n <= 10)
  {
    // Loop Body
    printf("%d  ",n);
    n++ ;
    if(n == 11)
    {
      printf("\n\n");
    }
  }


  int n1;
  // Program to print firs N Natural number
  printf("Enter value of n Upto which you want to display counting of natural number \n");
  scanf("%d",&n1);

  for(int i = 1 ; i <= n1 ; i++)
  {
    if (i == 1 || i <= 99)
    {
      printf("%d  ",i);
    }
    else if( i <= 999)
    {
      printf("%d   ",i);
    }
    else if( i <= 9999)
    {
      printf("%d    ",i);
    }
    else
    {
      printf("%d      ",i);
    }
  }
}
