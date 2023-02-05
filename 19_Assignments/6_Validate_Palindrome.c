#include<stdio.h>
#include<conio.h>
#include<string.h>
void CvrtUppercase(char *s)
{
    int i;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i] -= 32; // convert lower into upper case
    }
}

int Validate_Palindrome(char *p) // Validating string is palindrome or not
{
    int i, j = (strlen(p) - 1);
    char temp[20];
    strcpy(temp, p);

    CvrtUppercase(temp); // convert all letter into upper Case of temp string
//     printf("%s ",temp);

    for(i=0,j; i<=j; i++, j--) // compare each pair of letters which are in same case now
    {
        if(temp[i] != temp[j])
            return 0;
    }

    return 1;  // Given string is palindrome

}

// Driver Code
int main()
{
    char name[][20] =  // List of string which i have to check whether they are palindrome or not
    {
        "Nishant",
        "Jhahj",
        "Nitin",
        "Nayan",
        "Ravi"
    };

    printf("List of Palindromes : \n\n");
    for(int i=0; i<5; i++)
     if(Validate_Palindrome(name[i]))
       printf("%s\n", name[i]);


    return 0;
}
