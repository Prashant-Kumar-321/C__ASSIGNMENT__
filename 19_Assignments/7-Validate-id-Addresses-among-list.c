#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int isNum(char *p)
{
  int i;
  for(i=0; p[i]; i++)
  {
    if(!isdigit(p[i]))
      return 0;
  }

  return 1; // All char in p string are digits
}

int Validate_ip(char *ip)
{
  int i, num ,dot=0;
  char *token;
  if(ip == NULL)
    return 0;

  token = strtok(ip, "."); // String==> token // will return first token before .

  if(token == NULL)
    return 0;

  while(token)
  {
    if(isNum(token))
    {
      num = atoi(token); // converting token into integer
      if(num>=0 && num<=255)
      {
        token = strtok(NULL, "."); // saying Next token of previous string
         if(token != NULL)
          dot++;
      }
      else
       return 0;
    }
    else
      return 0;
  }

  if(dot == 3)
    return 1;
  else
    return 0;

}

// Driver Code
int main()
{
  char ip[2][15] =
  {
    "162.32.4.200",
    "90.abc.322.6"
  };
  int i;

  for(i=0; i<2; i++)
  {
    if(Validate_ip(ip[i]))
      printf("%s --> Valid ip address \n",ip[i]);
    else
      printf("%s --> Invalid ip addrss\n",ip[i]);
  }

  return 0;
}

