#include <stdio.h>
#include <conio.h>
#include <string.h>

int Srtlen(char *a) // Finding Total number of Character in the String
{
    int i, len = 0;
    
    for (i = 0; a[i] != 0; i++)
        len++;

    return len ;
}

/*Driver Code*/
int main()
{
    char Firstname[12];

    printf("Enter Your First name \n");
    scanf("%s", Firstname);

    int len = Srtlen(Firstname);

    printf("Numbers of Character = %d ", len);

    getch();
    return 0;
}