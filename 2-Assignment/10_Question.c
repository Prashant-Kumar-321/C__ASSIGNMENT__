
#include <stdio.h>
#include <conio.h>

int main()
{
    // Program to add a extra digit(user given) to a user given number ;
    // ex:- a = 768, digit = 9 final number = 7689

    int customN ; // to store number ;
    short int customD; // to store  digit ;

    printf("\tEnter a (+)Number and (+)digit \n\tN,D : ");
    scanf("%d  %hu",&customN,&customD); // 456 8
    customN *= 10 ;
    customN += customD ;

    printf("New number after addig Digit(%d) on end is = %d",customD,customN) ;

    getch() ;
    return 0 ;

    /*
     scanf("%d,%d",&customN,&customD); numbers are not storing in correct variable  when
     i was  inserting numberc(comma Seperated ) digit was storing in correct variable but
     number was not
     whent i was printing below string digit was being printed but in place of number
     0 was being printed ;

     but as soon as i use %hu formate specifier it has been short out

     i am not understandin that in case of taking input we have to use %hu that is formate specifier fo
     unsigned short int but when it comes to print i can print with int formate specefier %d ;
     how ;


    */




}
