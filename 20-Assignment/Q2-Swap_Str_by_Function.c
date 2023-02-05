#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap_str(char a[], char b[]) // (char*a, char*b)
{
    char tem[20];

    strcpy(tem, a);
    strcpy(a, b);
    strcpy(b, tem);
}

/* Driver Code */
int main()
{
    char city1[10], city2[10];
    strcpy(city1, "Delhi"); // Storing "Delhi", in City1 array;
    strcpy(city2, "Patna"); // Storing "Patna", in City2 array;

    printf("\nBefore Swapping \n");
    printf("City-1 = %s\nCity-2 = %s\n\n", city1, city2);

    swap_str(city1, city2); // function call to swap two string

    printf("After Swapping \n");
    printf("City-1 = %s\nCity-2 = %s\a\n\n", city1, city2);

    getch();
    return 0;
}
