#include<stdio.h>
#include<conio.h>

void Alphabet_Khacha();

int main()
{
    Alphabet_Khacha();

    getch();
    return 0;
}

// definition
void Alphabet_Khacha()
{
    int i, j, c = 1;
    int n;
    n = 7;

    printf("Enter a number \n");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        c = 65;

        for(j=0; j<=(2*n); j++)
        {
            if(j <= (n-i) || j >= (n+i))
            {
                printf("%c ",c);
                if(j < n)
                    c++;
                else
                    c--;
            }

            else
            {
                printf("  ");

                if(j<n) // c should be increased or decreased
                    c++;  // whiling printing space as well;
                else
                    c--;
            }

        }

        printf("\n");

    }

}


