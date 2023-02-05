#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h> // abs();

int FindMinDist(char (*p)[10], char *w1, char *w2 )
{
  int d1= -1, d2 = -1, ans = 999, flag = 0; // Assumming distance is infinite initially
  int flw1 = 0, flw2 = 0;

  for(int i=0; i<5; i++)
  {
    if(strcmp(p[i], w1) == 0)
      {
        d1 = i;
        flw1 = 1;
      }
    else if(strcmp(p[i], w2) == 0)
     {
        d2 = i;
        flw2 = 1;
     }
    if(d1 != -1 && d2 != -1)
      ans = (ans < abs(d1-d2)) ? ans : abs(d1-d2);
  }

  if ((flw1 != 1) || (flw2 != 1)) // if the words doesn't present in the list of string
  {
    printf("Min Distance not possible \n");
    return 0;
  }

  return ans-1;
}

int main()
{
  char word1[] = "quick", word2[] = "the";
  char str[5][10] =
  {
    "the",
    "Salad",
    "quick",
    "fox",
    "quick"
  } ;

  printf("Min Distane = %d",FindMinDist(str, word1, word2));

  getch();
  return 0;
}
