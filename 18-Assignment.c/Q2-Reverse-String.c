#include<stdio.h>
#include<conio.h>
#include<string.h>


int Strlen(char *q)
{
  int len = 0;
  for(int i=0; q[i]; i++)
    len++;

  return len;
}

void StrRevrs(char *p)
{
  /*
  int len = Strlen(&p);
  int i, j;
  char tem;

  // Reversing the string
  // swap(p[i], p[j])
  for(i=0,j=len-1; i<=j; i++, j--)
  {
   tem = p[i];
   p[i] = p[j];
   p[j] = tem;
  }
  */

  // Second logic
  int len = strlen(p), indx = 0;
  char tem[len+1];

  // cpying p's char in tem in reverse order
  for(int i=len-1; i >= 0; i--)
    {
      tem[indx] = p[i];
      indx++;
    }

  tem[indx] = 0; // null character at last indx ;

  strcpy(p, tem);
}

int main()
{
  char String[20] = "ram";
  printf("Enter a string : ");
  gets(String);

  StrRevrs(String);

  // print Reverse String
  printf("Reverse String is \n");
  for(int i=0; String[i]; i++)
    printf("%c ",String[i]);

  getch();
  return 0;
}
