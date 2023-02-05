#include <stdio.h>
#include <conio.h>

int main()
{
// Program to make last digit number as 0
// a = 3476; print a = 3470 ; ---> objective ;

    int user_number ; // storage of user own number

    int a = 356 ;
    printf("a(I) = %d\n",a);
    a /= 10 ; // to remove its last digit ; a = a/10 ;
    a *= 10 ; // to make its last digit as zero ;  a = a*10 ;

    printf("a(R) = %d \n\n", a) ;
    printf("Hit any key to remove last digit and make it zero as above  to \"your custom number\"\n");
    getch();



    {
        printf("Enter your custom Number\n");
        scanf("%d",&user_number);

        // logic to remove its last digit and make it as zero

        user_number /= 10 ; // remove last digit ;
        user_number *= 10 ; // add 0 in its unit place ;


        // Alternative Method to solvef
        user_number = (user_number) - (user_number%10) ;
        printf("Your processed number = %d",user_number);


    }

    getch() ;

    return 0 ;
}
