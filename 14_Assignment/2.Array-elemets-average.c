#include<stdio.h>
#include<conio.h>
#include<windows.h>


float Avg(float a[], int size)
{
  float Sum = 0;
  int i;
  for(i=0; i<size; i++)
  {
    Sum += a[i];
  }

  return (Sum/size)  ;
}


int main()
{
  float Num[10], avg;
  int i;
  char choice;

  printf("Enter Ten Elements \n");

  // user input
  for(i=0; i<10; i++)
    scanf("%f", &Num[i]);

  avg = Avg(Num , 10);

  printf("Average = %g \n",avg);

  getch();
  system("cls");
  return 0;
}
