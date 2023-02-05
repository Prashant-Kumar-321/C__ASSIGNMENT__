// Write a recursive function to print first N natural numbers

#include<stdio.h>
#include<conio.h>
// function  definition
void printNaturalNo(int N)
{
    // Base condition
    if(N==1)
        printf("1 ");
    else
    {
        printNaturalNo(N-1);//recursive call
        printf("%d ", N);
    }

}

int main()
{
    int N = 5;
    printf("Enter a Number of N to print first N natural Number \n");
    scanf("%d",&N);

    printf("\nFIRST %d NATURAL NUMBER --------- \n",N);
    printNaturalNo(N);// call to print first N Natural Number

    printf("\a");
    getch();
    return 0;
}
