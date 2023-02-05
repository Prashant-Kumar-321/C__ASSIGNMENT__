#include<stdio.h>
#include<conio.h>

 void swap (int *p, int *q)
 {
   int tem ;
   tem = *p ;
   *p = *q ;
   *q = tem ;
 }

 void sort_decr (int *a, int sz)
 {
  int i, j; // to maintaine loop
  for(i=0; i<sz-1 ; i++)
  {
    for(j=i+1; j<sz; j++)
    {
      if(*(a+i) < *(a+j))
        swap((a+i), (a+j));
    }
  }
 }

 void showArray(int a[], int sz)
 {
   for(int i=0; i<sz; i++)
   {
     printf("%3d ",a[i]);
   }
 }


 int main()
 {
   int a[10];
   printf("Enter marks of ten studens : ") ;

   // taking input form user
   for(int i=0; i<10; i++)
    scanf("%d",&a[i]);

   sort_decr(a,10);

   printf("\nMarks of Students in Decresing order \n") ;
   showArray(a,10);

   printf("\nDone 1\n");
   getch();
   return 0;
 }

