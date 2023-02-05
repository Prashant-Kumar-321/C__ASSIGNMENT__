#include <stdio.h>
#include <conio.h>

int main()
{
  // Program to swap two int variable. using third variable
  int n1 , n2 , tem ;

  printf("Enter two number \n") ;
  scanf("%d %d",&n1,&n2) ;
  printf("Before swapping  n1 = %d and n2  = %d\n",n1, n2);

  tem = n1 ; // n1
  n1 = n2 ; // n2
  n2 = tem ; // ;n1

  printf("After swappig n1 = %d and n2 = %d",n1,n2) ;


  getch() ;
  return 0 ;
}





//
//int main()
//{
//
//    // using third variable and second is using or operator ;
//
//
//
//// int fv,tem,sv;
////
////scanf("%d %d",&fv,&sv) ;
////
////tem = fv ;
////sv = fv ;
////tem = sv ;
//
////printf("%d",fv);
////printf("\n%d",sv) ;
//
//    int temp, x,y;
//    scanf("%d %d",&x,&y) ;
//
//    // logic to swapp values to x and y ;
//     // using third variable
//   tem = x
//    x=y;
//    y=temp;
//
//    printf("%d",x);
//    printf("\n%d",y) ;
//
//    return 0;
//
//
//
//#include<stdio.h>
//int main()
//{
//int a,b;
//printf("Enter two numbers:");
//scanf("%d %d",&a,&b);
//printf("Before swapping a=%d b=%d",a,b);
//a=a^b;
//b=a^b;
//a=a^b;
//printf("After swapping a=%d b=%d",a,b);
//return 0;
//}
//
//
//
//    getch() ;
//    return 0 ;
//
//}
//
//#include<stdio.h>

//int main()
//{
//int a,b;
//printf("Enter two numbers:");
//scanf("%d %d",&a,&b);
//printf("Before swapping a=%d b=%d",a,b);
//a=a^b;
//b=a^b;
//a=a^b;
//printf("After swapping a=%d b=%d",a,b);
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int a,b;
//printf("Enter two numbers:");
//scanf("%d %d",&a,&b);
//printf("Before swapping a=%d b=%d",a,b);
//a=a||b;
//b=a||b;
//a=a||b;
//printf("After swapping a=%d b=%d",a,b);
//return 0;
//}

