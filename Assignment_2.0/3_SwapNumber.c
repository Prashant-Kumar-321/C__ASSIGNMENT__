#include<stdio.h>
#include<conio.h>

int main()
{
  // Program to swap values of two int using Third Variable
 float a1 = 5, a2 = 3  , tem;
  printf("\n\n\nInput two Number to swap \n a,b = ") ;
  scanf("%f %f",&a1,&a2) ;

  printf("Before swapping a = %.3f and b = %.3f\n\n",a1,a2) ; // before swapping

  //Logic
  tem = a1 ; // tem= 4 ; we reserved value of a1 in tem ;
  a1 = a2 ; // a1 = 6 ;
  a2 = tem ; // a2 = tem = 4 ;

  // After swapping
  printf("*After swapping a = %.3f and b = %.3f",a1,a2) ;

  getch() ;


  return 0 ;
}
