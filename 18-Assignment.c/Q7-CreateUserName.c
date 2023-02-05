#include<stdio.h>
#include<conio.h>

int isAlphaNumeric(char *p)
{
    int Alpha = 0, Num = 0; //

    for(int i=0; p[i]; i++)
    {
        if((p[i]>='a' && p[i] <='z') || (p[i]>='A' && p[i]<='Z'))
            Alpha++;

        else if(p[i]>=48 && p[i]<=57)
            Num++;

        // break the loop if we
        if((Alpha >=1) && (Num >= 1))
            return 1;
    }
    return 0;
}

// Driver Code
int main()
{
    char user_Name[20], x;
    printf("\nCreate User Name(AlaphaNumeri): ");
    gets(user_Name);

    while(!isAlphaNumeric(user_Name))
    {
        system("cls");
        printf("\n\a Invalid user Name");
        printf("\n user Name should be *Alphanumeric");
        printf("\n Create User Name : ");
        gets(user_Name);
    }
    system("cls");
    printf("\nYou have Successfully created your User Name \n");
    printf("\nYour User Name is : %s",user_Name);

    getch();
    return 0;
}


