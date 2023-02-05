//

#include<stdio.h>
#include<conio.h>

// int sum_digit(long long int x)
//{
//  int sum = 0, R;
//
//  while(x!=0)
//  {
//    R = x%10; // return unit digit
//    sum += R; // Add each digit of given number in the sum while iteration
//    x /=10 ; // will remove last digit one by one ;
//  }
//  return sum ;
//}

// Recursive Function Definition for calculating sum of digits of given number x
int Digit_sum(int x)
{
 int R = 0;

 if(x==0)
   return 0;

 R = x%10;
 x /= 10 ;

 return R + Digit_sum(x);
}


// Driver function
int main()
{
  long long int num ; // variable declaration

  printf("Enter a number : ");
  scanf("%lld",&num);

  printf("\nDigit sum = %d",Digit_sum(num));

  getche();
  return 0;
}
