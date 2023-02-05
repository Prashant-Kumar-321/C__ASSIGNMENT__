#include<stdio.h>
#include<conio.h>

int main()
{
    float num[10] , sum = 0;  
    int i; // to maintaine loop 

   printf("Enter 10 Elements \n"); 

   for(i=0; i<10; i++)
    scanf("%f",&num[i]); 
   
   // Adding all elements of array 
   for(i=0; i<10; i++)
    sum += num[i]; 


    printf("Sum (all Numbers)= %g\n",sum ) ; 


    getch(); 
    return 0; 
}