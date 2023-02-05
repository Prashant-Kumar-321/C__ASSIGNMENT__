#include<stdio.h>

void swap_int(int*p, int*q)
{
    /* Using Third Varible 

    int tem = *p; 
    *p = *q; 
    *q = tem; 
    */
    
    // Without using Third Varible 
    *p = *p + *q; 
    *q = *p - *q; 
    *p = *p - *q; 
   
}

int main()
{
    int x = 10, y = 5; 

    printf("Before Swapping \n");
    printf("x = %d, y = %d",x, y); 

    swap_int(&x, &y); 

    printf("\nAfter Swapping \n"); 
    printf("x = %d, y = %d",x,y); 

    return  0; 
}