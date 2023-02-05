#include<stdio.h>
#include<conio.h>
void TransfUpper(char *p)
{
    int i;
    for(i=0; p[i]; i++)
    {
        if((p[i]>='a' && p[i] <= 'z'))
            p[i] -= 32;
    }
}

void TransfLower(char *p)
{
  int i;
  for(i=0; p[i]; p++)
  {
    if((p[i] >= 'A' && p[i] <= 'Z'))
      p[i] += 32 ; // To tranform into lower case
  }
}

int main()
{
    char str[50] =  "dr.shyama prasad mukherjee university ranchi";

    // print string before transformation
    printf("String Before Transformation \n \"%s\"\n\n",str);

    TransfUpper(str); // invoke function to transform uppercase

    // print string
    printf("string after Tranformation\n \"%s\"\n",str);

    // print string in lower case
    TransfLower(str);
    printf("\nString in After Tranformation in lower case \n \"%s\" \n\n",str);


    return 0;
}
