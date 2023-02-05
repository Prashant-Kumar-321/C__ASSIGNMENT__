#include<stdio.h>
#include<conio.h>
void Sort_array(int a[], int size) // function sort_array of 1D in Incresing order
{
  int tem ;
  for(int i=0; i<size-1; i++)
  {
    for(int j=i+1; j<size; j++)
    {
      if(a[i] > a[j])
      {
        tem = a[i];
        a[i] = a[j];
        a[j] = tem ;
      }
    }
  }
}

void showArray(int a[], int size)
{
  int i;
  printf("[");
  for(i=0; i<size; i++)
  {
    printf("%3d ",a[i]);
  }
  printf("]\n") ;
}

int main()
{
  int num[10],i; // variable declare to store 20 numbers

  // Taking input form user
  printf("Enter 10 Numbers : \n");
  for(i=0; i<10; i++)
    scanf("%d",&num[i]);

  Sort_array(num, 10);

  // Printing array;
  printf("\nNumbers in Incresing order::---\n");
  showArray(num, 10);

  getch();
  return 0;
}
