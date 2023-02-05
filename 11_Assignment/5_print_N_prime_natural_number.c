#include<stdio.h>
#include<conio.h>

void print_Prime_Number(int n)
{
  int priNum = 1, count = 0, i, flag =0;
  while(count < n)
  {
    priNum++;
    flag = 0;

    for(i=2; i<=(priNum/2); i++) // checking primNum is prime or not
    {
      if(priNum%i == 0)
      {
        flag = 1;
        break;
      }
    }

    if(flag == 0) // priNum is prime
    {
      printf("%d ",priNum);
      count++;
    }

  }
}

// driver function
int main()
{
  int n1;
  printf("Enter value of n :\n");
  scanf("%d",&n1);

  printf("First %d prime numbers \n",n1);

  print_Prime_Number(n1);

  getch();
  return 0;
}
