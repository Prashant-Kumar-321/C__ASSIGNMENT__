// Program to print all prime numbers under 100;
#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,flag = 1;

  for(i=2; i<=100; i++)
  {
    flag = 1;

    // checking i is prime or not
    for(j=2; j<i; j++)
    {
      if(i%j == 0)
      {
        flag = 2;
        break;
      }
    }
    //Printing prime numbers
     if(flag == 1)
        printf("%d ",i);

  }

  getch();
  return 0;

}
