 #include<stdio.h>
 #include<conio.h>

 unsigned int Squ(int n)
 {
   return n*n;
 }

 int main()
 {
   int n = 3;
  printf("Enter a Number: ");
  scanf("%d",&n);

  printf("(Square)\n%d^2 = %d \n\n",n,Squ(n));

  return 0;
 }
