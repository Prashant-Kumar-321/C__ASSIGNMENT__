// WAP to check given is whether part of fibonacci series or not
#include<stdio.h>
#include<conio.h>

int main()
{
    int fib1 = 1, fib2 = 1, fib3 = 0, Num,flag = 0, count = 2 ;

    printf("Enter a Number if it is a fibonacci number : ");
    scanf("%d",&Num);

    if(Num >= 2) // this logic only works on number greater than or equal to 2
    {
        while(fib3 <= Num)
        {
            fib3 = fib1 + fib2 ;
            count++;

            if(Num == fib3)
            {
                flag = 2;
                break;
            }

            fib1 = fib2 ;
            fib2 = fib3 ;

        }

         // Dicision making chunck;
        if(flag == 0)
            printf("%d is not part of fibonacci series ",Num);

        else
        {
            printf("%d is Part of Fibonacci series \n",Num);
            printf("%d is %dth term of fibonacci series \n",Num,count);
        }
    }

    else  if(Num == 0 || Num == 1)
    {
      printf("%d is part of Fibonacci series \n",Num);

      if(Num == 0 )
        printf("0 th term of fibonacci series \n");
      else
        printf("1st or 2nd term of fibonacci series \n");

    }







    getch();
    return 0;
}
