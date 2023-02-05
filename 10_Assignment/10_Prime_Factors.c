#include<stdio.h>
#include<conio.h>

void printf_prime_factors(int num)
{  int flag ;
    while(num != 1)
    {
        for(int i = 2; i <= num; i++)
        {
            flag == 0;
            for(int j = 2; j<=i/2; j++)
            {
                if(i%j == 0)
                {
                    flag == 1;
                    break;
                }
            }
            // decision making if-else
            if(flag == 0) // i is a prime number
            {
                if(num % i == 0)
                {
//                    num /= i; // quotient of num / i;
                    printf("%d ",i);
                    break;
                }
            }

        }
    }
}


// Driver function

int main()
{
  int num ;
  printf("Enter a number \n");
  scanf("%d",&num);

  printf("Prime factors :.............- \n");
  // function call
  printf_prime_factors(num);

  getch();
  return 0;
}
