//Working Accordingly!

#include <stdio.h>
#include <unistd.h>

int main() {

  char a[20];

  int b,e,d;

   printf("\n\tWhat's your name?\n\n");
  scanf("%s",&a);

  printf("\nWelcome %s \n",a);

  printf("\n\tWant to know your age?\n\n ");

  printf("\n\tPressing 0 means 'no'\n\tPressing 1 means 'yes'\n");

  scanf("%d",&b);

  
  if(b!=0 && b!=1) {

    int delay=1.2;
    sleep(delay);

    printf("\a\n");

    printf("\tMYSTERIOUS ERROR:\n");
    sleep(delay);

    printf("\a\a");
    printf("\tUnexpected biryani coming from space!\n");

  }

  if (b==0) {
    
    printf("OK");

  }

  if (b==1) {

    printf("\nLet's Begin!\n");
    
    printf("\n Enter the current year \n\t");
    scanf("%d",&e);

    printf("\n Enter your birth year \n\t");
    scanf("%d",&d);

    int c =(e-d);

    printf("\n You are %d years old \n",c);

  }

   
  return 0;
}
