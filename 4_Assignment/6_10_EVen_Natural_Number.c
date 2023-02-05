#include<stdio.h>
#include<conio.h>

int main()
{
  int n = 1 ;
  printf("First 10 even Natural number \n\n");
  do
  {
    printf("%d \n",(2*n)); // Even numbers are of (2n) type where n = natural number ;
    n++ ;
  }
  while(n <= 10);

 // program to print first n even natural number

 int i = 1, counT = 0, N ;

 printf("\nEnter value of N \n");
 scanf("%d",&N);

 printf("First %d even natural number \n",N);

 while (i <= N)
 {
   printf("%d ",(2*i)); // expression of printing even natural number
   i++;
   counT++ ;

   // instruction to break line after every 10 number printed in a line
   if(counT == 10 )
   {
     printf("\n\n");
     counT -= 10 ;// reset count to zero

   }
 }

  getch();
  return 0;
}


