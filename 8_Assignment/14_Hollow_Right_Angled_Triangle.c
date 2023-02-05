#include<stdio.h>
#include<conio.h>

void  HollowTriangle_print (int) ; // funtion  declaration

int main()
{
    int n;

    printf ("Enter value of n to see magic \n");
    scanf("%d",&n);

    // function call
    HollowTriangle_print(n); // funtion call

    getch();
    return 0;
}

// HollowTriangle() funtion definition

void HollowTriangle_print (int N)
{
    int i, j, c = 64;

    printf("\n\n\t");

    for(i = 0; i <= N; i++)
    {
        for(j=0; j <= i; j++)
        {
            if(j == 0 || j == i || i == N)
                printf("* ");

            else
                printf("  ");
        }
        printf("\n\t");

    }
}
