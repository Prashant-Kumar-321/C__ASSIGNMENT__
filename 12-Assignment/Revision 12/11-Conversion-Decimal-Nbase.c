#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//it will print Alphabet in >10 base system inplace of number >=10;
void printChar(int n)
{
    switch(n)
    {
    case 10:
        printf("A") ;
        break;
    case 11:
        printf("B") ;
        break;
    case 12:
        printf("C") ;
        break;
    case 13:
        printf("D") ;
        break;
    case 14:
        printf("E") ;
        break;
    case 15:
        printf("F") ;
        break;
    }
}

int ConvertHBase(int N, int B)
{
    if(N<B)
    {
      if(N>=10)
        printChar(N);// print Char instead of Number
      else
        printf("%d",N);
    }
    else
    {
        ConvertHBase(N/B, B); // recursive call
        if((N%B) >= 10)
          printChar(N%B); // print char instead of number
        else
          printf("%d",N%B);
    }
}

// convert decimal to higher base >10
int ConvertBase(int N, int B)
{
    if(N<B)
        printf("%d",N);
    else
    {
        ConvertBase(N/B, B);
        printf("%d",N%B);
    }
}

// Driver code
int main()
{
    int DNum, Base;

    printf("\n\t\t\tConvert Decimal Number to Base(N) \n\n");
    printf("Decimal Number: ");
    scanf("%d",&DNum);

    printf("Base: ");
    scanf("%d", &Base);

    printf("Conversion : ");

    switch(Base)
    {
    case 2 ... 10:
        ConvertBase(abs(DNum), abs(Base));// +ve Num and base
        break;
    case 11 ... 16:
        ConvertHBase(abs(DNum), abs(Base));// +ve num and base
        break;
    default:
        printf("Invalid Base \n");
    }

    printf("\a");
    getch();
    return 0;
}
