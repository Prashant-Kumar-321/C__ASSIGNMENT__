#include<stdio.h>
#include<conio.h>

void pyramid(int);

void Opposite_Pyramid (int);

int main()
{
    int n;
    n=4;
    printf("Enter a number of n : ");
    scanf("%d",&n);

    Opposite_Pyramid(n); // printing shiv damru ;
    pyramid(n);

    getch();
    return 0;
}

// function Definition of pyramid()
void pyramid(int n)
{
    int i,j;

    for(i=0; i<=n; i++)
    {

        for(j=0; j<=(n+i); j++)
        {
            if(j>=(n-i))
                printf("@ ");
            else
                printf("  ");

        }

        printf("\n");

    }

}

// funtion definition of Opposite_pyramid
void Opposite_Pyramid(int n) // n= 4;
{
    int i, j;

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=(2*n-i); j++)
        {

            if(j>=i)
                printf("@ ");
            else
                printf("  ");
        }

        printf("\n");
    }
}
