// STATUS : (+)case 51 adds; (+)Ghost Access; arrange user ac no.;  

						/* For adding new Users :
						 
						 1) Increase COUNTER
						 2) increase user_data[+]; (if needed) */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include "Beep.c"

#define MAXLENGTH 12
#define COUNTER 7 

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

void Directing() {

 printf("\n\n  Directing");

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

  char Password[MAXLENGTH];
  char Username[40];
  char Search_user[30];
  char choice;
  char search;
  char display_all;

  int CurrentUser = 0;     //tracks current user
  int DisplayUsers = 0;    //displays all users and account no.
  int f_TransferUser = 0;  //finds user to transfer money
  int PasswordLoop = 0;    //password loop
  int AccCheck = 0;        //checks acc no. is correct
  int input_length = strlen(Password);
  int max_length = 23;
  int deposit;
  int withdraw;
  int transfer;
  int acc_no;
  int transaction = 0;
  int balance = 0;
  int after_transaction = 0;


  struct Users {

    int found = 0;
    char password[MAXLENGTH];
    int AccountBalance;
    int Account_no;
    char name[MAXLENGTH];
    char fullname[25];

  };

  struct Users Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz,Ali;

  Ryan.found;
  strcpy(Ryan.password, "ryan");
  Ryan.AccountBalance = 100000;
  Ryan.Account_no = 2012;
  strcpy(Ryan.name, "ryan");
  strcpy(Ryan.fullname, "ryan asif");
  

  Shayan.found;
  strcpy(Shayan.password, "shayan");
  Shayan.AccountBalance = 100000;
  Shayan.Account_no = 2013;
  strcpy(Shayan.name, "shayan");
  strcpy(Shayan.fullname, "shayan siddiqui");

  Ahmed.found;
  strcpy(Ahmed.password, "ahmed");
  Ahmed.AccountBalance = 100000;
  Ahmed.Account_no = 2014;
  strcpy(Ahmed.name, "ahmed");
  strcpy(Ahmed.fullname, "ahmed dayan");


  Khuzema.found;
  strcpy(Khuzema.password, "khuzema");
  Khuzema.AccountBalance = 100000;
  Khuzema.Account_no = 2015;
  strcpy(Khuzema.name, "khuzema");
  strcpy(Khuzema.fullname, "khuzema afridi");


  Fawad.found;
  strcpy(Fawad.password, "fawad");
  Fawad.AccountBalance = 100000;
  Fawad.Account_no = 2016;
  strcpy(Fawad.name, "fawad");
  strcpy(Fawad.fullname, "fawad ahmed");


  Talha.found;
  strcpy(Talha.password, "talha");
  Talha.AccountBalance = 100000;
  Talha.Account_no = 2017;
  strcpy(Talha.name, "talha");
  strcpy(Talha.fullname, "talha qadri");


  Muaz.found;
  strcpy(Muaz.password, "muaz");
  Muaz.AccountBalance = 100000;
  Muaz.Account_no = 2018;
  strcpy(Muaz.name, "muaz");
  strcpy(Muaz.fullname, "muaz khan");


  Ali.found;
  strcpy(Ali.password, "ali");
  Ali.AccountBalance = 100000;
  Ali.Account_no = 2019;
  strcpy(Ali.name, "ali");
  strcpy(Ali.fullname, "muhammad ali raza");


  struct Users user_data[100]= {Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz,Ali};

  printf("\n Enter name \n\n > ");
  fgets(Username,sizeof(Username),stdin);
  strlwr(Username);

  //This removes the \n from fgets;
  size_t len = strlen(Username);
    if (len > 0 && Username[len - 1] == '\n') {
        Username[len - 1] = '\0'; 
    }


  while (CurrentUser <= COUNTER) {

    if ( strcmp(user_data[CurrentUser].name,Username)==0 || strcmp(user_data[CurrentUser].fullname,Username)==0) {
      break;
    }
    CurrentUser++;
  }


   if ( strcmp(user_data[CurrentUser].name,Username)!=0 && strcmp(user_data[CurrentUser].fullname,Username)!=0) {
      printf("\n Username not found\n");
      return 0;
    }



  printf("\n Enter password \n\n > ");

  while (1) {

   char ch = getch();

   if (input_length > 20) {

    printf("\n\n \"Password wasn't that long\" \n");
    return 0;
   }

   if ( ch == '\r' ) {
    Password[PasswordLoop] = '\0';
    break;
   }

   if ( ch == '\b' ) {

    if (PasswordLoop > 0) {
     PasswordLoop--;
     printf("\b \b");

    }
   }

   else {
    Password[PasswordLoop] = ch;
    printf("*");
    strlwr(Password);
    PasswordLoop++;
   }

  }

   if ( strcmp(user_data[CurrentUser].password,Password)==0 ) {  
      user_data[CurrentUser].found = 1;
    }

   

   else {
      printf("\n\n Password not found\n");
      return 0;
   }




   Directing();

   do {


    do {

    system("cls");
    WELCOME_S();

    printf("\n   [1] Deposite Money \t  [4] Account Details \n");
    printf("\n   [2] Withdraw Money \t  [5] Transaction Details \n");
    printf("\n   [3] Transfer Money \t  [6] Exit \n");


    printf("\n\n   Input : ");
    choice = _getche();
    Beep();

    if ( choice == 49 || choice == 50 || choice == 51 || choice == 52 || choice == 53 || choice == 54 ) {
     break;
    }

    } while ( choice != 49 || choice != 50 || choice != 51 || choice != 52 || choice != 53 || choice != 54);


    switch (choice) {

     case 49: //Means 1;

      system("cls");

      transaction += 1;

      printf("\n\n  DEPOSITE MONEY\n");
      printf("----------------------------------");
      /* printf("__________________________________"); */
      printf("\n\n  Enter amount : ");
      scanf("%15d",&deposit);

      if ( deposit <= 0 ) {
       printf("\n\n \"Invalid amount\".\n\n");
       transaction -= 1;
      }

      if ( deposit > 0 ) {
      user_data[CurrentUser].AccountBalance += deposit;
      printf("\n\n-- Money Deposited --\n\n");
      /* printf("----------------------\n\n"); */
      printf("  Now Balance : %d\n\n",user_data[CurrentUser].AccountBalance);
	/* balance = user_data[CurrentUser].AccountBalance; */
      }



	 break;

     case 50: //Means 2;

	 system("cls");

	 transaction += 1;

	 printf("\n\n  WITHDRAW MONEY\n");
	 printf("----------------------------------");
	 printf("\n\n  Enter amount : ");
	 scanf("%15d",&withdraw);


	 if ( withdraw > user_data[CurrentUser].AccountBalance) {
	  printf("\n\n \"Insufficient funds for this transaction\".\n\n");
	  transaction -= 1;
	 }

	 if ( withdraw <= 0 ) {
          printf("\n\n \"Invalid amount\".\n\n");
	  transaction -= 1;
	 }

	 if ( withdraw <= user_data[CurrentUser].AccountBalance && withdraw > 0) {
	 user_data[CurrentUser].AccountBalance -= withdraw;
	 printf("\n\n-- Money Withdrawn --\n\n");
	 printf("  Now Balance : %d\n\n",user_data[CurrentUser].AccountBalance);
	 /* balance = user_data[CurrentUser].AccountBalance; */
	 }

	 break;


     case 51: //Means 3;
	      
	 system("cls");

	 transaction += 1;
	 printf("\n\n  FINDER\n");
	 printf("----------------------------------\n\n");

	 printf("  Display all users account no. (y/n) : ");
	 display_all = getche();
	 /* scanf("%1s",&display_all); */

	 printf("\n\n");


	 if ( display_all == 'n' ) {
	  printf(" ");
	 }

	 if ( display_all == 'y') {

	  DisplayUsers = 0;

	 while ( DisplayUsers <= COUNTER ) {
	  printf("  %15s",user_data[DisplayUsers].fullname,user_data[DisplayUsers].Account_no);
	  printf("   : [ %d ]\n",user_data[DisplayUsers].Account_no);
	  DisplayUsers++;
	 }

	 /* goto search; */

	 }

	 if ( display_all != 'y' && display_all != 'n') {
	  transaction -= 1;
	  break;
	 }


	 /* search: */

	 while ( strcmp(user_data[f_TransferUser].name,Search_user)!=0 || strcmp(user_data[f_TransferUser].fullname,Search_user)!=0 ) {

	 f_TransferUser = 0;
	 printf("\n  Search User (y/n) : ");
	 search = getche();
	 /* scanf("%1s",&search); */

	 if ( search == 'y' ) {

	  printf("\n\n  Enter name : ");
	  fgets(Search_user,sizeof(Search_user),stdin);
	  strlwr(Search_user);

	  //This removes the \n from fgets;
	  size_t len = strlen(Search_user);
	  if (len > 0 && Search_user[len - 1] == '\n') {
	   Search_user[len - 1] = '\0'; 
	  }

	  while (f_TransferUser <= COUNTER) {

	   if ( strcmp(user_data[f_TransferUser].name,Search_user)==0 || strcmp(user_data[f_TransferUser].fullname,Search_user)==0) {
	    break;
	   }
	   f_TransferUser++;
	  }

	  if ( strcmp(user_data[f_TransferUser].name,Search_user)==0 || strcmp(user_data[f_TransferUser].fullname,Search_user)==0 ) {
	  printf("\n  %16s",user_data[f_TransferUser].fullname);
	  printf(": [ %d ]\n",user_data[f_TransferUser].Account_no);
	  /* printf("\n"); */
	  break; 
	   
	  }

	 }

	 if ( search == 'n' ) {
	  break;
	 }

	 if ( strcmp(user_data[f_TransferUser].name,Search_user)!=0 || strcmp(user_data[f_TransferUser].fullname,Search_user)!=0 ) {
	  printf("\n  User not found\n");
	 }
	 
	 /* bytes = 0; */

	 
	 };


	 printf("\n\n  TRANSFER MONEY\n");
	 printf("----------------------------------\n\n");
	 printf("\n  Enter amount : ");
	 scanf("%15d",&transfer);
	 printf("\n");

	 if ( transfer > user_data[CurrentUser].AccountBalance) {
	  printf("\n \"Insufficient funds for this transaction\".\n\n");
	  transaction -= 1;
	  break;
	 }

	 if ( transfer <= 0 ) {
	  printf("\n \"Invalid amount\".\n\n");
	  transaction -= 1;
	  break;
	 }

	 printf("  Enter account no. : ");
	 scanf("%4d",&acc_no);

	 getchar();

	 AccCheck = 0;

	 while ( AccCheck <= COUNTER ) {

	  if ( user_data[AccCheck].Account_no == acc_no) {
	   /* user_data[AccCheck].AccountBalance += transfer; */
	   /* printf("\n\n-- Money Transferred --\n\n"); */
	   break;
	  }
	  AccCheck++;
	 }

	 if ( user_data[AccCheck].Account_no == acc_no) {

	 if ( transfer <= user_data[CurrentUser].AccountBalance && transfer > 0 ) {
	 user_data[CurrentUser].AccountBalance -= transfer;
	   user_data[AccCheck].AccountBalance += transfer;
	   printf("\n\n-- Money Transferred --\n\n");
	 }

	 }


	 else {
	  printf("\n  Account not found\n");
	  transaction -= 1;
	 }

	
	 break;


     case 52: //Means 4;

	 system("cls");
	 balance = user_data[CurrentUser].AccountBalance;
	 printf("\n\n  ACCOUNT DETAILS\n");
	 printf("----------------------------------\n\n");

	 printf("  Name                 : %s\n",user_data[CurrentUser].fullname);
	 printf("  Password             : %s\n",user_data[CurrentUser].password);
	 printf("  Account no.          : %d\n",user_data[CurrentUser].Account_no);
	 printf("  Total Balance        : %d\n",balance);
	 printf("  No. of transactions  : %d\n\n",transaction);
	 /* printf("\n  %d transaction(s) have been made from your account\n\n",transaction); */

	 break;
	      

     case 54: //Means 6;
      return 0;
      break;

    }

      printf("\n  Press any key ...\n  ");
      after_transaction = _getch();



   } while (choice != 54) ;

  return 0;

}
