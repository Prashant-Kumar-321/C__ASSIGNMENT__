#include<stdio.h>
#include<conio.h>

#define TRURE 1
unsigned int fib(int N)
{
  if(N==0)
    return 0;
  else if(N==1 || N==2)
    return 1;
  else
    return fib(N-1) + fib(N-2);
}

int main()
{
    int x = 7, i=1;
    printf("Check Number is Fibonacci Number or Not \n");
    printf("Enter a Number: ");
    scanf("%u",&x);

    while(TRURE)
    {
        if(x == fib(i))
        {
            printf("%d is Fibonacci Number \n",x);
            break;
        }
        else
        {
            i++;
            if(x<fib(i))
            {
                printf("%d is Not a Fibonacci Number \n");
                break;
            }

        }

    }
}
