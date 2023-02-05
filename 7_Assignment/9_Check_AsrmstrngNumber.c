#include<stdio.h>
#include<conio.h>

int main()
{
    int num, count = 0, i, sum = 0,j;


    printf("Enter a Number if it is an Armstrong Number : ");
    scanf("%d",&num);

    int SN = num ;

    // program to calulate digits
    for(i = num ; i != 0; i /= 10)
    {
        count++;
    }

    while(num != 0)
    {
        int n = 1;
        int remainder = num % 10;
        num /= 10;

        for(j=1; j<=count; j++) //calculate digit raise of toatal no. of digit in number
        {
            n *= remainder ;

        }

        sum = sum + n ;
    }

    if(sum == SN)
        printf("%d is Armstrong Number \n",SN);
    else
        printf("%d is not Armstrong Number\n",SN);



    getch();
    return 0;
}
