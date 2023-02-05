//Write a recursive function to calculate HCF of two numbers

#include<stdio.h>
#include<conio.h>

// computing HCF of two given number
int Hcf(int a, int b)
{
  int min = (a<b) ? a: b;

  for(int i = min; i>0; i--)
    if(a%i==0 && b%i==0)
      return i;

  if(a!=0)
    return a;
  else
    return b;
}

//Driver Code
int main()
{
  int a = 8, b=4;
  printf("Compute Hcf of a and b \n");
  printf("Enter a and b : ");
  scanf("%d %d",&a,&b);

  printf("HCF(%d,%d) = %d\n",a,b,Hcf(a,b));

  printf("\n\a");
  getch();
  return 0;
}
