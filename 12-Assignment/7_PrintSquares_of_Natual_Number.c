//Write a recursive function to print squares of first N natural number
#include<stdio.h>
#include<conio.h>
#include<math.h>

void Print_Squr_NN(int n)
{
    if(n==0)
        return;

//    printf("%d ",n*n);
//    Print_Squr_NN(n-1);
    /* to print squares of first n natural number in reverse order  */

    Print_Squr_NN(n-1);
    printf("%d ",n*n);

    // to calculate cube of first n natural number ;
//    Print_Squr_NN(n-1);
//    printf("%d ",n*n);

    // to calculate square root of first n natural number ;
//    Print_Squr_NN(n-1);
//    printf("%0.3f\n", sqrt(n));


}

int main()
{
    int n;

    printf("Enter value of n to see\nSquare of first n natural number\n");
    printf("\nN= ");
    scanf("%d",&n);

    Print_Squr_NN(n);

    getch();

    return 0;

}
