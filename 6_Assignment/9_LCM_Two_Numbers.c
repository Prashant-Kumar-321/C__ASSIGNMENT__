#include<stdio.h>
#include<conio.h>

int main()
{
    //pending
    int n1, n2, max ;

    printf("\t\t\tLCM of Two number \n\t\t\t*****************\n");

    printf("Enter two number = ");
    scanf("%d %d",&n1,&n2);

    max = (n1>n2) ? n1 : n2 ; // expression for max among n1 and n2 ;

    while(1) // loop iteration infinite
    {

        if(max % n1 == 0 && max % n2 == 0 )
        {
            printf("Lcm of %d and %d is %d ",n1, n2, max );
            break ;
        }
        max++ ;
    }
    getch();

    printf("\n\n****************************************\n");
    // proram to calculate lcm of three numbers
    int num1, num2, num3,max2 ;
    printf("\nEnter three numbers = ");
    scanf("%d%d%d",&num1,&num2,&num3);

    // intruction of max among num1,num2,num3

    // when two number are equal
    if(num1 == num2)
    {
        if(num1>num3)
        {
            max2 = num1 ;
        }
        else
        {
            max2 = num3 ;
        }
    }

    else if(num1 == num3)
    {
        if(num1>num2)
        {
            max2 = num1 ;
        }
        else
        {
            max2 = num2;
        }
    }

    else if(num2  == num3 )
    {
        if(num2 > num1)
        {
            max2 = num2 ;
        }
        else
        {
            max2 = num1 ;
        }
    }
   // when all are equal
    else if (num1 == num2 == num3)
    {
        max2 = num1 ;
    }
   // when all are different
    else
    {
        if(num1>num2)
        {
            if(num1>num3)
            {
                max2 = num1 ;
            }
            else
            {
                max2 = num3 ;
            }
        }
        else
        {
            if(num2>num3)
            {
                max2 = num2 ;

            }
            else
            {
                max2 = num3 ;
            }
        }
    }
    // loop for lcm
    do
    {
      if(max2 % num1 == 0 && max2 % num2 == 0 && max2 % num3 == 0)
      {
        printf("Lcm = %d",max2);
        break;
      }
      max2++ ;
    }
    while(1);





    return 0;
}
