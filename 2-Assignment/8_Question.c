
#include <stdio.h>
#include <conio.h>

int main()
{
    // Program to find size of int, float, char, and double varaible
    int Int, Char, Float, Double;
    int long_int, Short_int, long_long_int, long_double;

    Int = sizeof(int);
    Char = sizeof(char);
    Float = sizeof(float);
    Double = sizeof(double);

    long_int = sizeof(long int);
    Short_int = sizeof(short int);
    long_long_int = sizeof(long long int);
    long_double = sizeof(long double);

    // line of code to print all returned value by sizeof() operator ;
    printf("Int size =  %d Bytes\n", Int);
    printf("long int = %d Bytes\n", long_int);
    printf("short size = %d Bytes\n", Short_int);
    printf("long long Int size = %d Bytes\n\n", long_long_int);

    printf("char size = %d Byte\n\n", Char);

    printf("float size = %d Bytes\n", Float);
    printf("double size = %d Bytes\n", Double);
    printf("long double size = %d Bytes\n\a", long_double);

    getch();
    return 0;
}
