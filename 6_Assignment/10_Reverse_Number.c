#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  // program to rever a given number
  int num, sn, sn1, a, rn = 0, c = 0  ;

  printf("Enter a number \n");
  scanf("%d",&num);

  sn = num ; // for twice usage of user num ;
  sn1 = num ;// reserving num for printing at the end ;

  // program to calculate digit count of number
  while (num != 0)
  {
    c++ ; // number of digit will be stored in c variable
    num = num / 10 ; // on each iteration it will remove its last digit
  }

  // instructions for reversing number
  while (sn != 0 )
  {
    c--;
    a = (sn % 10) * pow(10,c);
    rn += a ; // expression of making reverse number of num
    sn /= 10 ;
  }
  printf("After reversing %d is %d ",sn1,rn);



  getch();
  return 0;
}
