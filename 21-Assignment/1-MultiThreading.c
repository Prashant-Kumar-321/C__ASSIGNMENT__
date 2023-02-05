#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<pthread.h>

void* myThreadFun()
{

  printf("This is My First Thread Program \n");
  sleep(1);
  printf("This is Second line \n");

}


int main()
{
//  long a = 8.9;// same as int
//  printf("sizeof = %ld \n",a);

  pthread_t t1,t2;
  pthread_create(&t1,NULL,myThreadFun,NULL);
  pthread_create(&t2,NULL,myThreadFun,NULL);
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);

  printf("After Thread \n");

  return 0;
}
