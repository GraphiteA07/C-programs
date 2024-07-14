//Working Accordingly!

#include <stdio.h>
#include <unistd.h>

int main() {

  char UserInput;
  char name[20];
  char c[4]= "yes";
  char f[4]= "Yes";
  char g[3]= "no";
  char h[3]= "No";
 
  int e;
  int d;


    printf("\n\tWhat's your name?\n\n");
  scanf("%s",&name);

  printf("\nWelcome, %s \n",name);

  printf("\n\tWant to know your age? (y/N)\n\n ");
  scanf("%s",&UserInput);



  if (UserInput=='Y' || UserInput=='y'|| UserInput=='c'|| UserInput=='f')  {

     printf("\nLet's Begin!\n");
    
    printf("\n Enter the current year \n\t");
    scanf("%d",&e);

    printf("\n Enter your birth year \n\t");
    scanf("%d",&d);

    int c =(e-d);

    printf("\n You are %d years old \n",c);

    return 0;
  }

  
  if (UserInput=='n'|| UserInput=='N'|| UserInput=='g'|| UserInput=='h') {
    printf("\nOK");

  }


  else  {

    int wait=1;
    sleep(wait);

    printf("\a\n");

    printf("\tERROR:\n");
    sleep(wait);

    printf("\a\a");
    printf("\tBiryani coming from space!\n");

  }

  return 0;

}
