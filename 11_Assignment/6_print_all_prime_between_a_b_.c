#include<stdio.h>
#include<conio.h>

int checkPrimenumber(int a)
{
  int i, flag = 0;
  for(i=2; i<= (a/2); i++)
   {
     if(a%i == 0)
     {
       flag =1;
       break;
     }
   }

   if(flag == 0)
     return 1;
   else
    return 0;
}

void print_Prime_Number(int a, int b)
{
    int i = 0,count = 0;
    for(i = a+1; i < b; i++)
    {
      /*
//        flag = 0; // indicator  tell which i is prime and have to print
//        for(j=2; j <= i/2; j++)
//        {
//            if(i % j == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
*/
       int n = checkPrimenumber(i);
       if(n==1)
        {
         printf("%d ",i);
         count++;
        }

    }

    printf("\n\nTotal number of prime number is %d",count);

}

// driver function
int main()
{
    int n1,n2;
    printf("Enter two number between which you want to print all prime numbers :  \n");
    scanf("%d %d",&n1,&n2);

    printf("All prime Numbers between %d and %d:.......\n ",n1,n2);

    print_Prime_Number(n1, n2);

    getch();
    return 0;
}
