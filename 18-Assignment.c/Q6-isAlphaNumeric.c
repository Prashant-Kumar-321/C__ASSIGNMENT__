#include<stdio.h>
#include<conio.h>

 
int isAlphaNumeric(char *p)
{
    int lett = 0, Num = 0,i;

    for(i=0; p[i] != '\0'; i++)
    {
        if((p[i]>='a' && p[i]<='z') || (p[i]>='A' && p[i] <= 'Z'))
            lett++;

        else if((p[i] >='0' && p[i] <= '9')) 
           Num++; 
     
    }
    if(lett>=1 && Num >= 1)
        return 1; 
    else 
       return 0; 
       
}

int main()
{

    char username[20] = "Prashant_kumar_123"; 
    printf("Enter UserName : "); 
    gets(username); 

    
    (isAlphaNumeric(username)) ? printf("\n\"%s\" is a AlphaNumeric String\n",username) :
      printf("\n\"%s\" is not a AlphaNumeric String \n",username );  
    
    getch(); 
    return 0; 
}