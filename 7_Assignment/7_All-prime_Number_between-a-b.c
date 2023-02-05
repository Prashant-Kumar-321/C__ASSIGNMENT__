#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,a,b,flag;

    printf("Enter two Number between which you want to reterieve prime number \n:");
    scanf("%d %d",&a,&b);

    // since 1 is not prime number when a== 1 i am iterating i = a+1;
    if(a==1)
    {
        for(i = a+1; i <= b ; i++) //we have to calculate prime numbers between two number excluding a and b
        {
            flag =1;
            for(j=2; j<i ; j++)
            {
                if(i%j == 0)
                {
                    flag =2;
                    break;
                }
            }

            if(flag == 1)
                printf("%d \n",i);
        }
    }

    else // a!= 1
    {
        for(i=a; i <= b ; i++) //we have to calculate prime numbers between two number excluding a and b
        {
            flag =1;
            for(j=2; j<i ; j++)
            {
                if(i%j == 0)
                {
                    flag =2;
                    break;
                }
            }

            if(flag == 1)
                printf("%d \n",i);
        }
    }


    getch();
    return 0;
}
