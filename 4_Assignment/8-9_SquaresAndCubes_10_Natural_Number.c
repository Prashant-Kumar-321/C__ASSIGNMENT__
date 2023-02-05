#include<stdio.h>
#include<conio.h>

int main()
{
    // program to print Squares of first 10 nautral numbers;
    int n = 1,a = 1,i = 1 ;  // initialization of loop ;

    while (n <= 10)
    {
        printf(" %d^2 = %d\n", n,(n*n) ); // loop body ;
        n++;
    }
    printf("\n");

    // program to print cubes of first 10 natural numbers ;
//  int a = 1 ;
    while(a <= 10 )
    {
        printf(" %d^3 = %d\n",a,(a*a*a)); // a^3 = a*a*a ;
        a++;
    }

    printf("\n\n\n");
// program to print square root of first 10 natural number ;
//    int i = 1 ;
    while (i <= 10 )
    {
        printf("%0.3f \n\a",sqrt(i));
        i++;
    }

    getch();
    return 0;
}
