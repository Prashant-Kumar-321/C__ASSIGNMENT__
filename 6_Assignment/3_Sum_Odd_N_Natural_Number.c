#include<stdio.h>
#include<conio.h>

int main()

{
  int i = 0 ,n,sum = 0 ;
  printf("\t\t\t\tsum of first n odd natural number \n\t\t\t\t*********************************\n");
  printf("\n\nEnter value of n = ") ;
  scanf("%d",&n);

  while (i < n)
  {
//    printf("%d + ",(2*i+1));
    sum += (2*i + 1 ); // assigning sum to odd number ;
    i++;

  }
//  printf(" = %d",sum);
  printf("\n\nSum of first %d odd natural number is %d\n",n,sum);

  // using formula
  printf("\nsum = %d",(n*n));

  getch();
  return 0;
}
