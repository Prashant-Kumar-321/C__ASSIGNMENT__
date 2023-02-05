#include<stdio.h>
#include<conio.h>

// function definition Strcmp()
int Strcomp(char *p, char *q)
{
    int i = 0, Ascii;
    do
    {
        Ascii = p[i] - q[i];
        if(Ascii != 0)
        {
          if(Ascii>0)
            return 1;
          else
            return -1;
        }
        else
        {
            i++;
            if(p[i] == 0 && q[i] == 0) // Strings are equal
                return 0;
        }

    }
    while(1);
}

int main()
{
    char str1[20] = "arashant";
    char str2[20] = "prashant";

    printf("Enter two Strings : \n") ;
    fgets(str1,20, stdin);
    fgets(str2,20, stdin);

    int res = Strcomp(str1, str2); // function call to compare string

    if(res == 0)
        printf("Strings are equal %d",res);
    else
      {
        if(res<0) // negative
          printf("Stings are unequal %d\nThey are in Dictionary order \n",res);
        else
          printf("Strings are unequal %d\nThey aren't in Dictinary order \n",res);
      }

    getch();
    return 0;
}
