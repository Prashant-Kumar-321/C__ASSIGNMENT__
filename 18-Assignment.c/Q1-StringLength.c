#include<stdio.h>
#include<conio.h>
#include<string.h>

int Strlen(char *p)
{
  int len = 0;
  for(int i=0; p[i]; i++) // i[p], *(p+i)
    len++;

  return len;
}

int main()
{
  char Name[20];
  printf("Enter your name : ");

  fgets(Name, 20, stdin);
  Name[strlen(Name) - 1] = 0 ;

  int len = Strlen(Name); // Strlen("Name") it will calculate len of "Name" string
  printf("Number of Character is %u",len);

  getch();
  return 0;
}
