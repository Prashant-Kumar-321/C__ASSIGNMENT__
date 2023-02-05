#include<stdio.h>
#include<conio.h>

//int main()
//{
//  int i,j, n = 9;
//  int a = 0;
//
//  printf("enter value of n: ");
//  scanf("%d",&n);
//
//  for(i=0; i<=n; i++)
//  {
//     a = 0;
//    for(j=0; j<=(n+i); j++)
//    {
//      if(j==(n-i) || j == (n-i)+a)
//      {
//        printf("@");
////        a = (n-i);
//        a += 2;
//
//      }
//      else
//      {
//        printf(" ");
//      }
//    }
//
//    printf("\n");
//  }
//  getch();
//  return 0;
//}

// Second Logic  to print pascal star pattern
int main()
{
    int i,j,toggle = 0, n = 9;
    printf("Enter No of rows of pascal's triangle you want \n");
//    scanf("%d"); // giving variable address is remain

    // program to print pascal's triangle pattern
    for(i=1; i<=n; i++)
    {
        toggle = 0;
        for(j=1; j<=(n-1+i); j++)
        {
            if(j>=(n+1-i))
            {

                if(toggle == 0)
                {
                    printf("*");
                    toggle = 1; // assign toggle to 1 so that next space will be printed
                }
                else
                {
                    printf(" ");
                    toggle = 0; // assign toggle to 0 so that next * will be printed
                }
            }
            else
                printf(" ") ; // For starting space of each row ;

        }
        printf("\n");
    }

    scanf("%d"); // giving variable address is remain
    return 0;
}


