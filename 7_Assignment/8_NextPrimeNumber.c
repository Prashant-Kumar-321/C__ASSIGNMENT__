#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, Num , flag = 1 ;

    printf("Enter a number  = ");
    scanf("%d",&Num);

//    Num++;
//
//    for(i = Num ; i > -1 ; i++)
//    {
//        flag = 1;
//
//      // Loop to check num is prime or not
//        for(j = 2; j< Num ; j++)
//        {
//            if(Num % j == 0)
//            {
//             flag = 2;
//              break;
//            }
//        }
//
//        if(flag == 1)
//        {
//         printf("Next prime Number = \n%d",Num);
//         break;
//        }
//
//    }
//
   getch();

//     using while

    while (1)
    {
        Num++;
        flag = 1;
       // program to check Num++ is prime or not
        for(i = 2; i < Num ; i++)
        {
            if(Num % i == 0)
            {
                 flag = 2;
                 // printf("next prime Number = %d ",Num);
                 break;
            }
        }

        if(flag == 1)
        {
          printf("next prime number = %d",Num);
          break;
        }



    }


    getch();
    return 0;
}
