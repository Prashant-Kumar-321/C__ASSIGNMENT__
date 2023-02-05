#include<stdio.h>
#include<string.h>
#include<conio.h>

void ReverseStr(char *a)
{ 
    int i=0, j = strlen(a)-1; 
    char tem; 

    for(i; i<=j; i++,j--)  
    {
     /*
        a[i] += a[j];
        a[j] = a[i]-a[j];  
        a[i] -= a[j];
     */
       
        tem = a[i]; 
        a[i] = a[j]; 
        a[j] = tem; 
    }
    
}

int main ()
{
    char Fruit[10]; 

    strcpy(Fruit, "Abcdef"); 

    // // taking input form user
    printf("Enter a Fruit name : "); 
    gets(Fruit); 

    ReverseStr(Fruit); 

    printf("Reverse Word : %s",Fruit); 

    
    return 0; 
}