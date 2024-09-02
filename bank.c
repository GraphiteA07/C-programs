//Find solution to reduce code from multiplying


#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {

  system("cls");


  char Username[70];
  char Userpassword[10] = "password";


  char password[10];


  char Ryan[10] = "Ryan Asif";
  char Ryan2[10] = "Ryan asif";
  char Ryan3[8] = "ryan";
  char Ryan4[8] = "Ryan";
  int RyanBalance = 391800;
  char RyanPassword[8] = "Nayr";
  char RyanRecentStatus = 0;


  char Shayan[16] = "Shayan Siddiqui";
  int ShayanBalance = 149280;
  char ShayanPassword[8] = "Nayahs";
  char ShayanRecentStatus = 0;


  printf("\n Enter your name \n\n > ");
  gets(Username);


//Play



   while ( strcmp(Username,Ryan) == 0 || strcmp(Username,Ryan2) == 0  || strcmp(Username,Ryan3) == 0 || strcmp(Username,Ryan4) == 0 ) {

    printf("\n A similar name is detected.Consider adding some number to differentiate. \n (after name)\n ");
    break;
  }

  printf("\n Enter password \n\n > ");
  scanf("%12s",&password);
  
   if ( strcmp(password,Userpassword) == 0 ) {

    printf("\n True \n");
    printf("\n %s \n",Username);
  }


   else if ( strcmp(password,RyanPassword) == 0 ) {

    printf("\n Welcome \n");
  }


  else {

    printf("\n False \n");
    return 0;
  }

  printf("\n Entered Successfully! \n");

  return 0;

}
