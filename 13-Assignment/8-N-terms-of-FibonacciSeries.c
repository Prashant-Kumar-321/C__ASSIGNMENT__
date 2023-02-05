//Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>
#include<conio.h>

unsigned int getfiboterm(int N)
{
    // Base condition
    if(N==1)
        return 1;
    else if(N==2)
        return 1;

    else
        return getfiboterm(N-1)+getfiboterm(N-2);
}

int main()
{
    int i, N;
    printf("Get N terms of fibonacci series \n");
    printf("Enter value of N: ");
    scanf("%d",&N);

    printf("FIRST N TERMS OF FIBONACCI SERIES **********\n\n");
    for(i=1; i<=N; i++)
        printf("%u ",getfiboterm(i));


    printf("\a");
    getch();
    return 0;
}
