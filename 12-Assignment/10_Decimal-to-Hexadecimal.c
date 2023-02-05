#include<stdio.h>
#include<conio.h>

void Hexadec(unsigned int x)
{

  int R = 0;
  int static c = 0;

  if(x == 0)
  {
    if(c==0);
    else
      return ;
  }

  c++;
  R = x % 16 ;
  x /= 16 ;

  Hexadec(x);

  // if-else statement to print R
  if(R<=9)
    printf("%d",R);

  else if(R == 10)
    printf("%c",'A');

  else if (R == 11)
    printf("%c",'B');

  else if(R == 12)
    printf("%c",'C');

  else if(R == 13)
    printf("%c",'D');

  else if(R == 14)
    printf("%c",'E');

  else
    printf("%c",'F');
}

void main()
{
  int n;
  printf("Enter a Interger number:  ");
  scanf("%d",&n);


  printf("%d = %x\n",n,n);
  printf("Hexadecimal Equivalent is : ");
  Hexadec(n);

  getch();
}

