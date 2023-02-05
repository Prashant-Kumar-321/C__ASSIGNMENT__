#include<stdio.h>
#include<conio.h>

// fuction call
unsigned int find_min(unsigned int *a, unsigned int sz)
{
  unsigned int min = *a ;
  for(int i=1; i<sz; i++)
  {
    if(min>*(a+i))
      min = *(a+i) ;
  }
  return min;
}

int main()
{
    unsigned int size, smallest ;
    printf("Total Peoples : ");
    scanf("%u",&size);


// Taking ages of (size) peoples
    unsigned int age[size];
    printf("\nEnter %u people's Ages : \n");

    for(int i = 0; i<size; i++)
        scanf("%u",&age[i]);

    smallest = find_min(age, size);

    printf("People with Minimum age = %u", smallest );

    getch();
    return 0;
}
