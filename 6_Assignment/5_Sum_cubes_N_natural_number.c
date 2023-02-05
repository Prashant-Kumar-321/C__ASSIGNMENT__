#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1, n;
    long long int cube_Sum ;

    printf("\t\t\tsum of cubes of first n natural number \n\t\t\t*************************************\n");
    printf("\nEnter value of n \n");
    scanf("%d",&n);

    // loop to calcualte sum of cubes of natural number

    while (i <= n)
    {
        if(i >= 1 && i <= (n-1))
        {
            printf("  %d + \n",(i*i*i));
            cube_Sum += (i*i*i);
            i++;
        }
        else
        {
            printf("  %d+\n------------\n",(i*i*i));
            cube_Sum += (i*i*i);
            i++;
        }

    }
    printf("%ld",cube_Sum);
    printf("\n\nsum of cubes of first %d natural number is \" %ld \" ",n,cube_Sum);

    getch();
    return 0;

}
