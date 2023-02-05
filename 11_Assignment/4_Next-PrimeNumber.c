#include<stdio.h>
#include<conio.h>

int Next_prime_number(int PrimeNum)
{
  int flag = 0;


  while(1)
  {
    PrimeNum++;
    flag = 0;

    for(int i = 2; i <= (PrimeNum/2); i++ ) // checking primeNum is prime or not
    {
      if(PrimeNum % i == 0)
      {
        flag = 1;
        break;
      }
    }

    // decision if-else
    if(flag == 0)
      return PrimeNum;
  }


}

// Driver Function ;
int main()
{
  int num, nextprime;

  printf("Enter a number : ");
  scanf("%d",&num);

  nextprime = Next_prime_number(num);

  printf("Next prime number = %d",nextprime);

  getch();
  return 0;
}


