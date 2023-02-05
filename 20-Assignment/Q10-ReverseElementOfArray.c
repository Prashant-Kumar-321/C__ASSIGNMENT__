#include <stdio.h>
#include <conio.h>

void ReverserArry(float*a, int sz)
{
    int i=0, j=sz-1; 

    for(i,j; i<=j; i++, j--)
    {
        a[i] += a[j]; 
        a[j] = a[i] - a[j]; 
        a[i] -= a[j]; 
    }
}

int main()
{
    float Num[10];
    int i;

    // taking input from user in array
    printf("\nEnter 10 Elements : \n");
    for(i=0; i<10; i++)
        scanf("%f",Num+i);

    ReverserArry(Num,10);

    printf("\nNumbers in Reverse Order : > >> >>>\n");  
    for(i=0; i<10; i++)
      printf("%g, ",Num[i]); 


    getch(); 
    return 0;
}