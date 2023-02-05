// Print  Left Right Angled Triangle star pattern
#include<stdio.h>
#include<conio.h>

int main()
{
  int r,c,n;
  printf("\t\t\t\t\tTriangle pattern \n\nEnter a value of n = ");
  scanf("%d",&n);

  for (r=0 ; r<=n ; r++) //iteration
  {
    printf("\t"); // it will give space of one tab to each line
    for(c=0 ; c <= r ; c++)
    {
      printf("* ");
    }
    printf("\n");

  }

  getch();
  return 0;
}
