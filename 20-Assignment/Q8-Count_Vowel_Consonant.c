#include<stdio.h>
#include<conio.h>
#include<string.h>

int* Count_Vo_Con(char*a) // function count Vowels and consonant in the string
{
     int i; // control loop
     static int vc[2] = {}; // {0,0}; // Store Vowels and consonant Count 

     for(i=0; a[i] != 0; i++)
     {
        if((a[i]>=97 && a[i]<=122) || (a[i]>=65 && a[i]<=90))     // a[i] is Alphabet Letter
        {
            switch(a[i])
            {
                case 'a': case 'A': case 'e': case 'E': 
                case 'i': case 'I': case 'o': case 'O': 
                case 'u': case 'U': 
                     vc[0]++; 
                     break;
                default: // a[i] is consonant
                    vc[1]++; 

            }
        }
     }

     return vc ; 
}


// Driver Code
 int main()
 {
    char str[20] = "Enthusiasm";
    int *p;  

    // Taking string input from user
    printf("Enter Your Favourate Dish : "); 
    gets(str); 

    printf("Your String is ' %s ' \n",str); 
    
    p =  Count_Vo_Con(str); // storing the returned pointer in the pointer int*

    printf("\nVowels   %5d \n", p[0]); 
    printf("Consonants   %d \n", p[1]); 

    getch(); 
    return 0; 
 }