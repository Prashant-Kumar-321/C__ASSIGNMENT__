#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 768,unitDigit ;
    printf("Enter a number \n");
    scanf("%d",&a) ;

    unitDigit = a%10 ;//unitDigit = 8 ;
    a -= unitDigit ; // 760 ;

    printf("New a = %d\n",a) ;
    getch();

    // Another Approach

    printf("Again Enter a number \n") ;
    scanf("%d",&a) ;

    a /= 10 ;
    a *= 10 ;

    printf("New a = %d",a) ;
    getch() ;

    return 0;
}
