#include<stdio.h>
#include<conio.h>

int main()
{
  int i, j, sum = 0, a, n = 1, remainder = 0, count;



  for(i = -1000; i <= 1000; i++) // outer loop
  {
     a = i; // assigning a to i
     sum = 0;
     count = 0;

    // digit count
    while(a != 0)
    {
      count++;
      a /= 10;
    }
    // counting digit in i done

    // calculating digit sum of a number each raised to the power total no of digits in a given number
    for(j = i; j != 0; j /= 10)
    {
      n = 1;
      remainder = j % 10;

      for(int k = 1; k <= count; k++) // calculating digit to the power total no digit in number
      {
        n*= remainder;
      }

      sum += n ;

    }

    if(sum == i)
      printf("%d \n",i);


  }

  getch();
  return 0;
}
