#include<stdio.h>
#include<conio.h>

int main()
{
  int num;
  printf("Enter a number \n");
  scanf("%d",&num);

  switch(num & 1)
  {
  case 1: // num is alredy odd
        printf("\nNearest upper odd is %d ",(num + 2));
        break;

  case 0: // num is even number
       printf("\nNearest upper odd is %d",(num + 1));
       break;
  }

  return 0;
}
