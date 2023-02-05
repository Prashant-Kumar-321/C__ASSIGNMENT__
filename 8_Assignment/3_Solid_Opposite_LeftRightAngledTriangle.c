#include<stdio.h>
#include<conio.h>

void Print_Pattern() ;

int main()
{

    Print_Pattern();

    getch();
    return 0;
}

// funtion defintion of print_Pattern()
void Print_Pattern ()
{
    int i, j, n = 5;

    printf("Enter a number\n\n");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {

        for(j=0; j<=(n-i); j++)
        {
            printf("*");
        }

        printf("\n");

    }

}
