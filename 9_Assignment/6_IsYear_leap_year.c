#include<stdio.h>
#include<conio.h>

unsigned short int  Is_leap_year(unsigned int Year);
void print(int i)
{

  for(i; i<12; i++)
  {
    printf("I love my India!\n");
  }
}

int main()
{
    unsigned short int Year,flag;
    char exp;
//    int exp;

    printf("Check Year is leap year or not \n\n");
    while(1)
    {
        printf("\nEnter Year: ");
        scanf("%hu",&Year);


        Is_leap_year(Year);

        // decision making line
//        if(flag == 1)
//            printf("Leap year \n");
//        else
//            printf("Not leap year \n");

        // exit from the program ;
        printf("To exit the program Enter 'E' or 'e' or to check more year then press any key : ");
//        fflush(stdin);
//        scanf("%c",&exp);
//        fflush(stdin);
//          scanf("%d",&exp);
          exp = getche(); // if we use non-formating input function then no need to use fflush funtion

        if(exp == 69 || exp == 101 ) // Ascii code of E and e
            return 0;




    }
    return 0;
}

unsigned short int  Is_leap_year(unsigned int Year)
{
    if(Year % 100 == 0)
    {
        // century year
        if(Year % 400 == 00)
                printf("Leap Year \n");
//            return 1;
        else
                printf("Not Leap Year \n");
//            return 0;
    }
    else
    {
        // Not centuary year
        if(Year % 4 == 0)
               printf("Leap Year\n");
//            return 1;
        else
                printf("Not Leap Year \n");
//            return 0;
    }
}
