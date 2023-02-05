#include<stdio.h>
#include<conio.h>

unsigned short int Month_days(unsigned short int x)
{
   switch(x)
   {
    case 1: 
         printf("January \n");
         return 31;
        //  break;
    case 2:
        printf("Febuaray \n");
        return 28 ; 
        // break;
    case 3:
        printf("March \n");
        return 31;
        // break;
    case 4:
       printf("April \n");
       return 30;
    case 5:
       printf("May \n");
       return 31;
    //    break;
    case 6:
        printf("June \n");
        return 30 ; 
        // break;
    case 7:
        printf("July \n");
        return 31;
        // break;
    case 8:
       printf("August \n");
       return 31;
    //    break;
    case 9:
       printf("september \n");
       return 30;
    //    break;
    case 10:
       printf("October \n");
       return 31;
    //    break;
    case 11:
       printf("November \n");
       return 30;
    //    break;
     case 12:
       printf("December \n");
       return 31;
    //    break;
   }
}

int main()
{
    unsigned short int Month_No, days; // variable Declaration

    printf(" Enter Month No. (Like 1 for jan .....)  ::- ");
    scanf("%hu",&Month_No);

    if(Month_No >= 1 && Month_No <= 12)
    {
      days = Month_days(Month_No);
      printf("Total Days = %d\n",days);
    }
    else 
       printf("invalid Month (This Month doesn't Exist in this planet ) \n");



    getch();
    return 0;
}