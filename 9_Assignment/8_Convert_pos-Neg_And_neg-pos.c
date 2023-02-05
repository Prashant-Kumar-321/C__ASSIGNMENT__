#include<stdio.h>
#include<conio.h>

int main()
{
  int num, conv_num;
  printf("Enter a Number : \n");
  scanf("%d",&num);

  // logic to convert +ve--> -ve and -ve ---> +ve
  switch(num>0)
  {
  case 1: // num is +ve
        printf("Number after Converting sign \nNum = %d\n",(num*-1));
        break;
  case 0: // num is -ve
        printf("Number after converting sign \nNum = %d\n",(num*-1));
  }

//  printf("new num %d",num*-1); // this is single line code by which we can do the above task ;

  return 1 ;
}
