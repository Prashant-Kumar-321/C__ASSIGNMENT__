#include<stdio.h>
#include<conio.h>

void userinput(int *a, int size)
{
  for(int i= 0; i<size; i++)
    scanf("%d",(a+i) );
}

void copyarry(int a[], int b[], int size)
{
  int i;
  for(i=0; i<size; i++)
    b[i] = a[i] ;
}

void showarray(int a[], int size)
{
   for(int i=0; i<size; i++)
    printf("%3d ",a[i]);

   printf("\n");
}

int main()
{
  int n;
  printf("Enter total Numbers you want to enter(n) : ");
  scanf("%d",&n);


  int a[n], b[n];
  printf("Ente %d Numbers : \n");
  userinput(a,n); // fucntion call take input from user

  copyarry(a,b,n); // function call copy elements of one aray to another array

  showarray(a, n)  ; // function print 1-D array in linear form

  printf("Another Array \n") ;
  showarray(b, n)  ; // function print 1-D array in linear form


  return 0;
}
