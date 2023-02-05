#include<stdio.h>
#include<conio.h>

float Find_min(float a[], int n) // functio definition of find_min function
{
  float min = a[0];

  for(int i=1; i<n ; i++)
  {
    if(min>a[i])
      min = a[i];

  }

  return min;
}


int main()
{
  int n ;
  printf("\nHow many Numbers You want to Enter : ");
  scanf("%d",&n);

  float a[n], min ;
  printf("Enter %d numbers : ", n);

  // taking  input from user
  for(int i=0; i<n ; i++)
    scanf("%f",a+i);

  min = Find_min(a, n);

  printf("Minmum Number in array = %g",min) ;

  getch();
  return 0;
}
