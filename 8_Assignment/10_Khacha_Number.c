#include<stdio.h>
#include<conio.h>

void khacha_print();

int main()
{
    khacha_print();
    khacha_print();
    khacha_print();

    getch();
    return 0;
}


// funtion definition
void khacha_print()
{
    int i, j, c = 1;
    int n;
    n = 7;

    printf("Enter a number \n");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        c = 1;

        for(j=0; j<=(2*n); j++)
        {
            if(j <= (n-i) || j >= (n+i))
            {
                printf("%d ",c);
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

