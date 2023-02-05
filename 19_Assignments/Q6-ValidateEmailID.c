// if strtok() doesn't get the seperator passed then it return whole string ;

#include <stdio.h>
#include <conio.h>
#include <string.h>

int isspecial(char ch)
{
  if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))) // Special character
    return 1;

  return 0; // Not Sepecial Character
}

int Validate_emailId(char *e)
{
  int i, j, Sl = strlen(e);

  // Checking Whether first and last char of email is special or not
  if (isspecial(e[0]) || isspecial(e[Sl - 1])) // invalid email
    return 0;

  for (i = 0; e[i] != '\0'; i++) // checking two consecutive special character
  {
    if (isspecial(e[i]))
    {
      if (isspecial(e[i + 1]))
        return 0;
    }
  }
 
  // checking recipient part domain name and top level domain
  for (i = 0; e[i]; i++)
  {
    if (e[i] == '@') // Recipeint part is available
    {
      if (i == 0) // @ is first char
        return 0;

      else // @is not the first char
      {
        for (j = 0, i = i + 1; e[i]; i++, j++)
        {
          if (e[i] == '.')
          {
            if (j == 0) // no domain name
              return 0;
            else // some character are present before '.' ;
            {
              if (e[i + 1] == '\0') // examing the null in top-level domain
                return 0;
              else
              {
                for (i = i + 1; e[i]; i++) // examing the special character in top-level-domain
                {
                  if (e[i] == '.');
                  else if (isspecial(e[i])) // no special character can be in top- leverl domain but'.'
                    return 0;
                }
                return 1; // Valid email id ;
              }
            }
          }
          else if(e[i] == '-'); 

          else if (isspecial(e[i])) // checking for special characer in domain name ;
            return 0;
        }
        return 0; // no top-level domain present
      }
    }
  } 
  return 0;
}

int main()
{
  char emailId[25] = "john.doe@example.org";

  if (Validate_emailId(emailId))
    printf("Valid Email Address \n");
  else
    printf("Invalid Email Address \n");

  return 0;
}
