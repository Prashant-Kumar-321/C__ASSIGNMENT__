// Write a program to reverse given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,userNumber = 0, count = 0,digit, Rev_number = 0 ;

    printf("Enter a number : ");
    scanf("%d",&userNumber);

    // intsruction to calculate digit count

    for(i = userNumber; i != 0; i /= 10)
    {
        count++;
    }

    // program to revers userNumber

    for (j = userNumber ; j != 0 ; j /= 10)
    {
        digit = j % 10 ; // last digit of number ;
        int n = 1 ;

        for(k = 0 ; k < count-1 ; k++)
        {
            n *= 10 ;
        }

        digit *= n ;
        Rev_number += digit ;

        count-- ;

    }
    printf("Reverse Number is %d",Rev_number);



    getch();
    return 0;
}
