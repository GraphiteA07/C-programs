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


  printf("\n\twhat's your name?\n\n-> ");
  scanf("%s",&name);

  printf("\nwelcome, %s \n",name);

  printf("\n\twant to know your age? (y/n)\n\n-> ");
  scanf("%s",&userinput);



  if (userinput=='y' || userinput=='y'|| userinput=='c'|| userinput=='f')  {

     printf("\nlet's begin!\n");
    
    printf("\n enter the current year \n\n-> ");
    scanf("%d",&e);

    printf("\n enter your birth year \n\n-> ");
    scanf("%d",&d);

    int c =(e-d);

    printf("\n you are %d years old! \n",c);

    return 0;
  }



  if (userinput=='n'|| userinput=='n'|| userinput=='g'|| userinput=='h') {
    printf("\nok");
  }


  else  {

    int wait=1;
    sleep(wait);

    printf("\a\n");

    printf("\terror:\n");
    sleep(wait);

    printf("\a\a");
    printf("\tbiryani coming from space!\n");
  

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



 
   
