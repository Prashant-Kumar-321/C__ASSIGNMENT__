#include<stdio.h>
#include<conio.h>


// function definition

// calculating factorial of n
unsigned long long int Fact_n(int n)
{
    int i ;
    unsigned long long int fn = 1;

    for(i = 1; i<=n; i++)
    {
      fn *= i;
    }

    return fn;

}

// factorial of r
unsigned long long int Fact_R(int r)
{
    int i ;
    unsigned long long int fr = 1;

    for(i=1; i<=r; i++)
    {
        fr *= i;
    }

    return fr;
}

//factorial of nr
unsigned long long int Fact_NR(int nr)
{
    int i = 1;
    unsigned long long int fnr = 1;

    for(i=1; i<=nr; i++)
    {
        fnr *= i;
    }

    return fnr;

}


// unsigned int Fact_n(int n);
// unsigned int Fact_R(int r);
// unsigned int Fact_NR(int);

unsigned int Total_combination (int n, int r)
{

   unsigned long long int factN, factR, factnr, total_comb;

    factN = Fact_n(n); // fact of n

    factR = Fact_R(r); // fact of r

    factnr = Fact_NR( (n-r) ); // fact of n-r

    return total_comb = factN / (factR * factnr) ;
}


// main function // driver function

int main()
{
    int n, r, comb;

    printf("Total number of distinct object : ");
    scanf("%d",&n);

    printf("\nNumber of objects to be selected : ");
    scanf("%d",&r);

    comb = Total_combination(n,r);

    printf("\nNumber of ways of selecting = %d",comb);

    getch();
    return 0;
}
