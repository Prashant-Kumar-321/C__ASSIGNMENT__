#include<stdio.h>
#include<conio.h>

int main()
{

    // Program to check whether the given number is armstrong number or not
    int userNumber = 0, sum = 0, i, j, k, n, count = 0 ;

    printf("Enter a Number to verify if it is an Armstrong Number : ");
    scanf("%d",&userNumber);

//    printf("%d",userNumber);
//    getch();

    // Loop to calculate number of digits in userNumber     using for loop
    for (i = userNumber ; i > 0 ; i /= 10) // condition i != 0 ;
    {
        count++;
    }

//    printf("%d \n",count);
//    getch();


    // Loop to calculate the digit sum of a number each raised to the power number of digits in a number
    for(j = userNumber ; j != 0 ; j /= 10)
    {
        int num = j%10 ; // inside num last digit will be assigned
        n = 1 ;

        // loop to calculate digit ka power digit
        for(k = 0 ; k < count ; k++) // iteration == number of digits times
        {
            n *= num ; // num * num * num * .... * Num (count times )
        }

        sum += n;
    }

//    printf("%d \n",sum);
//    getch();
    // condition check

    if (sum == userNumber)
      printf("%d is Armstrong Number \n",userNumber );
    else
      printf("%d is Not Armstrong Number \n",userNumber );

    getch();
    return 0;
    }
