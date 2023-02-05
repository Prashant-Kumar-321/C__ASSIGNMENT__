#include<stdio.h>
#include<conio.h>

void find_2nd_maxMin(int a[], int *max2, int *min2, int sz)
{
  int i;
  int max1, min1;

  // comparing a[0] and a[1] of array to determine
  if(a[0] > a[1])
    {
    // for max1 and max2
     max1 = a[0];
    *max2 = a[1];
    //for min1 min2
    min1 = a[1];
    *min2 = a[0];
    }
  else
  {
    // for max1 and max2
     max1 = a[1];
    *max2 = a[0];

    // for min1 min2
    min1 = a[0];
    *min2 = a[1];
  }


 for(i=1; i<sz; i++)
 {
   if(max1 < a[i])
   {
     *max2 = max1;
      max1 = a[i];
   }
   else if(*max2 < a[i])
    *max2 = a[i];

   if(min1 > a[i])
   {
     *min2 = min1;
     min1 = a[i];
   }
   else if(*min2 > a[i])
    *min2 = a[i];
 }

}


int main()
{
  int n = 0;
  printf("\n How many Numbers You Want to Enter : ");
  scanf("%d",&n);

  int a[n], min2 = 2, max2;

  printf("\n Enter %d Numbers : ",n);
  // taking input from user
  for(int i = 0 ; i<n; i++)
    scanf("%d",&a[i]);

//  Find_max_min2(a, &max2, &min2, n );
  find_2nd_maxMin(a, &max2, &min2, n);

  printf("Second Largest Number = %d\nSecond Smallest Numbers = %d",max2, min2);

  return 0;
}
