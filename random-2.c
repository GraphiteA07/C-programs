//updated version of experiment.c
//working accordingly!

#include <stdio.h>
#include <unistd.h>

int main() {

  char userinput;
  char name[20];
  char c[4]= "yes";
  char f[4]= "yes";
  char g[3]= "no";
  char h[3]= "no";
 
  int e;
  int d;


  printf("\n\tWhat's your name?\n\n > ");
  scanf("%s",&name);

  printf("\nWelcome, %s \n",name);

  printf("\n\tWant to know your age? (y/n)\n\n > ");
  scanf("%s",&userinput);



  if (userinput=='y' || userinput=='y'|| userinput=='c'|| userinput=='f')  {

     printf("\nLet's begin!\n");
    
    printf("\n Enter the current year \n\n > ");
    scanf("%d",&e);

    printf("\n Enter your birth year \n\n > ");
    scanf("%d",&d);

    int c =(e-d);

    printf("\n You are %d years old! \n",c);

    return 0;
  }



  if (userinput=='n'|| userinput=='n'|| userinput=='g'|| userinput=='h') {
    printf("\nOk");
  }

  else  {

    int wait=1;
    sleep(wait);

    printf("\a\n");

    printf("\tError:\n");
    sleep(wait);

    printf("\a\a");
    printf("\tBiryani coming from space!\n");
  

  }

  return 0;

}



//logical errors


//contains logic errors
 /*{


  char a[5] = "yes";
  char b[5] = "no";
  char c[5];

  printf("want to know your age");
  scanf("%s",&c);

  if("c"=="a") {
    printf("okay");


  }
  return 0; */



 
   
