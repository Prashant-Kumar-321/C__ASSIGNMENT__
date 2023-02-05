#include <stdio.h>
#include <conio.h>
#include <string.h>

void Sort_Str(char *a) // function sort string;
{
    int i, j; // control loop
    char tem;

    for (i = 0; i < (strlen(a) - 1); i++)
        for (j = i + 1; a[j] != '\0'; i++)
        {
            if ((a + i) != NULL && (a + j) != NULL) // Pointer handling 
            {
                if (a[i] > a[j])
                {
                    tem = a[i];
                    a[i] = a[j];
                    a[j] = tem;
                }
            }
        }
}

// Driver Code
int main()
{
    char name[10] = "Prashant";

    printf("\nBefore Sort \n");
    printf("Name  = %s\n", name);

    Sort_Str(name); // calling string sort function

    printf("\nAfter Sort \nCharacters are \n");

    for (int i = 0; name[i] != 0; i++)
        printf("%c ", name[i]);

    printf("\nName = %s\n", name);

    getch();
    return 0;
}