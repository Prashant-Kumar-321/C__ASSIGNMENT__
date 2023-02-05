#include <stdio.h>
#include <conio.h>
#include<windows.h>

float avg(float *p, int size)
{
    float sum = 0;
    for(int i=0; i<size; i++)
    {
        sum = sum + *(p+i) ;
    }

    return (sum/size) ;
}

int main()
{
    float Num[10]; // Declare array to store Numbers
    int i;         // To maintaine loop
    char choi;

    while (1)
    {
        printf("Enter 10 Elements : \n");

//         taking input from use
         for (i = 0; i < 10; i++)
             scanf("%f", &Num[i]);

         float Avg = avg(Num, 10);

         printf("Average = %g \n", Avg);

        printf("If you want to calculate Avg again press Y or if not press N : \n");
//
        choi = getch(); // take user choice
//
        if(choi == 'N' || choi == 'n')
             break ;
        else if(choi != 121 && choi != 89)
        {
            printf("choice is Y\n");
            while(( (choi != 'Y') && (choi != 'y') ) )
            {
                printf("\n\a\aInvalid choice \n");
                printf("Make a valid choice : ");

                choi = getch();

                if(choi == 'N' || choi == 'n')
                    exit(0);
            }
//
        }
//
        system("cls");
    }

    getch();
    return 0;
}
