#include<stdio.h>
#include<string.h>
#include<conio.h>

struct studentDetail{ // Structure to store Students Detail

char name[25];
char fatName[25];
char mothName[25];
char emailId[15];
char libId[10];
char Address[50];
char DOb[11];
unsigned short int age ;
unsigned int phone; // 167 bytes;
};

// Reading the information of  Student
void readData (struct studentDetail *s, int Sn)
{
 printf("\t\t\t\tEnter below information \n\n");
 printf("\n%d. STUDENT \n",Sn);

 printf("Name : ");
 fflush(stdin);  //for stringInput clearing buffer is essential
 gets(s[0].name); // (s[0] means struncture object name) to which it is pointing ;

 printf("Father Name : ");
 fflush(stdin);
 gets(s[0].fatName);

  printf("Mother Name: ");
  fflush(stdin);
  gets(s[0].mothName);

  printf("Date of Birth: ");
  fflush(stdin);
  gets(s[0].DOb);

  printf("Email Address: ");
  fflush(stdin);
  gets(s[0].emailId);

  printf("Library ID: ");
  fflush(stdin);
  gets(s[0].libId);

  printf("Address:  ");
  fflush(stdin);
  gets(s[0].Address);

  printf("Age : ");
  scanf("%u",&s[0].age);

  printf("Contact : ");
  scanf("%u",&s[0].phone);

}

// Displaying information of Students
void displayData(struct studentDetail s, int Sn)
{


}

