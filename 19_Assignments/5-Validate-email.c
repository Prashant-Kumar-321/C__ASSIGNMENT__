#include<stdio.h>
#include<conio.h>
int Validate_emId(char *const e);

int main()
{
  char email_id[][30] = {
                         "pk6176837@gmail.com",
                         "pk8887kum@gmail.com",
                          "ps361gmail.com",
                          "sashi235@gmil.com",
                          "3Ravi@gmail.com"
                        };

  int i;

  // Passing email one by one to validate
  for(i=0; i<5; i++)
  {
    (!Validate_emId(email_id[i])) ? printf("Invalid Email id \n%s\n", email_id[i]): printf("");
  }



  return 0;
}

//Email Validator function
int Validate_emId(char *const e)
{
  int i;
  for(i=0 ; e[i] != '\0'; i++)
  {
    if(e[i] == '@') // Valid email
      return 1;
  }
  // passed email is invalid
  return 0;
}

