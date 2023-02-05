#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 1, n, Square_Sum = 0 ;
    printf("\t\t\tsum of squares of first n natural number \n\t\t\t****************************************\n");

    printf("Enter value of n = ");
    scanf("%d",&n);

    // loop
    while (i <= n) // loop variable is i
    {
      printf(" %d + ",(i*i));
      Square_Sum += (i*i);
      i++ ;
    }
    printf(" = %d \n",Square_Sum);
    getch();
    return 0;
}
