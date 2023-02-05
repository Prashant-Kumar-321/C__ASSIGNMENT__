#include<stdio.h>
#include<conio.h>

int digit_count(unsigned int );

int main()
{
  unsigned int num , d_n = 0, sn = 4;

  printf("Enter a four digit number \n");
  scanf("%u",&num);

  d_n = digit_count(num); // value of count will be assigned to d_n;

  // if - else statement
  if(sn == d_n)
    printf("WELDONE!\n");
  else
    printf("Enter \" 4 \" digit number\n");

  getch();
  return 0;
}

// function definition of digit_count
int digit_count(unsigned int num)
{
  int count = 0;

  while(num != 0)
  {
    num /= 10;
    count++;
  }

  return count ;
}
