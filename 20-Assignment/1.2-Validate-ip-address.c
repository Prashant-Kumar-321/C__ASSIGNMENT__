#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int validate_Number(char *P) // function validating given string is of pure digits or not ;
{
    for (int i = 0; P[i] != '\0'; P++)
        if (!(isdigit(P[i])))
            return 0;

    return 1; // means all character are digits
}

int Validate_ip(char *p)
{
    int i, num, dots = 0;
    char *ptr; // To store string token

    if (p == NULL)
        return 0;

    ptr = strtok(p, "."); // String ==> Token // will return 1st string token before '.'

    if (ptr == NULL)
        return 0;

    while (ptr) // NULL ==> When string reached the end
    {
        if (!(validate_Number(ptr)))
            return 0;
        num = atoi(ptr);

        if (num >= 0 && num <= 255)
        {
            ptr = strtok(NULL, "."); // NULL ==> SAYS STRING TOKEN OF PREVIOUS STRING
            if (ptr != NULL)
                dots++;
        }
        else
            return 0;
    }

    if (dots == 3)
        return 1;
    else
        return 0;
}

int main()
{
    char ip[20] = "123.4.56.147" ; // ip address

    (Validate_ip(ip)) ? printf("\nValid ip address\n") : printf("\nInvalid ip Address \n");
    // Function call to determine ip address is valid or not

    return 0;
}