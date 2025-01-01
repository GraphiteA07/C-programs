//Password and name authentication are not completed     ( Done )
//New Name doesn't accept whitespaces in names           ( Facts )
//Main_Display added.Not completed for Re-enter users    ( Done )
// return 0 due to Enter 'y' or 'n' : LINE : 343         ( No need )
// Username Lowercase                                    ( Done )
// Password Lowercase                                    ( Done )
// User depositing is not done


#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
#include "Beep.c"
#define MAXLENGTH 10 

int delay3 = 60000;   /*41900*/

void WELCOME_S() {

  //gap from ( " ) 6 ( Only ASCII )

  printf("\n\n    e   e  e eeee e     eeee eeeee eeeeeee eeee \n");
  usleep(delay3);
  printf("    8   8  8 8    8     8  8 8  88 8  8  8 8    \n");
  usleep(delay3);
  printf("    8e  8  8 8eee 8e    8e   8   8 8e 8  8 8eee \n");
  usleep(delay3);
  printf("    88  8  8 88   88    88   8   8 88 8  8 88   \n");
  usleep(delay3);
  printf("    88ee8ee8 88ee 88eee 88e8 8eee8 88 8  8 88ee \n");

  printf(" -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
} 

void WELCOME() {

  //gap from ( " ) 6 ( Only ASCII )

  printf("\n\n    e   e  e eeee e     eeee eeeee eeeeeee eeee \n");
  printf("    8   8  8 8    8     8  8 8  88 8  8  8 8    \n");
  printf("    8e  8  8 8eee 8e    8e   8   8 8e 8  8 8eee \n");
  printf("    88  8  8 88   88    88   8   8 88 8  8 88   \n");
  printf("    88ee8ee8 88ee 88eee 88e8 8eee8 88 8  8 88ee \n");

  printf(" -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
} 

void Verifying() {

  printf("\n\n  Verifying");

  usleep(95000); 
  printf(".");
  usleep(95000); 
  printf(".");
  usleep(95000); 
  printf(".");
  usleep(99999); 


  printf("\n");
} 




int main() {

  system("cls");


  char GivenPassword[20];
  char Username[40];
  char Permission_SpecialChars; 
  int choice;
  int delay = 1;
  int delay2 = 2;
  int s = 0;
  int max_length = 18;
  int input_length = strlen(GivenPassword);
  int User_length = strlen(Username);
  int maxUser_length = 40;
  int deposit;
  int withdraw;
  int transaction = 0;
  int after_transaction = 0;



  struct Users {

    int Found = 0;
    int Loop;
    char Password[MAXLENGTH];
    int AccountBalance;

  };

  struct Users User,Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz;

  User.Found = 0;
  strcpy(User.Password, "password");
  User.AccountBalance = 100000;



  Ryan.Found;
  Ryan.Loop = 0;
  strcpy(Ryan.Password, "ryan");
  Ryan.AccountBalance = 100000;

  Shayan.Found;
  Shayan.Loop = 2;
  strcpy(Shayan.Password, "shayan");
  Shayan.AccountBalance = 100000;

  Ahmed.Found;
  Ahmed.Loop = 4;
  strcpy(Ahmed.Password, "ahmed");
  Ahmed.AccountBalance = 100000;


  Khuzema.Found;
  Khuzema.Loop = 6;
  strcpy(Khuzema.Password, "khuzema");
  Khuzema.AccountBalance = 100000;


  Fawad.Found;
  Fawad.Loop = 8;
  strcpy(Fawad.Password, "fawad");
  Fawad.AccountBalance = 100000;


  Talha.Found;
  Talha.Loop = 10;
  strcpy(Talha.Password, "talha");
  Talha.AccountBalance = 100000;


  Muaz.Found;
  Muaz.Loop = 12;
  strcpy(Muaz.Password, "muaz");
  Muaz.AccountBalance = 100000;



  char UserList[60][40] = {"ryan","ryan asif",  "shayan","shayan siddiqui",  "ahmed","ahmed dayan",  "khuzema","khuzema afridi", "fawad","fawad ahmed",  "talha","talha qadri",  "muaz","muaz khan",                                                                                                                                                                                                        };                
  /* do { */

  printf("\n Enter name \n\n > ");
  gets(Username);

  strlwr(Username);

  /* fgets(Username,MAXLENGTH,stdin); */  
  //fgets is not working, lol


  while (Ryan.Loop < 2 ) {

    if ( strcmp(Username, UserList[Ryan.Loop]) == 0 ) {

      Ryan.Found = 1;

      break;
    }
    Ryan.Loop++;
  }



  while (Shayan.Loop <= 3) {

    if ( strcmp(Username, UserList[Shayan.Loop]) == 0 ) {

      Shayan.Found = 1;

      break;
    }
    Shayan.Loop++;
  }

  /* if ( Shayan.Found ) { */

  /*   printf("\n You are Shayan"); */
  /*   return 0; */
  /* } */


  while (Ahmed.Loop <= 5 ) {

    if ( strcmp(Username, UserList[Ahmed.Loop]) == 0 ) {

      Ahmed.Found = 1;

      break;
    }
    Ahmed.Loop++;
  }

  /* if ( Ahmed.Found ) { */

  /*   printf("\n You are Ahmed"); */
  /*   return 0; */
  /* } */


  /* while (ZainLoop <= 26  ) { */

  /*   if ( strcmp(Username, UserList[ZainLoop]) == 0 ) { */

  /*     ZainFound = 1; */

  /*     break; */
  /*   } */
  /*     ZainLoop++; */
  /* } */

  while (Khuzema.Loop <= 7) {

    if ( strcmp(Username, UserList[Khuzema.Loop]) == 0 ) {

      Khuzema.Found  = 1;

      break;
    }
    Khuzema.Loop++;
  }


  while (Fawad.Loop <= 9 ) {

    if ( strcmp(Username, UserList[Fawad.Loop]) == 0 ) {

      Fawad.Found = 1;

      break;
    }
    Fawad.Loop++;
  }

  while (Talha.Loop <= 11 ) {

    if ( strcmp(Username, UserList[Talha.Loop]) == 0 ) {

      Talha.Found = 1;

      break;
    }
    Talha.Loop++;
  }

  while (Muaz.Loop <= 13 ) {

    if ( strcmp(Username, UserList[Muaz.Loop]) == 0 ) {

      Muaz.Found = 1;

      break;
    }
    Muaz.Loop++;
  }

  printf("\n Enter password \n\n > ");
  /* fgets(GivenPassword,sizeof(GivenPassword),stdin); */



  while (1) {

    char ch = getch();

    if (input_length > max_length) {

      printf("\n\n \"Hackers will be terrified\" \n");
      return 0;
    }

    if ( ch == '\r' ) {
      GivenPassword[s] = '\0';
      break;
    }

    if ( ch == '\b' ) {

      if (s > 0) {
	s--;
	printf("\b \b");

      }
    }

    else {
      GivenPassword[s] = ch;
      printf("*");
      strlwr(GivenPassword);
      s++;
    }

  }


  /* printf("\n\n Given Password : %s",GivenPassword); */



  //Tells the user to add special characters to name ( if name matches from UserList and password matches "User.Password" )

  if ( Ryan.Found && strcmp(User.Password,GivenPassword)==0  ||  Shayan.Found && strcmp(User.Password,GivenPassword)==0  ||  Ahmed.Found && strcmp(User.Password,GivenPassword)==0  ||  Khuzema.Found && strcmp(User.Password,GivenPassword)==0  ||  Fawad.Found && strcmp(User.Password,GivenPassword)==0  ||  Talha.Found && strcmp(User.Password,GivenPassword)==0  ||  Muaz.Found && strcmp(User.Password,GivenPassword)==0 ) {

    printf("\n\n There is a similar name in the Members List.Consider adding \n special characters between full name or after first name.");
    printf("\n\n\t  [y] yes    [n] no \n\n  > ");
    scanf("%s",&Permission_SpecialChars);

    if (Permission_SpecialChars == 'y') {
      goto down;

    }

    if ( Permission_SpecialChars == 'n') {
      return 0;
    }

  }


  while (  Ryan.Found && strcmp(User.Password,GivenPassword)==0  ||  Shayan.Found && strcmp(User.Password,GivenPassword)==0  ||  Ahmed.Found && strcmp(User.Password,GivenPassword)==0  ||  Khuzema.Found && strcmp(User.Password,GivenPassword)==0  ||  Fawad.Found && strcmp(User.Password,GivenPassword)==0  ||  Talha.Found && strcmp(User.Password,GivenPassword)==0  ||  Muaz.Found && strcmp(User.Password,GivenPassword)==0 && Permission_SpecialChars != 'y' && Permission_SpecialChars != 'n') {

    printf("\n Enter 'y' or 'n' : ");
    scanf("%s",&Permission_SpecialChars);
    scanf("%*[^\n]"); 

    if (Permission_SpecialChars == 'y') {
      goto down;
    }

    if ( Permission_SpecialChars == 'n') {
      return 0;
    }


  }

  down:

  if (Permission_SpecialChars == 'y') {


    printf("\n Re-enter name \n\n > ");
    scanf("%s",&Username);

    printf("\n New name : %s",Username);
    sleep(delay);

  }

  if ( Permission_SpecialChars == 'n') {
    return 0;
  }





  //Checks for both Username (Within UserList) and password (Their own) 

  if ( Ryan.Found && strcmp(Ryan.Password,GivenPassword)==0  ||  Shayan.Found && strcmp(Shayan.Password,GivenPassword)==0  ||  Ahmed.Found && strcmp(Ahmed.Password,GivenPassword)==0  ||  Khuzema.Found && strcmp(Khuzema.Password,GivenPassword)==0  ||  Fawad.Found && strcmp(Fawad.Password,GivenPassword)==0  ||  Talha.Found && strcmp(Talha.Password,GivenPassword)==0  ||  Muaz.Found && strcmp(Muaz.Password,GivenPassword)==0 ||  strcmp(User.Password,GivenPassword)==0 ) {

    Verifying();
    goto Main_Display; 
  }


  //Checks for both Username (Not in UserList) and password (User.Password) 

  if ( !Ryan.Found && strcmp(User.Password,GivenPassword)==0  ||  !Shayan.Found && strcmp(User.Password,GivenPassword)==0  ||  !Ahmed.Found && strcmp(User.Password,GivenPassword)==0  ||  !Khuzema.Found && strcmp(User.Password,GivenPassword)==0  ||  !Fawad.Found && strcmp(User.Password,GivenPassword)==0  ||  !Talha.Found && strcmp(User.Password,GivenPassword)==0  ||  !Muaz.Found && strcmp(User.Password,GivenPassword)==0 ) {

    User.Found +=1;
    Verifying();
    goto Main_Display;

  }

  //Checks for both Username (Not in UserList) and password ( not User.Password) 

  if ( !Ryan.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Shayan.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Ahmed.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Khuzema.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Fawad.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Talha.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Muaz.Found && strcmp(User.Password,GivenPassword)!=0 ) {

    return 0;          
  }

  Main_Display:

  system("cls");

  WELCOME_S();




  printf("\n   [1] Deposite Money \t  [4] Account Details \n");
  printf("\n   [2] Withdraw Money \t  [5] Transaction Details \n");
  printf("\n   [3] Transfer Money \t  [6] Exit \n");

  /* printf("\n (R : %d)  (F : %d)  (K : %d)  (T : %d)  (Ahme : %d)  (M : %d)  (S : %d) ",Ryan.Found,Fawad.Found,Khuzema.Found,Talha.Found,Ahmed.Found,Muaz.Found,Shayan.Found); */

  do {


  printf("\n\n   Input : ");
  choice = _getche();
  Beep();

  if ( choice == 49 ) {  // Means 1;

    system("cls");
    printf("\n\n --DEPOSITE MONEY--");
    printf("\n\n  Enter amount : ");
    scanf("%15d",&deposit);

    if (Ryan.Found) {

      Ryan.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Ryan.AccountBalance);
      transaction += 1;
    }
    
    if (Shayan.Found) {

      Shayan.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Shayan.AccountBalance);
      transaction += 1;
    }
    
    if (Ahmed.Found) {

      Ahmed.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Ahmed.AccountBalance);
      transaction += 1;
    }
    
    if (Fawad.Found) {

      Fawad.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Fawad.AccountBalance);
      transaction += 1;
    }
    
    if (Talha.Found) {

      Talha.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Talha.AccountBalance);
      transaction += 1;
    }
    
    if (Khuzema.Found) {

      Khuzema.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Khuzema.AccountBalance);
      transaction += 1;
    }
    
    if (Muaz.Found) {

      Muaz.AccountBalance += deposit; 
      printf("\n --Money Deposited--\n\n");
      printf("  Now Balance : %d\n\n",Muaz.AccountBalance);
      transaction += 1;
    }
    

  } //End of DEPOSITE MONEY

  if ( choice == 50 ) {  // Means 2;
			 
    system("cls");
    printf("\n\n --WITHDRAW MONEY--");
    printf("\n\n  Enter amount : ");
    scanf("%15d",&withdraw);

    if ( withdraw > Ryan.AccountBalance || withdraw > Shayan.AccountBalance || withdraw > Ahmed.AccountBalance || withdraw > Fawad.AccountBalance || withdraw > Talha.AccountBalance || withdraw > Khuzema.AccountBalance || withdraw > Muaz.AccountBalance ) {

      printf("\n \"Insufficient funds for this transaction\".");
      transaction -= 1;
      sleep(delay2);
      goto Main_Display;
    }



    if (Ryan.Found) {

      Ryan.AccountBalance -= withdraw; 
      printf("\n\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Ryan.AccountBalance);
      transaction += 1;
    }

    if (Shayan.Found) {

      Shayan.AccountBalance -= withdraw; 
      printf("\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Shayan.AccountBalance);
      transaction += 1;
    }

    if (Ahmed.Found) {

      Ahmed.AccountBalance -= withdraw; 
      printf("\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Ahmed.AccountBalance);
      transaction += 1;
    }

    if (Fawad.Found) {

      Fawad.AccountBalance -= withdraw; 
      printf("\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Fawad.AccountBalance);
      transaction += 1;
    }

    if (Talha.Found) {

      Talha.AccountBalance -= withdraw; 
      printf("\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Talha.AccountBalance);
      transaction += 1;
    }

    if (Khuzema.Found) {

      Khuzema.AccountBalance -= withdraw; 
      printf("\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Khuzema.AccountBalance);
      transaction += 1;
    }

    if (Muaz.Found) {

      Muaz.AccountBalance -= withdraw; 
      printf("\n --Money Withdrawn--\n\n");
      printf("  Now Balance : %d\n\n",Muaz.AccountBalance);
      transaction += 1;
    }




  } //End of WITHDRAW MONEY;

  if ( choice == 51 ) { //Means 3;

    system("cls");
    printf("\n\n   --TRANSFER MONEY--");
  }

  if ( choice == 52 ) { //Means 4;

    system("cls");
    printf("\n\n   --ACCOUNT DETAILS--");
  }

  if ( choice == 53 ) { //Means 5;

    system("cls");
    printf("\n\n   --TRANSACTION DETAILS--");
  }

  if ( choice == 54 ) { //Means e;

    return 0;
  }

  /* while ( choice != 49 || choice != 50 || choice != 51 || choice != 52 || choice != 53 || choice != 54) { */
  /*   goto Main_Display; */
  /* } */


  printf("  Press any key : ");
  after_transaction = _getche();


  if ( after_transaction != 0 ) {
    goto Main_Display;
  }

  /* if ( transaction >= 1 ) { */
  /*   /1* sleep(delay2); *1/ */
  /*   /1* goto Main_Display; *1/ */
  /* } */

  if ( choice == 49 || choice == 50 || choice == 51 || choice == 52 || choice == 53 || choice == 54 ) {
    break;
  }


  } while ( choice != 49 || choice != 50 || choice != 51 || choice != 52 || choice != 53 || choice != 54);


  /* /1* } *1/ */
  /*  /1* while (Permission_SpecialChars=='y'); *1/ */











  /*  /1* if ( Ryan.Found || Shayan.Found || Ahmed.Found || Khuzema.Found || Fawad.Found || Talha.Found || Muaz.Found) { *1/ */

  /*  /1*   printf("\n You are invited"); *1/ */
  /*  /1*   return 0; *1/ */
  /*  /1* } *1/ */

  /*  /1* else { *1/ */

  /*  /1*   printf("\n Not invited"); *1/ */
  /*  /1*   return 0; *1/ */
  /*  /1* } *1/ */


  /* //Username and password are correct */

  /*  /1* if ( Ryan.Found && strcmp(Password,Ryan.Password) == 0 || Shayan.Found && strcmp(Password,Shayan.Password) == 0 || Ahmed.Found && strcmp(Password,Ahmed.Password) == 0 || Khuzema.Found && strcmp(Password,Khuzema.Password) == 0 || Fawad.Found && strcmp(Password,Fawad.Password) == 0 || Talha.Found && strcmp(Password,Talha.Password) == 0 || Muaz.Found && strcmp(Password,Muaz.Password) == 0 ) { *1/ */

  /*  /1*   printf("\n WELCOME_S --%s--",Username); *1/ */
  /*  /1*   return 0; *1/ */
  /*  /1* } *1/ */



  /*  //If Username is on the UserList and Password is User.password */


  /* /1*    while(User.Loop <55 ) { *1/ */

  /* /1*    if ( strcmp(Username,UserList[User.Loop])==0 && strcmp(Password,User.Password) == 0 ) { *1/ */

  /* /1*      printf("\n WELCOME_S --%s--",Username); *1/ */
  /* /1*    } *1/ */

  /* /1*    } *1/ */ 







  return 0;

}






/* char Ryan[10] = "Ryan Asif"; */
/* char Ryan2[10] = "Ryan asif"; */
/* char Ryan3[8] = "ryan"; */
/* char Ryan4[8] = "Ryan"; */
/* int RyanBalance = 391800; */
/* char RyanPassword[8] = "Nayr"; */
/* char RyanRecentStatus = 0; */


/* char Shayan[16] = "Shayan Siddiqui"; */
/* int ShayanBalance = 149280; */
/* char ShayanPassword[8] = "Nayahs"; */
/* char ShayanRecentStatus = 0; */


/* printf("\n Enter your name \n\n > "); */
/* gets(Username); */


/* //Play */



/*  while ( strcmp(Username,Ryan) == 0 || strcmp(Username,Ryan2) == 0  || strcmp(Username,Ryan3) == 0 || strcmp(Username,Ryan4) == 0 ) { */

/*   printf("\n A similar name is detected.Consider adding some number to differentiate. \n (after name)\n "); */
/*   break; */
/* } */

/* printf("\n Enter password \n\n > "); */
/* scanf("%12s",&password); */

/*  if ( strcmp(password,Userpassword) == 0 ) { */

/*   printf("\n True \n"); */
/*   printf("\n %s \n",Username); */
/* } */


/*  else if ( strcmp(password,RyanPassword) == 0 ) { */

/*   printf("\n Welcome \n"); */
/* } */


/* else { */

/*   printf("\n False \n"); */
/*   return 0; */
/* } */

/* printf("\n Entered Successfully! \n"); */
