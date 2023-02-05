#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Marks
{
  char name[25];
  int roll_no,Phy_M;
  int che_M,Math_M;
  float percntg ;
};

void readData(struct Marks *M)
{
  printf("Student Name   : ");
  fflush(stdin);
  gets(M->name);

  printf("Roll No        : ");
  scanf("%u",&M->roll_no);

  printf("Physics Marks  : ");
  scanf("%u",&M->Phy_M);

  printf("Chemistry Marks: ");
  scanf("%u",&M->che_M);

  printf("Math Marks     : ");
  scanf("%u",&M->Math_M);
}

void  percentage (struct Marks *M, int p, int c, int m)
{
  M->percntg = (p+m+c)/3;
}

void display(struct Marks a,int n)
{
  printf("\nSN. %d\n",n); //10

  printf("\tName           : %s  ",a.name);
  printf("\tRoll No: %d\n",a.roll_no);
  printf("\tPhysics Marks  : %d\n",a.Phy_M);
  printf("\tChemistry Marks: %d\n",a.che_M);
  printf("\tMath Marks     : %d\n",a.Math_M);
  printf("\tPercentage     : %g\n",a.percntg);
}


// Driver Code
int main()
{
  struct Marks s[5];
  int n = sizeof(s) / sizeof(s[0]); // size of s array of Marks type
  int i; // maintaining loop

  // Read Data
  for(i=0; i<n; i++)
  {
    printf("Enter %d Students Marks \n\n",n);
    printf("SN.%d \n",(i+1));
    readData(&s[i]);
    system("cls");
  }
  system("cls");

  // Calculating percentage of each Student
  for(i=0; i<n; i++)
    percentage(&s[i],s[i].Phy_M, s[i].che_M, s[i].Math_M);

  // displaying information of each student
  for(i=0; i<n;i++)
    display(s[i], (i+1));








  return 0;
}
