#include<stdio.h>
#include<conio.h>
void readStr(char (*p)[10], int n)
{
  int i;
  for(i=0; i<n; i++)
    gets(p[i]);

}

void printf2dString(char (*p)[10], int n)
{
  int i, j;
  for(i=0; i<n; i++)
  {
    printf("|");
    for(j=0; p[i][j] != 0; j++)
      printf(" %c|",p[i][j]);
    printf("\n");
  }
}

int main()
{
  char EmpId[5][10];
  int i;

  printf("Enter Employee Id of 5 Employee: \n");

  readStr(EmpId, 5);

  // printing string
  for(i=0; i<5; i++)
    printf("%s\n",EmpId[i]);

  printf("\n\n\n");
  printf2dString(EmpId, 5);

    return 0;
}
