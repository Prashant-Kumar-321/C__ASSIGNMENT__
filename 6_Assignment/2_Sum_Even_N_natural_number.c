
// Program to print sum of first N even natural number

#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0,n  ,sum = 0;

  printf("\t\t\tsum of first N even natural number \n\t\t\t**********************************\n");
  printf("Enter value of N = ");
  scanf("%d",&n);

  while (i < n )
  {
    i++;
//    printf("%d + ",(2*i));
   sum += (2*i); // expression to add even number to sum
  }

  printf("\n\nsum = %d \n",sum);

  // instruction to calculate sum of first n even natural number using formula  ;
//  printf("\n\n sum = %d \n",(n*(n+1)));
  getch();
  return 0;
}
