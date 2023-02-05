#include<stdio.h>
#include<conio.h>
#include<math.h>

int Discriminant(int a, int b, int c)
{
    int Disscrim;
    return Disscrim  = b*b -4*a*c ;

}

void Roots(int a, int b, int c)
{
  int D = Discriminant(a,b,c) ;
  float root,root2,Ca;
  Ca = a;


  switch(D == 0)
  {
  case 1:
       root = -b /(2*Ca) ;
       printf("Equal roots: \n\n%d/%d = %0.2f,\n%d/%d = %0.2f\n",-b,2*a,root,-b,2*a,root);
       break;
  case 0:
      switch(D>0)
      {
      case 1: // two different real roots22
            root =  (-b + sqrt(D)) / (2*a) ;
            root2 = (-b-sqrt(D))  / (2*a) ;
            printf("Different Real roots: ");
            printf("\n\n(%d+%c%d)/%d = %0.2f,\n(%d-%c%d)/%d = %0.2f\n",-b,251,D,2*a, root, -b, 251, D, 2*a,root2);
            break;
      case 0: // two different imaginary roots
            printf("Different imaginary roots: ");
            printf("\n\n(%d+%c%d %c) / %d,\n(%d-%c%d %c) / %d\n",-b,251,-D,'i',2*a, -b,251,-D,'i',2*a );
      }
      break;
  }
}

// driver main function ;

int main()
{
  int a,b,c;
  printf("Quadratic Equation :\n\nStandard Form ax^2 + bx + c = 0 ;\n");
  printf("Enter coefficent of quadratic equation a, b, c : \n\n");

  scanf("%d %d %d",&a,&b,&c);
  if(a==0);
  else
  {
    Roots (a,b,c);
  }

  return 0;
}
