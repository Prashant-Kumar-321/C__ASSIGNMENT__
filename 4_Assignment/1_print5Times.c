#include<stdio.h>
#include<conio.h>

int main()
{
    // Using While Loop

    int x = 0 ,y = 0 ;
    while(x<5)
    {
        // Loop Body
        printf("MySirG ");
        x++;
    }
    printf("\nprint with do while loop \n");
    getch();

   // variable y = 0 ;
    do
    {
        //Loop Body
        printf("MySirG ");
        x++ ;
    }
    while(x < 10);



    printf("\nprint with for loop \n");
    getch();

    for(int i = 0 ; i <= 4 ; i++)
    {
        printf("MySirG ");
    }

    getch();
    return 0;
}
