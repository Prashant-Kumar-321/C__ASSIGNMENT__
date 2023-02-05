#include<stdio.h>
#include<conio.h>
#include<windows.h>

void Sort(int *a, int sz)
{
    int i,j; // control for loop
    int tem; 

    for(i=0; i<sz-1; i++)
      for(j=i+1; j<sz; j++)
      {
        if(a[i] > a[j]) // swap needs to be done 
        {
            // swapping code using third variable 
            tem = a[i]; 
            a[i] = a[j]; 
            a[j] = tem; 
        }
      }
}

int main()
{
    int num[] = {1,4,2,8,9,6,5,10,3,7}; 

    // printing Elements of the array Before Sorting 
    printf("\nBefore Sorting :- \n"); 

    for(int i = 0; i<10; i++)
       printf("%2d ",num[i]); 
    
    // Sorting function invoke
    Sort(num,10);

    // system("cls");  
    // printing Elements of the array After Sorting 
    printf("\n\nAfter Sorting :- \n"); 
    for(int i=0; i<10; i++)
       printf("%2d ",num[i]); 
   
    return 0; 
}