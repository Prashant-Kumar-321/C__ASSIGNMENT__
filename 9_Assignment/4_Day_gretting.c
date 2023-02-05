#include <stdio.h>
#include <conio.h>

void Greeting_day(int x)
{
  switch (x)
  {
  case 0:
    printf("Enjoy Weekend \n\t      Do not store your Dreams in your eyes . They may roll down with tears.\n");
    printf("\t      Store them in your  heart,\n\t      Each hearthbeat will inspire and motivate you  fulfil them \n");
    printf("\t      Have a great day !\n");
    break;
  case 1:
    printf("Have hope in GOD and start your day with positive thoughts.\n");
    printf("Have a great day !\n");
    break;
  case 2:
    printf("May this Tuesday bring you all the best WISHES and feeling to you \n");
    printf("May this day bring all the positivity to you .\nHave a geat day ! \n");
    break;
  case 3:
    printf("Whishing you WEALTH AND god HEALTH , \n");
    printf("Have a great Day !\n");
    break;
  case 4:
    printf("Whishing you a great day ahead, \n");
    printf("May you achieved WHATEVER you have PLANNED for Today\n");
    break;
  case 5:
    printf("Today marks the day of another opportinuity for you\n");
    printf("have a great day! \n");
    break;
  case 6:
    printf("May you have a great day today,\n");
    printf("Sparkle and shine amongst Everyone ! \n");
    printf("Have a good day !\n");
  }
}

int main()
{
  unsigned short int day_no;

  printf("Make your Days Great with the below postive Greeting \n");

  printf("Enter Day Number (for instance 0 sunday, 1 monday , ..........)  \n");
  scanf("%hu", &day_no);

  if (day_no >= 0 && day_no < 7)
    Greeting_day(day_no); // function passed day_no
  else
    printf("Enter valid day Number!!!@\n\t\t\t  To make your day great ! \n");
  getch();
  return 0;
}