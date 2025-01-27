//Can do the Odd thing;
//STATUS : Name->Password ; Loop->NULL ; name,fullname

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define MAXLENGTH 12
#define COUNTER 7

int main() {
  system("cls");

  register int i = 0;
  char Password[MAXLENGTH];
  char Username[40];


  struct Users {

    int found = 0;
    char password[MAXLENGTH];
    int AccountBalance;
    char name[MAXLENGTH];
    char fullname[25];

  };

  struct Users Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz;

  Ryan.found;
  strcpy(Ryan.password, "ryan");
  Ryan.AccountBalance = 100000;
  strcpy(Ryan.name, "ryan");
  strcpy(Ryan.fullname, "ryan asif");
  

  Shayan.found;
  strcpy(Shayan.password, "shayan");
  Shayan.AccountBalance = 100000;
  strcpy(Shayan.name, "shayan");
  strcpy(Shayan.fullname, "shayan siddiqui");

  Ahmed.found;
  strcpy(Ahmed.password, "ahmed");
  Ahmed.AccountBalance = 100000;
  strcpy(Ahmed.name, "ahmed");
  strcpy(Ahmed.fullname, "ahmed dayan");


  Khuzema.found;
  strcpy(Khuzema.password, "khuzema");
  Khuzema.AccountBalance = 100000;
  strcpy(Khuzema.name, "khuzema");
  strcpy(Khuzema.fullname, "khuzema afridi");


  Fawad.found;
  strcpy(Fawad.password, "fawad");
  Fawad.AccountBalance = 100000;
  strcpy(Fawad.name, "fawad");
  strcpy(Fawad.fullname, "fawad ahmed");


  Talha.found;
  strcpy(Talha.password, "talha");
  Talha.AccountBalance = 100000;
  strcpy(Talha.name, "talha");
  strcpy(Talha.fullname, "talha qadri");


  Muaz.found;
  strcpy(Muaz.password, "muaz");
  Muaz.AccountBalance = 100000;
  strcpy(Muaz.name, "muaz");
  strcpy(Muaz.fullname, "muaz khan");


  struct Users user_data[8]= {Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz};

  printf("\n Enter name \n\n > ");
  fgets(Username,sizeof(Username),stdin);
  strlwr(Username);

  //This removes the \n from fgets;
  size_t len = strlen(Username);
    if (len > 0 && Username[len - 1] == '\n') {
        Username[len - 1] = '\0'; 
    }

  while (i < COUNTER) {

    if ( strcmp(user_data[i].name,Username)==0 || strcmp(user_data[i].fullname,Username)==0) {
      printf("\n User Found\n");
      break;
    }
    i++;
  }


   if ( strcmp(user_data[i].name,Username)!=0 && strcmp(user_data[i].fullname,Username)!=0) {
      printf("\n User not found\n");
    }

  return 0;

}
