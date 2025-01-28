//Can add Name at the place of Password
//Can do the Odd thing;



#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define MAXLENGTH 12

int main() {
  system("cls");

  register int i = 0;
  char Password[40];


  struct Users {

    int Found = 0;
    int Loop;
    char password[MAXLENGTH];
    int AccountBalance;

  };

  struct Users Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz;

  Ryan.Found;
  Ryan.Loop = 0;
  strcpy(Ryan.password, "ryan");
  Ryan.AccountBalance = 100000;

  Shayan.Found;
  Shayan.Loop = 2;
  strcpy(Shayan.password, "shayan");
  Shayan.AccountBalance = 100000;

  Ahmed.Found;
  Ahmed.Loop = 4;
  strcpy(Ahmed.password, "ahmed");
  Ahmed.AccountBalance = 100000;


  Khuzema.Found;
  Khuzema.Loop = 6;
  strcpy(Khuzema.password, "khuzema");
  Khuzema.AccountBalance = 100000;


  Fawad.Found;
  Fawad.Loop = 8;
  strcpy(Fawad.password, "fawad");
  Fawad.AccountBalance = 100000;


  Talha.Found;
  Talha.Loop = 10;
  strcpy(Talha.password, "talha");
  Talha.AccountBalance = 100000;


  Muaz.Found;
  Muaz.Loop = 12;
  strcpy(Muaz.password, "muaz");
  Muaz.AccountBalance = 100000;


  struct Users user_data[8]= {Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz};

  /* strcpy(user_data[0],  "ryan"); */
  /* strcpy(user_data[1], "shayan"); */
  /* strcpy(user_data[2], "ahmed"); */
  /* strcpy(user_data[3], "khuzema"); */
  /* strcpy(user_data[4], "talha"); */
  /* strcpy(user_data[5], "muaz"); */
  /* strcpy(user_data[6], "fawad"); */


  printf("\n Enter password \n\n > ");
  fgets(Password,sizeof(Password),stdin);
  strlwr(Password);

  //This removes the \n from fgets;
  size_t len = strlen(Password);
    if (len > 0 && Password[len - 1] == '\n') {
        Password[len - 1] = '\0'; 
    }

  while (i < 7) {

    if ( strcmp(user_data[i].password,Password)==0 ) {
      printf("\n User Found\n");
      break;
    }

    i++;

  }


   if ( strcmp(user_data[i].password,Password)!=0 ) {
      printf("User not Found\n");
    }






 //That was some weird stuff!




  return 0;

}
