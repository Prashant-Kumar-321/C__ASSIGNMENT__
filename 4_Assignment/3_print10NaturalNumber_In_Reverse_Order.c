#include<stdio.h>
#include<conio.h>

int main()
{
  int x = 10,Count = 0  ;
  while (x>0)
  {
    printf("%d ",x);
    x--;
  }

  printf("\n\n");

   for (x = 10 ; x > 0 ; x--)
   {
     printf("%d ",x);
   }


   // program to print n natural numbers in reverse order

   printf("\nEnter value of x \n");
   scanf("%d",&x);
   printf("\n\nReverse Counting \n\n");

   do
   {
     printf("%d ",x);
     x--;

    // Logic to print only 10 numbers in a row
     Count ++;
     if(Count == 10 )
     {
       printf("\n");
       Count -= 10 ; // count reset to zero
     }
   }
   while (x > 0) ;


  getch();
  return 0;
}
