#include<stdio.h>
#include<conio.h>

void swap_int(int* p, int* q)
{
    int tem  = *p; 
    *p = *q; 
    *q = tem ; 
}

int main()
{
    int x = 10, y = 5; 
    printf("Before Swapping \n\a"); 
    printf("x = %d, y = %d\n",x, y); 

    swap_int(&x, &y); // Function calling going to swap two int variable ; 

    printf("After Swapping \n\a"); 
    printf("x = %d , y = %d",x, y); 

    return 0; 
}