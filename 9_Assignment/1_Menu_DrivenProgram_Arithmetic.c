#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int choice, choice2;
    int a, b, c;
    float f1, f2, r2;
//   while(1)
//   {
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");

    printf("\n\nChoose one of the given above option(For instance to Add two number choose 1. ..) :- ");
    scanf("%u", &choice);



 
           
   while(1)
   {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            printf("Enter two number \n");
            scanf("%d %d", &a, &b);
        }

        switch (choice)
        {
        case 1:
            c = a + b;
            printf("Sum = %d", c);
            break;
        case 2:
            c = a - b;
            printf("Substraction = %d", c);
            break;
        case 3:
            c = a * b;
            printf("Multiplication = %d", c);
            break;
        case 4:
            printf("Enter two number \n");
            scanf("%f %f", &f1, &f2);
            r2 = f1 / f2;
            printf("Division = %0.2f", r2);
            break;
        case 5:
            return 0;
        default:
            printf("Enter One of given option ");
        }

        // to execute the same program  one more time 
        printf("\n\n***********************************************************************************************\n");

        printf("\nIf you want to do more calculation press 1  or want to exit press 0 ");
        scanf("%u",&choice2);
        if(choice2 == 1);
        else if(choice2 == 0)
             return 0;
        
        printf("Your prefered option : ");
        scanf("%u",&choice);
        printf("\n");
   }
    // }

    return 0;
}