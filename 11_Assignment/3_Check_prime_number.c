#include<stdio.h>
#include<conio.h>

int Check_prime_number(int num)
{
    int i,flag = 0;


    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        return 0; // not prime number
    else
        return 1; // is prime number
}

// Driver function

int main()
{
    int num;

    printf("Enter a number if it is prime or not : ");
    scanf("%d",&num);

//    dm = Check_prime_number(num);
//
//    if(dm == 0)
//        printf("\n%d Not prime Number \\(Composite number)\\ \n",num);
//    else
//        printf("\n%d prime Number \n",num);

  switch (Check_prime_number(num))
  {
  case 0:
        printf("composite number\n\n");
        break;

  case 1 :
        printf("Prime number \n\n");
        break;;

  }

    return 0;
}
