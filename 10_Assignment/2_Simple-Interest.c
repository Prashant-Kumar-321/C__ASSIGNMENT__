#include<stdio.h>
#include<conio.h>

float calculate_si(int p, float r, float t);

// Driver main function

int main()
{
    float rate, time;
    int prin;

    printf("Enter below data to calculate simple interest : \n\n");
    printf("Principal value : ");
    scanf("%d",&prin);

    printf("\nRate(per annum): ");
    scanf("%f",&rate);

    printf("\nTime (year): ");
    scanf("%f",&time);

    float si = calculate_si(prin,rate,time);

    printf("Simple Interest : %0.3f",si);
    printf("\n\nTotal Amount : %0.3f",si+ prin);

    getch();
    return 0;
}

 // function definition
 float calculate_si(int p, float r, float t)
 {
   float si;

    si = p * r * t / 100 ;

    return si;

 }
