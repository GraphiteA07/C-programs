// STATUS : (+)Minor changes 

						/* For adding new Users :
						 1) Increase COUNTER
						 2) Increase Account_no ( of user )
						 2) Increase user_data[+]; (if needed) */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include "Beep.c"

#define MINLENGTH 12
#define MAXLENGTH 30 
#define COUNTER 14 

int delay3 = 60000;   /*41900*/

void WELCOME() {

 //gap from ( " ) 4 ( Only ASCII )

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

void MENU() {

 //gap from ( " ) 4 ( Only ASCII )

 printf("\n\n    eeeeeee eeeee e  eeeee    eeeeeee eeee eeeee e   e\n");
 printf("    8  8  8 8   8 8  8   8    8  8  8 8    8   8 8   8\n");
 printf("    8e 8  8 8eee8 8  8e  8    8e 8  8 8eee 8e  8 8e  8\n");
 printf("    88 8  8 88  8 8  88  8    88 8  8 88   88  8 88  8\n");
 printf("    88 8  8 88  8 8  88  8    88 8  8 88ee 88  8 88ee8\n");
 printf(" -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
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

  char user_password[MINLENGTH]; 
  char user_name[MAXLENGTH];
  char search_user[MAXLENGTH];
  char choice;
  char search;
  char display_all;

  int current_user = 0;     //tracks current user
  int display_users = 0;    //displays all users and account no.
  int ftransfer_user = 0;  //finds user to transfer money
  int password_loop = 0;    //password loop
  int acc_check = 0;        //checks acc no. is correct
  int input_length = strlen(user_password);
  int deposit;
  int withdraw;
  int transfer;
  int acc_no;
  int transaction = 0;
  int balance = 0;
  int after_transaction = 0;
  int interaction = 0;

  typedef enum {

   DEPOSIT              = 49,
   WITHDRAW             = 50,
   TRANSFER             = 51,
   ACCOUNT_DETAILS      = 52,
   TRANSACTION_DETAILS  = 53,
   EXIT                 = 54,

  }Banking_options_t;

  typedef struct {

    char password[MINLENGTH];
    int AccountBalance;
    int Account_no;
    char name[MINLENGTH];
    char fullname[MAXLENGTH];

  }Users_t;

  Users_t Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz,Ali,Saffi,Muzammil,Burhan,Tanveer,Ar_ryan,Umair,Zuhair;

  strcpy(Ryan.password, "ryan");
  Ryan.AccountBalance = 100000;
  Ryan.Account_no = 1001;
  strcpy(Ryan.name, "ryan");
  strcpy(Ryan.fullname, "ryan asif");
  

  strcpy(Shayan.password, "shayan");
  Shayan.AccountBalance = 100000;
  Shayan.Account_no = 1002;
  strcpy(Shayan.name, "shayan");
  strcpy(Shayan.fullname, "shayan siddiqui");

  strcpy(Ahmed.password, "ahmed");
  Ahmed.AccountBalance = 100000;
  Ahmed.Account_no = 1003;
  strcpy(Ahmed.name, "ahmed");
  strcpy(Ahmed.fullname, "ahmed dayan");


  strcpy(Khuzema.password, "khuzema");
  Khuzema.AccountBalance = 100000;
  Khuzema.Account_no = 1004;
  strcpy(Khuzema.name, "khuzema");
  strcpy(Khuzema.fullname, "khuzema afridi");


  strcpy(Fawad.password, "fawad");
  Fawad.AccountBalance = 100000;
  Fawad.Account_no = 1005;
  strcpy(Fawad.name, "fawad");
  strcpy(Fawad.fullname, "fawad ahmed");


  strcpy(Talha.password, "talha");
  Talha.AccountBalance = 100000;
  Talha.Account_no = 1006;
  strcpy(Talha.name, "talha");
  strcpy(Talha.fullname, "talha qadri");


  strcpy(Muaz.password, "muaz");
  Muaz.AccountBalance = 100000;
  Muaz.Account_no = 1007;
  strcpy(Muaz.name, "muaz");
  strcpy(Muaz.fullname, "muaz khan");


  strcpy(Ali.password, "ali");
  Ali.AccountBalance = 100000;
  Ali.Account_no = 1008;
  strcpy(Ali.name, "ali");
  strcpy(Ali.fullname, "muhammad ali raza");


  strcpy(Saffi.password, "saffi");
  Saffi.AccountBalance = 100000;
  Saffi.Account_no = 1009;
  strcpy(Saffi.name, "saffi");
  strcpy(Saffi.fullname, "muhammad saffi");


  strcpy(Muzammil.password, "muzammil");
  Muzammil.AccountBalance = 100000;
  Muzammil.Account_no = 1010;
  strcpy(Muzammil.name, "muzammil");
  strcpy(Muzammil.fullname, "muzammil ahmed");


  strcpy(Burhan.password, "burhan");
  Burhan.AccountBalance = 100000;
  Burhan.Account_no = 1011;
  strcpy(Burhan.name, "burhan");
  strcpy(Burhan.fullname, "syed burhan jalali");


  strcpy(Tanveer.password, "tanveer");
  Tanveer.AccountBalance = 100000;
  Tanveer.Account_no = 1012;
  strcpy(Tanveer.name, "tanveer");
  strcpy(Tanveer.fullname, "tanveer ahmed");


  strcpy(Ar_ryan.password, "ar-ryan");
  Ar_ryan.AccountBalance = 100000;
  Ar_ryan.Account_no = 1013;
  strcpy(Ar_ryan.name, "ar-ryan");
  strcpy(Ar_ryan.fullname, "ar-ryan ali");


  strcpy(Umair.password, "umair");
  Umair.AccountBalance = 100000;
  Umair.Account_no = 1014;
  strcpy(Umair.name, "umair");
  strcpy(Umair.fullname, "umair iftikhar");


  strcpy(Zuhair.password, "zuhair");
  Zuhair.AccountBalance = 100000;
  Zuhair.Account_no = 1015;
  strcpy(Zuhair.name, "zuhair");
  strcpy(Zuhair.fullname, "syed zuhair raza abbas");

  Users_t user_data[100]= {Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz,Ali,Saffi,Muzammil,Burhan,Tanveer,Ar_ryan,Umair,Zuhair};

  Users_t *ptr = user_data;

  printf("\n Enter name \n\n > ");
  fgets(user_name,sizeof(user_name),stdin);
  strlwr(user_name);

    if ( user_name[0] == '\n' ) {
     printf("\n  User not found\n");
     return 0;
    }

  //This removes the \n from fgets;
  size_t len = strlen(user_name);
    if (len > 0 && user_name[len - 1] == '\n') {
        user_name[len - 1] = '\0'; 
    }



  while (current_user <= COUNTER) {

    if ( strcmp((ptr + current_user)->name,user_name)==0 || strcmp((ptr + current_user)->fullname,user_name)==0) {
      break;
    }
    current_user++;
  }


   if ( strcmp((ptr + current_user)->name,user_name)!=0 && strcmp((ptr + current_user)->fullname,user_name)!=0) {
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
    user_password[password_loop] = '\0';
    break;
   }

   if ( ch == '\b' ) {

    if (password_loop > 0) {
     password_loop--;
     printf("\b \b");

    }
   }

   else {
    user_password[password_loop] = ch;
    printf("*");
    strlwr(user_password);
    password_loop++;
   }

  }

   if ( strcmp((ptr + current_user)->password,user_password)!=0 ) {  
      printf("\n\n Password not found\n");
      return 0;
    }

   
   Directing();

   do {


    do {

    system("cls");

    if ( interaction == 1 ) {
     MENU();
    }

    else {
    WELCOME();
    }

    printf("\n   [1] Deposite Money \t  [4] Account Details \n");
    printf("\n   [2] Withdraw Money \t  [5] Transaction Details \n");
    printf("\n   [3] Transfer Money \t  [6] Exit \n");


    printf("\n\n   Input : ");
    choice = _getche();
    Sound();

    if ( choice == 49 || choice == 50 || choice == 51 || choice == 52 || choice == 53 || choice == 54 ) {
     break;
    }

    } while ( choice != 49 || choice != 50 || choice != 51 || choice != 52 || choice != 53 || choice != 54);


    switch (choice) {

     case DEPOSIT: 

      system("cls");

      transaction += 1;

      printf("\n\n  DEPOSIT MONEY\n");
      printf("----------------------------------");
      printf("\n\n  Enter amount : ");
      scanf("%9d",&deposit);

      if ( deposit <= 0 ) {
       printf("\n\n \"Invalid amount\".\n\n");
       transaction -= 1;
      }

      if ( (ptr + current_user)->AccountBalance >= 1000099999 ) { //Adding 999999999 (9) times gives this value

       printf("\n\n \"Maximum account limit reached.\"\n\n");
       transaction -= 1;
       break; //it just shows "Now Balance" because of (deposit > 0)
      }


      if ( deposit > 0 ) {
      (ptr + current_user)->AccountBalance += deposit;
      printf("\n\n-- Money Deposited --\n\n");
      printf("  Now Balance : %d\n\n",(ptr + current_user)->AccountBalance);
      }

     getchar();  //fixes search by consuming '\n'


	 break;

     case WITHDRAW: 
	 system("cls");

	 transaction += 1;

	 printf("\n\n  WITHDRAW MONEY\n");
	 printf("----------------------------------");
	 printf("\n\n  Enter amount : ");
	 scanf("%9d",&withdraw);


	 if ( withdraw > (ptr + current_user)->AccountBalance) {
	  printf("\n\n \"Insufficient funds for this transaction\".\n\n");
	  transaction -= 1;
	 }

	 if ( withdraw <= 0 ) {
          printf("\n\n \"Invalid amount\".\n\n");
	  transaction -= 1;
	 }

	 if ( withdraw <= (ptr + current_user)->AccountBalance && withdraw > 0) {
	 (ptr + current_user)->AccountBalance -= withdraw;
	 printf("\n\n-- Money Withdrawn --\n\n");
	 printf("  Now Balance : %d\n\n",(ptr + current_user)->AccountBalance);
	 /* balance = user_data[current_user].AccountBalance; */
	 }

          getchar();  //fixes search by consuming '\n'
		      
	 break;


     case TRANSFER: 
	      
	 system("cls");

	 transaction += 1;
	 printf("\n\n  FINDER\n");
	 printf("----------------------------------\n\n");

	 printf("  Display all users account no. (y/n) : ");
	 display_all = getche();


	 if ( display_all == 'n' ) {
	  printf("\n ");
	 }

	 if ( display_all == 'y') {

	 printf("\n\n");

	  display_users = 0;

	 while ( display_users <= COUNTER ) {
	  printf("  %20s  \t: [ %d ]\n",(ptr + display_users)->fullname,(ptr + display_users)->Account_no);
	  display_users++;
	 }

	 }

	 if ( display_all != 'y' && display_all != 'n') {
	  transaction -= 1;
	  break;
	 }

	 while ( strcmp((ptr + ftransfer_user)->name,search_user)!=0 || strcmp((ptr + ftransfer_user)->fullname,search_user)!=0 ) {

	 ftransfer_user = 0;
	 printf("\n  Search User (y/n) : ");
	 search = getche();

	 
	 /* scanf("%1s",&search); */

	 if ( search == 'y' || search == 'Y' ) {

	  printf("\n\n  Enter name : ");
	  fgets(search_user,sizeof(search_user),stdin);
	  strlwr(search_user);

	  //This removes the \n from fgets;
	  size_t len = strlen(search_user);
	  if (len > 0 && search_user[len - 1] == '\n') {
	   search_user[len - 1] = '\0'; 
	  }

	  while (ftransfer_user <= COUNTER) {

	   if ( strcmp((ptr + ftransfer_user)->name,search_user)==0 || strcmp((ptr + ftransfer_user)->fullname,search_user)==0) {
	    break;
	   }
	   ftransfer_user++;
	  }

	  if ( strcmp((ptr + ftransfer_user)->name,search_user)==0 || strcmp((ptr + ftransfer_user)->fullname,search_user)==0 ) {
	  printf("\n  %16s",(ptr + ftransfer_user)->fullname);
	  printf("\t: [ %d ]",(ptr + ftransfer_user)->Account_no);
	  /* printf("\n"); */
	  break; 
	   
	  }

	 }

	 if ( search == 'n' || search == 'N' ) {
	  break;
	 }

	 if ( strcmp((ptr + ftransfer_user)->name,search_user)!=0 || strcmp((ptr + ftransfer_user)->fullname,search_user)!=0 ) {
	  printf("\n  User not found\n");
	 }
	 
	 /* bytes = 0; */
	 
	 };

	 printf("\n");


	 printf("\n\n  TRANSFER MONEY\n");
	 printf("----------------------------------\n\n");
	 printf("\n  Enter amount : ");
	 scanf("%9d",&transfer);
	 printf("\n");

	 if ( transfer > (ptr + current_user)->AccountBalance) {
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

	 acc_check = 0;

	 while ( acc_check <= COUNTER ) {

	  if ( (ptr + acc_check)->Account_no == acc_no) {
	   break;
	  }
	  acc_check++;
	 }

	 if ( (ptr + acc_check)->Account_no == acc_no) {

	 if ( transfer <= (ptr + current_user)->AccountBalance && transfer > 0 ) {
	 (ptr + current_user)->AccountBalance -= transfer;
	   (ptr + acc_check)->AccountBalance += transfer;
	   printf("\n\n-- Money Transferred --\n\n");
	 }

	 }

	 else {
	  printf("\n  Account not found\n");
	  transaction -= 1;
	 }

	
	 break;


     case ACCOUNT_DETAILS: 

	 system("cls");
	 balance = (ptr + current_user)->AccountBalance;
	 printf("\n\n  ACCOUNT DETAILS\n");
	 printf("----------------------------------\n\n");

	 printf("  Name                 : %s\n",(ptr + current_user)->fullname);
	 printf("  Password             : %s\n",(ptr + current_user)->password);
	 printf("  Account no.          : %d\n",(ptr + current_user)->Account_no);
	 printf("  Total Balance        : %d\n",balance);
	 printf("  No. of transactions  : %d\n\n",transaction);
	 /* printf("\n  %d transaction(s) have been made from your account\n\n",transaction); */

	 break;
	      

     case EXIT: 
	      
     printf("\n\n  Exited Successfully..\n");
      return 0;
      break;
    }

      printf("\n  Press any key ...\n  ");
      after_transaction = _getch();
      interaction = 1;



   } while (choice != 54) ;

  return 0;

}
