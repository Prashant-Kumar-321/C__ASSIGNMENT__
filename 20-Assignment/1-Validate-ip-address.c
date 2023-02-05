#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

int Validate_ip(char *ip)
{
    int num, i, dots = 0;
    char *Stoken; // Declare to store/Point the String token

    if (ip == NULL) // just to check ip pointing memory address exist  or not 
        return 0;

    Stoken = strtok(ip, "."); // String ==> token // This will return first string before '.';

     if(Stoken == NULL) 
        {
            printf("Null\n"); 
            return 0;
        }

    for (i = 0; Stoken[i] != '\0'; i++) // To make sure all the char. of string are Didits
    {
        if (!isdigit(Stoken[i]))
            return 0;
    }

    num = atoi(Stoken); // Convert digit's string into integer;

    // Checking Range of Number
    if (!(num >= 0 && num <= 255))
        return 0;

    Stoken = strtok(NULL, ".");

    while (Stoken != NULL)
    {
        for (i = 0; Stoken[i] != '\0'; i++)
            if (!isdigit(Stoken[i]))
                return 0;

        num = atoi(Stoken);

        if (!(num >= 0 && num <= 255))
            return 0;
        dots++;

        Stoken = strtok(NULL, ".");
    }

    if (dots != 3)
        return 0;
    else
        return 1;
}

int main()
{
    char ip[4][20] = {
        "192.168.4.1",
        "172.16.253.1",
        "192.6g0.100.1",
        "125.512..abc" };
    // char ip[20] = "4.98.4.1.65" ;

    for (int i = 0; i < 4; i++)
    {
        (Validate_ip(ip[i])) ? printf("\nValid ip Address\n") : printf("\nInvalid ip Address \n");
    }

    return 0;
}