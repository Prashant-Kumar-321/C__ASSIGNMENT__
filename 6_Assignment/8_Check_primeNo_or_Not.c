#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 2, Num , Remainder;

  printf("\t\t\t\tChecking Prime Number or Composite Number \n");
  printf("Enter a number \n");
  scanf("%d",&Num);

  while(i < Num)
  {
    Remainder = Num % i ;
    i++ ;
    if(Remainder == 0 )
    {
      i = Num+1 ; // to terminate loop
      printf("%d is Composite Number \n\n",Num);
    }
    if(i == Num) // i == Num means no one is completly dividing  the the Num ;
    {
      printf("%d is Prime Number \n\n",Num);
    }
  }
  // Num == 2 is special case of prime number that's why i write it uniquely ;
  if(Num == 2 )
  {
    printf("%d is prime number\n",Num);
  }

  getch();
  return 0;
}
