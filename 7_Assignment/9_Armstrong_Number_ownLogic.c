#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

  // Program to verify if given is an Armstrong Number or not

  int userNumber = 0, sn1 ,sn2, i,j, count = 0, sum = 0 ;

  printf("Enter a number(integer*) if it is an Armstrong number : ");
  scanf("%d",&userNumber);

  sn1 = userNumber ; // reserving userNumber
  sn2 = userNumber ;

  while(sn1 != 0) // iteration == Digit number of a number
  {
    sn1 /= 10 ; // removing last one digit from given number to dicreement it ;
    ++count ;
  }


  for(i = 0 ; i< count ; i++)
  {
    int digit = sn2 % 10 ;
    sn2 /= 10 ;

    sum += pow(digit,count); // I am using predefined funtion pow(_,_) ;

  }

  (sum == userNumber) ? printf("Armstrong Number \n") : printf("Not a Armstrong number \n");

  getch();
  return 0;
}
