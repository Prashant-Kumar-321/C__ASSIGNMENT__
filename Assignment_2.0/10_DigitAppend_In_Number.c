#include<stdio.h>
#include<conio.h>

int main()
{
    // Program to Append a digit to a number
    int numa = 345, numb = 9 ;
    printf("Enter a number and a digit (comma seperated )\nNumber ,Digit = ") ;
    scanf("%d,%d",&numa,&numb) ;

    numa *= 10 ;
    numa += numb ;

    printf("Modified Number = %d",numa) ;

    getch() ;
    return 0 ;
}
