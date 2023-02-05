#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n=9;
    char c = 64;

    printf("\t\t\t\t\t\t\t\tTriangle Star Pattern\n");
    printf("\t\t\t\t\t\t\t      *************************\n");

    printf("\n\nEnter a magic value to see magic: ");
    scanf("%d",&n);


    for(i=0; i<=n; i++)
    {
        c++;

        for(j=0; j<=n; j++)
        {

            if( j>=(n-i) )
            //  printf("%c ",c);  // to print Alphabet pattern
                printf("*");
            else
                printf(" ");

        }

        printf("\n");

    }

    getch();
    return 0;
}
