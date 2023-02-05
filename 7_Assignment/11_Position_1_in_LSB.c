#include<stdio.h>
#include<conio.h>

int main()
{
  int num = 23, count = 0;
  printf("Enter a number \n:");
  scanf("%d",&num);

  while(num != 0)
  {
    count++;

    if(num & 1 == 1)
    {
      printf("Position of fist 1 =  %d",count);
      break;
    }

    num = num >> 1;
  }

//
//for( num ; num != 0; num = num >> 1 )
//{
//  count++;
//  if(num&1 == 1)
//  {
//    printf("postition of first 1 = %d",count);
//    break;
//  }
//}



  getch();
  return 0;
}
