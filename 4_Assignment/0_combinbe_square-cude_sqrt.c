#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 1 ;

  while (i < 11)
  {
    printf(" %d \n",(i*i)); // squares of first 10 natural numbers
    i++;
    if(i == 11 )
    {
      printf("\nCubes \n\n");
      i -= 10 ;// i = 1
      while ( i < 11 )
      {
        printf(" %d \n",(i*i*i));
        i++;
        if(i == 11 )
        {
          printf("\nSquare roots \n\n");
          i -= 10 ;// i = 1 resetting
          while (i < 11 )
          {
             printf(" %0.3f \n",sqrt(i));
             i++;
          }

        }
      }
    }
  }

  getch();
  return 0;
}
