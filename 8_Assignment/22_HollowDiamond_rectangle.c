#include<stdio.h>
#include<conio.h>

// Function Declartion

void khacha_Facedown(int N);
void khacha_FaceUp(int N);

// main funtion
int main()
{
  int N;
  N = 10 ;

  printf("Enter a Wizard Number \n");
  scanf("%d",&N);

  khacha_Facedown(N);
   khacha_FaceUp(N);


  getch();
  return 0;
}

// function declaration

// khacha-Facedown()

  void khacha_Facedown(int N)
  {
    short int i, j;

    for(i=0; i<=N; i++)
    {
      for(j=0; j<=(2*N+1); j++)
      {
        if(j<=(N-i) || j>=(N+1+i) )
          printf("@ ");
        else
          printf("  ");
      }

      printf("\n");
    }
  }

  void khacha_FaceUp(int N)
  {
    int i,j;

    for(i=0; i<=N; i++)
    {
      for(j=0; j<=(2*N+1); j++)
      {
       if(j<=i || j>=(2*N+1-i))
          printf("@ ");
       else
        printf("  ");
      }

      printf("\n");

    }

  }
