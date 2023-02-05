#include<stdio.h>
#include<conio.h>

unsigned int lcm2number(int n1, int n2) // function calculating lcm of n1 and n2
{
    unsigned int max ;

    max = (n1>n2) ? n1: n2;

    for(max; max <= n1*n2; max++)
    {
        if(max % n1 == 0 && max % n2 == 0)
            return max; // One of the value of max will be lcm of  n1 and n2 ;
    }

}

//driver function
int main()
{
    unsigned int num1, num2, lcm;

    printf("Enter two numbers : \n");
    scanf("%u %u",&num1,&num2);

    lcm = lcm2number(num1, num2);

    printf("Lcm of %d and %d is %u",num1,num2,lcm);

    getch();
    return 0;

}
