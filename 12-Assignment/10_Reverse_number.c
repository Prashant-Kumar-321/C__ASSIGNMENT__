//Write a recursive function to print reverse of a given number

#include<stdio.h>
#include<conio.h>

 int Reverse_Number (int x)
 {

   int R = 0;
   int static sum = 0;

    if(x == 0)
      return  0;

    R = x % 10 ;// unit digit of given number will be stored

    if(x <=9 ) // for last digit(first digit) of given number  345 i.e for 3 ;
      sum = (sum + R) ;
    else
      sum = (sum + R) * 10 ;

    x /= 10;

    Reverse_Number(x); // Recursive function call
    return sum ;

 }

 int main()
 {
    int x;
    int rev;

    printf("Enter a number and see its reverse Number : ");
    scanf("%d",&x);

    rev = Reverse_Number(x);

    printf("Reverse number of %d is %d ",x,rev);

    getche();
    return 0;
 }
