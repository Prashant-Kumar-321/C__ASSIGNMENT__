/*
if(var == 1)
   printf("Good");
else if(var == 2)
   printf("Better\n");
else if(var == 3)
   printf("Best \n");
else 
  printf("Invalid \n");
*/

#include<stdio.h>
#include<conio.h>

int main()
{
   unsigned short int var;
   printf("Enter a value in between 1 to 3 (including end point)");
   scanf("%hu",&var);

   // switch case statement
   switch(var)
   {
    case 1:
         printf("Good \n");
         break;
    case 2:
          printf("Better \n");
          break;
    case 3:
         printf("Best \n");
         break;
    default :
         printf("Invalid \n");
   }

    return 0;
}