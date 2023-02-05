// A developer should know
// What is max limit of elements that can be stored inside the num array[];

#include<stdio.h>
#include<conio.h>

int find_max(int *a, int size) // find max in array
{
  int i, max = *a;

  for(i=1; i<size; i++)
  {
    if(max < *(a+i))
      max = *(a+i);
  }
  printf("Done1\n\a");
  return max ;
}

int Distict_ele(int *num, int*dist, int*fre,  int size)
{

  int max = find_max(num , size); // function call to find the max num in array;

  int i, hash[max+1], N = 0;

  for(i=0; i<max+1; i++)
    hash[i] = 0;

  //To find the frequency of numbers in array;
  for(i=0; i<size; i++)
  {
    hash[*(num+i)]++;
  }

  // Storing distnict Element of num in dist[] and their freq in freq[]
  for(i=0; i <= max; i++)
  {
    if(hash[i] > 0)
    {
      *(dist+N) = i;
      *(fre+N) = hash[i];
       N++;
    }
  }

  *(dist+N) = max+1;
  *(fre+N) = max+1;

  return (max+1) ;
}

int main()
{
  int num [10], distNum[100], Freq[100], flag ;

  printf("Enter 10 Elements \n");

  for(int i=0; i<10; i++) // Taking numbers from user
    scanf("%d", (num+i)) ;


  flag = Distict_ele(num, distNum, Freq, 10);

  // Printing Distict Numbers in array and their Frequency
  for(int i=0; Freq[i] != flag; i++)
    printf("%d -----------> %d\n",distNum[i], Freq[i]);

  getch();
  return 0;
}
