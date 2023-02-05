#include<stdio.h>
#include<conio.h>

void printfArary(int *a, int size)
{
  int i;
  for(i=0; i<size; i++)
    printf("%d  ",*(a+i));

  printf("\n");
}

// function declaration
void RotateArry(int a[], int len, int); // Rotate Array value

void swap(int *a, int *b) // swap value of to int variable
{
  int tem = *a;
  *a = *b;
  *b = tem ;
}

//Driver code
int main()
{
  int num[10], d ;// variable to store  numbers and position

  printf("\n Enter 10 Numbers : \n ") ;
  for(int i=0; i<10; i++)
     scanf("%d",(num+i));

  printf("\n By what position want to rotate the above Numbers\n");
  printf(" (+ve --> Right Rotation And -ve --> Left Rotation)\n\nPostition : ");
  scanf("%d",&d);

//  printfArary(num,10); // print aray ;

  RotateArry(num, 10, d); // call Rotating function give
                          // three arguments arry, len(aray),direction cum position ;

  // printing Numbers
  if(d>0) // Right rotation
  {
    printf("\nAfter Right Rotation by %d position numbers are \n",(d));
    for(d = 0; d<10; d++)
      printf("%3d ",num[d]);

    printf("\n");
  }
  else // Left Rotation
  {
    printf("\nAfter Left Rotation by %d position, Numbers are \n" -d);
     for(d = 0; d<10; d++)
      printf("%3d ",num[d]);

    printf("\n");
  }

  getch();
  return 0;
}

// functions definition
void RotateArry(int a[], int len, int pos  )
{
  int d = pos;

  if(d<0) // Making 'd'  positive
    d *= -1;

  for(int i=0; i<d; i++)
  {
    if(pos>0) // Right Rotation
    {
      for(int j = (len-1) ; j > 0 ; j--)
        swap((a+j), (a+j-1) ) ;               // Swap the value of a[j], a[j-1];
    }
    else  // Left Rotation by 1 postion
      for(int j = 0 ; j <(len - 1); j++)
         swap((a+j), (a+j+1));
  }
}
