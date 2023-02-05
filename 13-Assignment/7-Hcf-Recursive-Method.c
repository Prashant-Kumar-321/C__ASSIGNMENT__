//Write a recursive function to calculate HCF of two numbers

#include<stdio.h>
#include<conio.h>

int hcf(int a, int b)
{
  if(a==0)
    return b;
  else
  hcf(b%a, a);
}

// Driver code
int main()
{
  int a = 5, b= 10;
  printf("Compute Hcf of a,b\n");
  printf("Enter value of a,b: ");
  scanf("%d %d",&a,&b);

  if(!(a<b)) // 'a' must be smaller than 'b'
  {
    int tem = a;
    a = b;
    b = a;
    a = tem;
  }

  printf("HCF(%d,%d) = %d \n\a",a,b, hcf(a,b));

  return 0;
}
