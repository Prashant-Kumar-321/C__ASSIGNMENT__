#include<stdio.h>
#include<conio.h>

int main()
{
    int fib1 = 1, fib2 = 1, fib3 = 0; // first two terms of fibonacci series
    int i, Ftsum = 2, num  = 6 ;

    printf("Enter value of N : ");
    scanf("%d",&num);

    if(num >= 2)
    {
      printf(".................................................................................\n");
      printf("\nFist %d terms : .......\n",num);
      printf("1 1 ");

         // for calculation of fibonacci terms and sum
        for(i = 2; i<num ; i++)
        {

            fib3 = fib1 + fib2 ;
            printf("%d ",fib3);

            fib1 = fib2;
            fib2 = fib3;

            Ftsum += fib3;
        }

        printf("\n.................................................................................\n");
        printf("\n\nSum of first %d term of Fibonacci series = %d",num,Ftsum);
    }

    else
    {
      printf("first 1 term of fibonacci series \n\n");
      printf("Sum of first 1 term  of fibonacci series  = 1");
    }



    getch();
    return 0;
}
