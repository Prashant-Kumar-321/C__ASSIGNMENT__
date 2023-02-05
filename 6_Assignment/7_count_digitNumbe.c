// Write a program to count digits in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int N,  digit_count = 0 ;
    printf("Enter a Number \n");
    scanf("%d",&N);

    while (N > 0) // while (N != 0)
    {
        N = N/10;
        digit_count++;
    }
    printf("Number of digits  = %d\n",digit_count);

    printf("\n\n");

    getch();
    return 0;
}

// As of now going bounce
/*
#include <stdio.h>
#include<math.h>
int main()
{
    int num;  // variable declaration
    int count=0;  // variable declaration
    printf("Enter a number");
    scanf("%d",&num);
    count=(num==0)?1:log10(num)+1;
    printf("Number of digits in an integer is : %d",count);
    return 0;
}
*/
