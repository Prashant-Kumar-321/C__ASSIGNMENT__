#include<stdio.h>
#include<conio.h>
/*
//
//// It is now unsucessfull
//void print_pascal_triangle(int n); // function declaration of print pascal triangle
//
//int main()
//{
// int n;
// n = 3;
//
// print_pascal_triangle(n);
//
//  getch();
//  return 0;
//}
//
//
//// Function Definition void Print_Pascal_Triangle(int n);
//void print_pascal_triangle(int n)
//{
*/

unsigned long long int factorial(int n)
{
  int i, fact = 1;
  for(i=1; i<=n; i++)
    fact *= i; // factorial of n is to be stored in fact

  return fact;
}
unsigned int combination(int n, int r)
{
  unsigned int comb;
  comb = factorial(n) / (factorial(r) * factorial(n-r));

  return comb;
}

int main()
{
  int i,j,k, toggle = 0, n = 9  ;

  for(i=0; i<=(n-1); i++)
  {
    toggle = 0; // To print number and space in alternative place
    k = 0;

    for(j=0; j<=(n-1+i); j++)
    {
      if(j>=(n-1-i))
      {
       if(toggle == 0)
       {
         printf("%d",combination(i,k));
         toggle = 1;
         k++;
       }
       else
       {
         printf(" ");
         toggle = 0;
       }

      }
      else
        printf(" "); // print initial spaces in each row before starting the printing

    }
    printf("\n");
  }
}
/*
//  int i, j, k, l, m, n1, a=0; // variable Declaration
//  unsigned int fi = 1, fk = 1, fik = 1;
//  int comb;
//
//  // outer loop Row number
//  for(i=0; i<=n; i++)
//  {
//    k = -1;
//    a = 0;
//
//    for(j=0; j<=(n+i); j++) // loop for columns in a row
//    {
//      fi = 1, fk = 1, fik = 1;
//
//      if(j==(n-i) || j == (n-i)+ a )
//      {
//        k++;
//        // program to calculate ncr
//
//        // factorial of i
//        for(l=1; l<=i; l++)
//          {
//            fi *= l;
//          }
//
//        //factorial of k
//        for(m=1; m<=k; m++)
//          {
//            fk *= m;
//          }
//
//        // factorial of (i-k)
//        for(n1 = 1; n1 <= (i-k); n1++)
//          {
//            fik *= n;
//          }
//
//        // combination ick
//        comb = fi / (fk * fik);
//
//        printf("%d",comb);
//        a += 2 ;
//
//      }
//      else
//        printf(" ");
//
//    }
//
//    printf("\n");
//
//
//  }
//
//
//
//
//}
*/
