#include<stdio.h>
#include<conio.h>
#include<string.h>

short int Count_vowel(char *const P); 

int main()
{
    short int Voc; 
    char Hooby[5][20]; // To store five strings 
    printf("Enter Hobby of Five Students: \n"); 

    // Taking string input from user 
    for(int i=0; i<5; i++)
     gets(Hooby[i]); 
    
    // system("cls"); 
    // calculating Vowels count 
    for(int i=0; i<5; i++)
    {
        Voc = Count_vowel(Hooby[i]); 
        printf("Vowels = %hu in %s \n",Voc, Hooby[i]); 
    }

    getch(); 
    return 0; 
}

short int Count_vowel(char *const P)
{
    short int i, vowel = 0; 
    for(i=0; P[i]; i++)
    {
       switch(P[i]) // counting Vowel Number
       {
        case 'a': case 'A': case 'e': case 'E':
        case 'i': case 'I': case 'o': case 'O': 
        case 'u': case 'U': 
        vowel++; 
       }
    }
    return vowel; 
} 
