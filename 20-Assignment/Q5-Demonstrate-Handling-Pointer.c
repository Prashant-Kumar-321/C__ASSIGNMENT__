#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 10; 
    // int*const p = &x; 
    int*const p = NULL; //line of code after 11 will not be executed by compiler 

    // handling pointer 
    if(p == NULL)
    {
      printf("P is null pointer\n"); 
     return 0; 
    }
   

    printf("x = %d\n",p[0]); // ("x = %d",*p);   nb
  
    getch(); 
    return 0; 
}