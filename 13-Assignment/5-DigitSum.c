//5. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// Calculating digit sum of a number
int digitSum(int N, int sum)
{
  if(N==0)
    return abs(sum); // sbsolute value of sum
  else
    digitSum(N/10, sum+=N%10);
}

// Driver code
int main()
{
  int Num = -234;

  // Taking input from user
  printf("\t\t\tCompute Digit sum of a Number \n\n");
  printf("Enter a number : ");
  scanf("%d",&Num);

  printf("Digit sum of %d = %d",Num, digitSum(Num,0));

  printf("\a\n");
  getch();
  return 0;
}
