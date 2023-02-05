#include<stdio.h>
#include<conio.h>

 unsigned int find_max(unsigned int a[], int size){
   int i;
   unsigned int  max = a[0]; // Assume

   for(i=1; i<size; i++)
   {
    if(max < a[i])
      max = a[i];
   }

   return max;
 }

int main()
{
  int n;
  printf("Enter total Numbers of Students in your Class : ");
  scanf("%d",&n);

  unsigned int pocMoney[n], maxpocket;

  printf("Enter their Pocket Money(per Day) :---\n");

  // taking pocket money of students from user
  for(int i=0; i<n; i++)
  {
    scanf("%u",&pocMoney[i]);
  }

  maxpocket = find_max(pocMoney, n) ;

  printf("Maximum pocket money is = %u\n",maxpocket);

  getch();
  return 0;
}
