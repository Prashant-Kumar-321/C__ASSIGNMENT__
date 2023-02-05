//Q1.Define Employee Structure with members[id, salary, name];
//Q2.Write a Function to take input employee data form user
//Q3 Write a function to print employee data
//Q5. Write a function to sort employees according to their salaries
//Q6. Write a function to sort employees according to their names

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>  // system();
#include<string.h>  // strcpy(); strcmp();
#include<unistd.h>  // sleep();

// Definition of Structure Employee (Q1)
struct Employee
{
  char name[20];
  unsigned int id;
  unsigned int salary;
};

//Q2.Write a Function to take input employee data form user
void takeInput(struct Employee*e,int n)
{
  printf("\n%d.EMPLOYEE\n",n);
  printf("Employee Name :   ");
  fflush(stdin); // To clear Buffer
  fgets(e[0].name,20,stdin);
  e[0].name[strlen(e[0].name) - 1] = '\0';

  printf("Empoyee ID :      ");
  scanf("%u",&e[0].id);

  printf("Employee Salary : ");
  scanf("%u",&e[0].salary);
}

//Q3 Write a function to print employee data
void display(struct Employee e)
{
  printf("Employee ID : %u \n",e.id);
  printf("Employee Name : %s \n", e.name);
  printf("Employee Salary : %u \n",e.salary);
}

// max Salary of Employee
unsigned int maxSalary(struct Employee e[], int n)
{
  unsigned int i, maxSalary;

  maxSalary = e[0].salary; // Assume

  // finding max salary
  for(i=1; i<n; i++)
  {
    if(maxSalary<e[i].salary)
      maxSalary = e[i].salary;
  }

  return maxSalary;
}

//Q5 Sorting employee arry according to name
void SortAccordingName(struct Employee e[], int n)
{
  int i,j;
  struct Employee tem;

  // sorting logic
  for(i=0;i<n-1; i++)
    for(j=i+1; j<n; j++)
    {
      if(strcmp(e[i].name, e[j].name) == 1)
      {
        tem = e[i];
        e[i] = e[j];
        e[j] = tem;
      }
    }
}
 // Q6
// Sorting employee arry according to Salary
void SortAccordingSalary(struct Employee e[], int n)
{
  int i,j;
  struct Employee tem;

  // sorting logic
  for(i=0;i<n-1; i++)
    for(j=i+1; j<n; j++)
    {
      if(e[i].salary < e[j].salary)
      {
        tem = e[i];
        e[i] = e[j];
        e[j] = tem;
      }
    }
}



// Driver Code
int main()
{
  struct Employee emp[10];
  int i,n;
  n = sizeof(emp) / sizeof(emp[0]);

  // user input of employee data
  for(i=0; i<n; i++)
      takeInput(emp+i,(i+1));

  // Displaying all Employee's Data
  system("cls");
  printf("\t\tEmployee's Detail \n");
  printf("\t\t******************\n\n");
  for(i=0; i<n; i++)
  {
    printf("%d Employee's Janam Kundali \n",(i+1));
    display(emp[i]);
    printf("\n\n");
  }

  // max Salary
  unsigned int max = maxSalary(emp,n);
  printf("\nMaximum Salary = %u \n",max);

  sleep(5); // Pause for five second
  system("cls");
  // max Salary
  printf("\nMaximum Salary = %u \n",max);

  // Sort According to Different Parameter
  printf("\n\n");
  printf("Enter Your Choice \n");
  printf("Sort According \n");
  printf("A.Name\nB.Salary\n");
  char ch = getch();

  system("cls");

  switch(ch)
  {
  case 'A': case 'a':
    SortAccordingName(emp, n);
    break;
  case 'B': case 'b':
    SortAccordingSalary(emp,n);
    break;
  default:
    printf("Invalid Entry \n");
  }

  // Sortted Employee Information
  printf("\n\nEmployee Data in Sorted Order in %s\n\n",(ch == 'a' || ch == 'A') ? "Name": "Salary ");

  for(i=0; i<n; i++)
  { printf("%d.Employee \n",(i+1));
    display(emp[i]);
    printf("\n\n");
  }

  getch();
  return 0;
}
