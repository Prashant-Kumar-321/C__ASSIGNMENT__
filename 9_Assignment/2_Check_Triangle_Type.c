#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int a, b, c,count = 0;
    unsigned short int choice;

        printf("Enter Length of sides of a triangle : ");
        scanf("%u %u %u", &a, &b, &c);

    while (1)
    {  
        printf("choose one of the below option \n To check whether the set of length of sides of a triangle is :  \n\n");
        printf("1.Isosceleus Triangle \n");
        printf("2.Right angled Triangle \n");
        printf("3.Equiletral Triangle \n");
        printf("4.EXIT : \n\n");

        printf("Your Choice \n");
        scanf("%hu", &choice);
        
        // this set of line of code is for more iteration 
        // want to take side of triangle after taking choice 
        if(count != 0)
          {
            if(choice == 4)
                 return 0;

            else if( choice == 3 || choice == 2 || choice == 1)
            {
            printf("Enter Length of sides of a triangle : ");
            scanf("%u %u %u", &a, &b, &c);
            }
            else {
                printf("Invalid choice ");
                printf("\n**********************************************\n");
                continue;
            }
          }
          

        switch (choice)
        {
        case 1:
            switch (a == b || b == c || c == a)
            {
            case 0:
                printf("Sides are Not of Isoceles triangle \n");
                break;
            case 1:
                printf("Sides are of Isoceles triangle \n");
                break;
            }
            break;
        case 2:
            switch ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
            {
            case 0:
                printf("Sides are not of a Right angled Triangle \n");
                break;
            case 1:
                printf("sides are of Right Angled Triangle \n");
                break;
            }
            break;
        case 3:
            switch (a == b && b == c)
            {
            case 0:
                printf("Sides are not of Equiletral Triangle \n");
                break;
            case 1:
                printf("Sides are of Equletral Triangle \n");
                break;
            }
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice \n");
        }

        printf("\n********************************************************************************\n\n");
        count++;
    }
}