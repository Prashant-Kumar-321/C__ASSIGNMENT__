#include<stdio.h>
#include<conio.h>

void oddevensum(int *, int*,int*, int );

int main()
{
  int NUM[10] = {} , sum_odd = 0, sum_Even = 0;

  printf("\t\t\tSum of Odd Numbers And Even Numbers : \n");
  printf("Enter 10 Numbers : \n");
  // taking input from user
  for(int i = 0; i < 10; i++)
    scanf("%d", (NUM+i)); // In terms of pointer *(NUM+i)

  oddevensum(NUM, &sum_Even, &sum_odd, 10);

  printf("Sum of Odd Numbes = %d \nSum of Even Numbers = %d\n", sum_odd, sum_Even);

  getch();


  return 0;
}

void oddevensum(int *A, int *e, int *o, int size)
{
  int i;
  for(i=0; i<size;  i++)
  {
    if(*(A+i) & 1) // Num & 1 (if(0)--> Even Number or if (1)---> Odd Numbes )
      *o += *(A+i) ; // 1
    else
      *e += *(A+i) ; // 0
  }
}
