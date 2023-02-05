#include<stdio.h>
#include<conio.h>

// function definition
// using switch-case statement ;
/*
float unit_cost(float cons_ele)
{
  float rough_Bill;

  switch(cons_ele>=0 && cons_ele <= 50)
  {
  case 1:
        rough_Bill = 0.5 * cons_ele;
        return rough_Bill;

  case 0:
        switch(cons_ele>50 && cons_ele<=150)
        {
        case 1:
              rough_Bill = 0.75 * cons_ele;
              return rough_Bill;

        case 0:
             switch(cons_ele>150 && cons_ele <= 250)
             {
             case 1:
                   rough_Bill = 1.20 * cons_ele ;
                   return rough_Bill;

             case 0:
                 rough_Bill = 1.5 * cons_ele ;
                 return rough_Bill ;

             }
        }

  }
}
*/

// using if-ele ladder statement
float unit_cost(float cons_ele)
{
 float rough_Bill ;

if(cons_ele>=0 && cons_ele<=50)
  return rough_Bill = 0.5 * cons_ele ;

else if(cons_ele>50 && cons_ele<=150)
  return rough_Bill = 0.75 * cons_ele ;

else if(cons_ele>150 && cons_ele<=250)
  return rough_Bill = 1.20 * cons_ele ;

else
  return rough_Bill = 1.5 * cons_ele ;
}

// Driver Function ;
int main()
{
  float cons_ele, Rough_Bill, Final_Bill;


  printf("Enter Electricity Charge Consumed (unit) : ");
  scanf("%f",&cons_ele);

  if(cons_ele >=0)
  {
    Rough_Bill = unit_cost(cons_ele); // function call that will return Bill of charges only

    Final_Bill = Rough_Bill + Rough_Bill * 0.2; // 0.2 == 20%  // Including tax of 20%

    printf("\nTotal Electricity Bill(Rs) = | %0.3f | ",Final_Bill);

    printf("\n\nThank you for Paying Electricity Bill \nHave a great day\n");
  }
  else
  {
    printf("Invalid Entry !\n");
    printf("%c %c %c %c!",2,2,2,2);
  }


  getch();
  return 0;
}
