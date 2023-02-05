#include<stdio.h>
#include<conio.h>

 float Find_Max(float *a, int sz)
{
  float max = *a ;
  for(int i=1; i<sz; i++)
  {
    if(max<*(a+i))
      max = *(a+i);
  }

  return max;
}


int main()
{
  unsigned short int  Asize;
  printf("How many Numbers you want to Enter : ");
  scanf("%hu",&Asize);

  float a[Asize], max;

  printf("\nEnter %hu Numbers : ",Asize);

  // taking Array values from users
  for(int i =0; i<Asize; i++)
    scanf("%f", &a[i]);

   max = Find_Max(a, Asize);

   printf("\nMaximum Number is %g\n",max);
   printf("\t\t  ---\n");

  getch();
  return 0;
}
