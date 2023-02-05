#include<stdio.h>
#include<conio.h>

float Area(float r);

// Driver main function
int main()
{

  float radius,A ;

  printf("Enter radius of circle :  ");
  scanf("%f",&radius);


  A = Area(radius); // Storing Returned Area by Area() function

  printf("Area of Circle = %0.3f square units\n",A);

  return 0;
}

// funtion definition

float Area(float r) // r is for storing Radius passed by main function
{
  float Ar;

  Ar = 3.141592 * r * r;

  return Ar;
}
