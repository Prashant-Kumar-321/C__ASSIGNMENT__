#include<stdio.h>
#include<conio.h>

print_Reverse(int age[], int sz)
{
  int i;

  for(i=(sz-1); i>=0; i--)
    printf("%3d ",age[i]); // print values of array in reverse order

  printf("\n");
}

int main()
{
  int n;
  printf("Total Number of Students : ");
  scanf("%d",&n);

  int age[n];
  printf("Enter Age of students: \n");

  // taking input from user
  for(int i=0; i<n; i++)
    scanf("%d", &age[i]);

  printf("Ages in Revese order \n");
  print_Reverse(age, n);

  getch();
  return 0;
}
