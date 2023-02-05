#include <stdio.h>
#include <conio.h>

int ArrSum(int*a, int sz)
{
    int i, sum = 0;
    
    for(i=0; i<sz; i++) // Adding all elements of the Array
        sum += a[i]; 

    return sum;    
}

 /* Driver Code */
int main()
{
    int num[10] = {3, 2, 8, 11, 10, -2, -4, 3, 21, 4};
    int sum = 0,i; 

     // TAking input from user
     printf("Enter 10 Numbers : \n");
     for(i=0; i<10; i++)
        scanf("%d",num+i);

   sum = ArrSum(num,10); 

   printf("Sum of all numbers : %d",sum); 

    getch(); 
    return 0;
}