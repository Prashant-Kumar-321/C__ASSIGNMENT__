#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 10, y = 5, min, max;

    printf("Enter Two Numbers : \n");
    scanf("%d %d",&x, &y);

    int *p = &x;
    int *q = NULL;

    if((p == NULL) || (q == NULL)) // Pointer handling
       return 0;

     max = (*p>*q) ? *p : *q;
     min = (*p>*q) ? *q : *p;

    printf("x = %d, y = %d\n",x,y);
    printf("Maximum number = %d \n", max);
    printf("Minimum number = %d \n", min);

    getch();
    return 0;
}
