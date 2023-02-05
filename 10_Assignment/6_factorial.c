#include<stdio.h>
#include<conio.h>

// function definition of factorial calculator function
unsigned long long int fact(int n)
{
    int i = 1;
    unsigned long long int f = 1;

    for(i = 1; i<= n; i++)
    {
        f *= i ;
    }

    return f;

}

// function definition of digit count
int digit_count (unsigned long long int num)
{
    int  count = 0;
    while (num>0)
    {

        count++;
        num /= 10;

    }
    return count ;
}

// Driver function

int main()
{
    int n,digit;
    unsigned long long int f;

    printf("FACTORIAL OF N : ");

    printf("\n\nEnter a number : ");
    scanf("%d",&n);

    f = fact(n); // funtion name and variable name on which we are storing returning value of function cann't be same

    printf("%d! = %d",n,f);


    digit = digit_count(f);

    printf("\n\nNumber of digits : %llu",digit);


    return 0;
}








