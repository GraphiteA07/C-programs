#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {

  system("cls");


  char Username[70];
  char Userpassword[10] = "password";


  char password[10];


  char Ryan[10] = "Ryan Asif";
  int RyanBalance = 100000;
  char RyanPassword[8] = "Nayr";
  char RyansRecentStatus = 0;




  printf("\n Enter your name \n\n > ");
  gets(Username);

  //Paused

   /* if ( strcmp(Username,Ryan) == 0 ) { */

   /*  printf("\n A similar name is detected.Consider adding some number to differentiate. \n (after name)\n "); */
  /* } */

  printf("\n Enter -> password \n\n > ");
  scanf("%12s",&password);
  


   if ( strcmp(password,Userpassword) == 0 ) {

    printf("\n True \n");
    printf("\n %s \n",Username);
  }


  else {

    printf("\n False \n");
    return 0;
  }

  printf("\n Entered Successfully! \n");

  return 0;

}
