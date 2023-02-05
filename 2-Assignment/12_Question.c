#include <stdio.h>
#include <conio.h>

int main()
{
    // Program to Rotate digits of a three digit number towards right ;

    int num;

    printf("Enter a 3 digit Number\n") ;
    scanf("%d",&num) ;   // for example = 786

    num = ((num%10)*100) + (num/10) ;

    printf("Your Number after Right Rotation by one position is %d",num) ;


    getch();


    return 0 ;
}
