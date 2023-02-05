// Program to print nth term of fibonacci series
#include<stdio.h>
#include<conio.h>

int main()
{
    int fib1,fib2,count,num,i;
    long long int fib3;
    fib1 = 1 ;
    fib2 = 1 ;
    count = 0;
    i = 0 ;
    num = 0 ;

    printf("\t\t\t\t\t\t Nth term of Fibonacci Series \n");

    printf("\nEnter the value of n = ");
    scanf("%d",&num);

    // if user want first term and 2nd term of fibonacci series

    if(num==1 || num == 2)
    {
        if(num == 1)
            printf("1st term is 1 \n");
        else
            printf("2nd term is 1 \n");
    }

    // this for num == 3 or higher term
    else
    {
        for(i = 2 ; i < num; i++ )
        {
          fib3 = fib1 + fib2 ;
          fib1 = fib2 ;
          fib2 = fib3 ;
        }
        printf("%dth term is %llu ",num , fib3);

    }
    getch();
    return 0;
}
