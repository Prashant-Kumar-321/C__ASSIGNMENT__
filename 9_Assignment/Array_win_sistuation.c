#include<stdio.h>
#include<conio.h>

int main()
{
  int array[4][4];
  int i,j, count = 0 ;
/*
// Inserting 15 element range 1-15 in array[] ;
  for(i=0; i<4; i++)
  {
    for(j=0; j<4; j++)
    {
      count++;
      array[i][j] = count;
      if(i==3 && j==2)
        j++;
    }
  }

  // Print array[]
    for(i=0; i<4; i++)
  {
    for(j=0; j<4; j++)
    {
       printf("%2d\t", array[i][j]);
    }
    printf("\n\n");
  }
*/
  time_t t;
  srand(time(&t));

  for(i=0; i<5; i++)
    printf("%d  ",rand() % 5);

  return 0;
}
