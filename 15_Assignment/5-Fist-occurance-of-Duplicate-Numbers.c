#include<stdio.h>
#include<conio.h>
int fistDuplicate(int [], int );

int main()
{
  int num[10] = {11,19,5,1,2,5,2,1,9,11}, FDuplicate = -1;
  // taking input from user
  printf("Enter 10 Elements \n");

  for(int i=0; i<10; i++)
      scanf("%d",&num[i]);


  FDuplicate = fistDuplicate(num, 10);

  if(FDuplicate == -1)
    printf("There is no Duplicate numbers \n");
  else
    printf("First Duplicate Number = %d", FDuplicate);

  getch();
  return 0;
}

int fistDuplicate(int a[], int sz)
{
  int hash[100] = {0}, dNo= 0, n = 0; // Initialize hash array with 0;

  for(int i = 0; i<sz; i++) // Finding the Frequency of each element
      hash[a[i]]++;

  for(int i=0; i<100; i++) // Finding the Total Number of duplicate numbers
  {
    if(hash[i] == 2)
       dNo++;
  }

  int dAray[dNo]; // Declaring array of total duplicates number size;

  for(int i=0; i<100; i++) // Inserting Duplicate numbers in dAray [] ;
  {
    if(hash[i] == 2)
    {
      dAray[n] = i;
      n++;
    }
  }

  for(int i = 0 ; i<sz; i++) // Comparing each elements from 0 index
  {
    for(int j=0; j<n ; j++)
    {
      if(a[i] == dAray[j])
         return a[i];
    }
  }

  return -1;
}
