#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void strSwap(char *p, char *q) // Interchange two strings
{
  char tem[20];
  strcpy(tem, p);
  strcpy(p, q);
  strcpy(q, tem);
}

// function Printing the strings of 2D array;
void print(char (*city)[15], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d. %s \n", (i + 1), city[i]);
}
void Change_fistChar_Upper(char *i, char *j, int *fi, int *fj)
{
  if((*i >= 97 && *i <= 122) && (*j>=97 && *j <= 122));
   
  else if(*i>=97 && *i<122)
    *i -= 32; // convert into uppercase 

  else if(*j>=97 && *j<=122)
     

}

// String Sortting function
void StringSort(char (*c)[15], int n)
{
  int i, j, flagi = 0, flagj = 0;
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + i; j < n; j++)
    {
      Change_fistChar_Upper(&c[i][0], &c[j][0], &flagi, &flagj); // Converting in uppercase of first character of each string
      // flages value will tell whether convertion took place or not

      if (strcmp(c[i], c[j]) > 0) // needs to be swap the string
         strSwap(c[i], c[j]);

      // Regaining the String
      if (flagi == 1 && flagj == 1) // conversation took place in both string 
      {
        c[i][0] += 32;
        c[j][0] += 32;
      }
      else if (flag1 == 1) // Converstion took place only on ith string
        c[i][0] += 32;
      else if (flagj == 1) // Conversation  tokk place only on jth string
        c[j][0] += 32;
    }
  }
}

int main()
{
  char city[10][15];
  int i;
  printf("Enter Name of 5 Cities: \n\n");

  // taking input from user
  for (i = 0; i < 5; i++)
    gets(city[i]);

  StringSort(city, 10);

  // print cities in sorted order
  system("cls");
  printf("City Names in Sorted order : \n");
  print(city, 10);

  getch();
  return 0;
}
