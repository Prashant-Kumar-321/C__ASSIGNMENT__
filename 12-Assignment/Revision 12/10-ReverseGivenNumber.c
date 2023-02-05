//Write a recursive function to print reverse of a given number

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int reverseNumber(int N)
{
    static int RevNum;
    int tem;

    if(N<0)// for Negative number
    {
        N *= -1;
        if(N<10)
        {
            tem = RevNum;
            RevNum = 0;  // for next call of new number;
            return -(tem+N);
        }
        else
        {
            RevNum = (RevNum + (N%10))*10;
            reverseNumber(-(N/10));
        }
    }
    else
    {
        if(N<10) // Base condition
        {
            tem = RevNum;
            RevNum = 0;  // for next call of new number;
            return (tem+N);
        }
        else
        {
            RevNum = (RevNum + (N%10))*10;
            reverseNumber(N/10);
        }
    }

}

int main()
{
    int Num = 213;

    while(1)
    {
        printf("Enter a Number \n");
        scanf("%d", &Num);

        printf("Reverse Number is %d ", reverseNumber(Num));
        getch();
        system("cls");
    }


    getch();
    return 0;
}
