// STATUS : TRANSACTION_DETAILS is not active 	 

/* For adding new Users :

   1) Increase COUNTER
   2) Increase AccountNo ( of user ) */

/* Casing Structure 

   1)  Macros, enum varibles : SCREAMING_SNAKE_CASE 
   2)  Functions()           : Capital_Snake_Case 
   3)  Local Variables       : snake_case
   4)  Struct Variables,     : PascalCase
   struct name,
   enum name
*/

#include <stdio.h>                                  
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include "Beep.c"


#define MINLENGTH 25
#define MAXLENGTH 40 
#define COUNTER   15 
#define MEMORY    (COUNTER + 3)

int delay3 = 60000;   /*41900*/

void Welcome() {

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


void Menu() {

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


  /* local variables */
  char user_password[MINLENGTH]; 
  char user_name[MAXLENGTH];
  char input_transfer_user[MAXLENGTH];
  char menu_option;
  char can_search_user;
  char can_display_user;


  int masked_password      = 0;  
  int transaction          = 0;
  int balance              = 0; 
  int after_transaction    = 0;
  int interaction          = 0; // for Menu()
  /* int input_length = strlen(user_password); */
  int deposit;
  int withdraw;
  int transfer_amount;
  int acc_no;


  /* loop variables */ 
  int current_user         = 0;  //tracks current user
  int display_users        = 0;  //displays all users and account no.
  int search_transfer_user = 0;  //searches user to transfer money
  int verify_acc           = 0;  //verifies acc no. is correct


  enum BankingOptions{

    DEPOSIT              = 49,
    WITHDRAW             = 50,
    TRANSFER             = 51,
    ACCOUNT_DETAILS      = 52,
    EXIT                 = 53,
    /* TRANSACTION_DETAILS  = 54, */

  };

  struct UserDetails {

    char Password[MINLENGTH];
    int AccountBalance;
    int AccountNo;
    char Name[MINLENGTH];
    char FullName[MAXLENGTH];

  };

  struct UserDetails Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz,Ali,Saffi,Muzammil,Burhan,Tanveer,Ar_ryan,Umair,Zuhair,Mahad;

  strcpy(Ryan.Password, "ryan");
  Ryan.AccountBalance = 100000;
  Ryan.AccountNo = 1001;
  strcpy(Ryan.Name, "ryan");
  strcpy(Ryan.FullName, "ryan asif");


  strcpy(Shayan.Password, "shayan");
  Shayan.AccountBalance = 100000;
  Shayan.AccountNo = 1002;
  strcpy(Shayan.Name, "shayan");
  strcpy(Shayan.FullName, "shayan siddiqui");

  strcpy(Ahmed.Password, "ahmed");
  Ahmed.AccountBalance = 100000;
  Ahmed.AccountNo = 1003;
  strcpy(Ahmed.Name, "ahmed");
  strcpy(Ahmed.FullName, "ahmed dayan");


  strcpy(Khuzema.Password, "khuzema");
  Khuzema.AccountBalance = 100000;
  Khuzema.AccountNo = 1004;
  strcpy(Khuzema.Name, "khuzema");
  strcpy(Khuzema.FullName, "khuzema afridi");


  strcpy(Fawad.Password, "fawad");
  Fawad.AccountBalance = 100000;
  Fawad.AccountNo = 1005;
  strcpy(Fawad.Name, "fawad");
  strcpy(Fawad.FullName, "fawad ahmed");


  strcpy(Talha.Password, "talha");
  Talha.AccountBalance = 100000;
  Talha.AccountNo = 1006;
  strcpy(Talha.Name, "talha");
  strcpy(Talha.FullName, "talha qadri");


  strcpy(Muaz.Password, "muaz");
  Muaz.AccountBalance = 100000;
  Muaz.AccountNo = 1007;
  strcpy(Muaz.Name, "muaz");
  strcpy(Muaz.FullName, "muaz khan");


  strcpy(Ali.Password, "ali");
  Ali.AccountBalance = 100000;
  Ali.AccountNo = 1008;
  strcpy(Ali.Name, "ali");
  strcpy(Ali.FullName, "muhammad ali raza");


  strcpy(Saffi.Password, "saffi");
  Saffi.AccountBalance = 100000;
  Saffi.AccountNo = 1009;
  strcpy(Saffi.Name, "saffi");
  strcpy(Saffi.FullName, "muhammad saffi");


  strcpy(Muzammil.Password, "muzammil");
  Muzammil.AccountBalance = 100000;
  Muzammil.AccountNo = 1010;
  strcpy(Muzammil.Name, "muzammil");
  strcpy(Muzammil.FullName, "muzammil ahmed");


  strcpy(Burhan.Password, "burhan");
  Burhan.AccountBalance = 100000;
  Burhan.AccountNo = 1011;
  strcpy(Burhan.Name, "burhan");
  strcpy(Burhan.FullName, "syed burhan jalali");


  strcpy(Tanveer.Password, "tanveer");
  Tanveer.AccountBalance = 100000;
  Tanveer.AccountNo = 1012;
  strcpy(Tanveer.Name, "tanveer");
  strcpy(Tanveer.FullName, "tanveer ahmed");


  strcpy(Ar_ryan.Password, "ar-ryan");
  Ar_ryan.AccountBalance = 100000;
  Ar_ryan.AccountNo = 1013;
  strcpy(Ar_ryan.Name, "ar-ryan");
  strcpy(Ar_ryan.FullName, "ar-ryan ali");


  strcpy(Umair.Password, "umair");
  Umair.AccountBalance = 100000;
  Umair.AccountNo = 1014;
  strcpy(Umair.Name, "umair");
  strcpy(Umair.FullName, "umair iftikhar");


  strcpy(Zuhair.Password, "zuhair");
  Zuhair.AccountBalance = 100000;
  Zuhair.AccountNo = 1015;
  strcpy(Zuhair.Name, "zuhair");
  strcpy(Zuhair.FullName, "syed zuhair raza abbas");


  strcpy(Mahad.Password, "mahad");
  Mahad.AccountBalance = 100000;
  Mahad.AccountNo = 1016;
  strcpy(Mahad.Name, "mahad");
  strcpy(Mahad.FullName, "muhammad mahad asif");

  struct UserDetails user_data[MEMORY]= {Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz,Ali,Saffi,Muzammil,Burhan,Tanveer,Ar_ryan,Umair,Zuhair,Mahad};




  struct UserDetails *ptr = user_data;

  printf("\n Enter name \n\n > ");
  fgets(user_name,sizeof(user_name),stdin);
  strlwr(user_name);

  if ( user_name[0] == '\n' ) {
    printf("\n Error: User not found\n");
    return 0;
  }

  //This removes the \n from fgets;
  size_t len = strlen(user_name);
  if (len > 0 && user_name[len - 1] == '\n') {
    user_name[len - 1] = '\0'; 
  }



  while (current_user <= COUNTER) {

    if ( strcmp((ptr + current_user)->Name,user_name)==0 || strcmp((ptr + current_user)->FullName,user_name)==0) {
      break;
    }
    current_user++;
  }


  if ( strcmp((ptr + current_user)->Name,user_name)!=0 && strcmp((ptr + current_user)->FullName,user_name)!=0) {
    printf("\n Error: Username not found\n");
    return 0;
  }



  printf("\n Enter password \n\n > ");

  while (1) {

    char ch = getch();

    if (masked_password >= 20) {

      printf("\n\n Error: Password wasn't that long \n");
      return 0;
    }

    if ( ch == '\r' ) {
      user_password[masked_password] = '\0';
      break;
    }

    if ( ch == '\b' ) {

      if (masked_password > 0) {
	masked_password--;
	printf("\b \b");

      }
    }

    else {
      user_password[masked_password] = ch;
      printf("*");
      strlwr(user_password);
      masked_password++;
    }

  }

  if ( strcmp((ptr + current_user)->Password,user_password)!=0 ) {  
    printf("\n\n Error: Password not found\n");
    return 0;
  }


  Directing();

  do {


    do {

      system("cls");

      if ( interaction == 1 ) {
	Menu();
      }

      else {
	Welcome();
      }

      printf("\n   [1] Deposite Money \t  [3] Transfer Money \n");
      printf("\n   [2] Withdraw Money \t  [4] Account Details \n");
      printf("\n   [5] Exit\n");


      printf("\n\n   Input : ");
      menu_option = getche();
      Sound();

      if ( menu_option == DEPOSIT || menu_option == WITHDRAW || menu_option == TRANSFER || menu_option == ACCOUNT_DETAILS || menu_option == EXIT) {
	break;
      }

    } while ( menu_option == DEPOSIT || menu_option == WITHDRAW || menu_option == TRANSFER || menu_option == ACCOUNT_DETAILS || menu_option == EXIT);


    switch (menu_option) {

      case DEPOSIT: 

	system("cls");

	transaction += 1;

	printf("\n\n  DEPOSIT MONEY\n");
	printf("----------------------------------");
	printf("\n\n  Enter amount : ");
	scanf("%9d",&deposit);

	if ( deposit <= 0 ) {
	  printf("\n\n  Error: Invalid amount.\n\n");
	  transaction -= 1;
	}

	if ( (ptr + current_user)->AccountBalance >= 1000099999 ) { //Adding 999999999 (9) times gives this value

	  printf("\n\n  Error: Maximum account limit reached.\n\n");
	  transaction -= 1;
	  break; //it just shows "Now Balance" because of (deposit > 0)
	}


	if ( deposit > 0 ) {
	  (ptr + current_user)->AccountBalance += deposit;
	  printf("\n\n-- Money Deposited --\n\n");
	  printf("  Now Balance : %d\n\n",(ptr + current_user)->AccountBalance);
	}

	getchar();  //fixes can_search_user by consuming '\n'


	break;

      case WITHDRAW: 
	system("cls");

	transaction += 1;

	printf("\n\n  WITHDRAW MONEY\n");
	printf("----------------------------------");
	printf("\n\n  Enter amount : ");
	scanf("%9d",&withdraw);


	if ( withdraw > (ptr + current_user)->AccountBalance) {
	  printf("\n\n  Error: Insufficient funds for this transaction.\n\n");
	  transaction -= 1;
	}

	if ( withdraw <= 0 ) {
	  printf("\n\n  Error: Invalid amount.\n\n");
	  transaction -= 1;
	}

	if ( withdraw <= (ptr + current_user)->AccountBalance && withdraw > 0) {
	  (ptr + current_user)->AccountBalance -= withdraw;
	  printf("\n\n-- Money Withdrawn --\n\n");
	  printf("  Now Balance : %d\n\n",(ptr + current_user)->AccountBalance);
	  /* balance = user_data[current_user].AccountBalance; */
	}

	getchar();  //fixes can_search_user by consuming '\n'

	break;


      case TRANSFER: 

	system("cls");

	transaction += 1;
	printf("\n\n  FINDER\n");
	printf("----------------------------------\n\n");

	printf("  Display all users account no. (y/n) : ");
	/* can_display_user = getche(); */
	scanf("%1s",&can_display_user);
	getchar();


	if ( can_display_user == 'n' ) {
	  printf("\n ");
	}

	if ( can_display_user == 'y') {

	  printf("\n\n");

	  display_users = 0;

	  while ( display_users <= COUNTER ) {
	    printf("  %20s  \t: [ %d ]\n",(ptr + display_users)->FullName,(ptr + display_users)->AccountNo);
	    display_users++;
	  }

	}

	if ( can_display_user != 'y' && can_display_user != 'n') {
	  transaction -= 1;
	  break;
	}

	while ( strcmp((ptr + search_transfer_user)->Name,input_transfer_user)!=0 || strcmp((ptr + search_transfer_user)->FullName,input_transfer_user)!=0 ) {

	  printf("\n  Search User (y/n) : ");
	  /* can_search_user = getche(); */
	  scanf("%1s",&can_search_user);
	  getchar();

	  if ( can_search_user == 'y' || can_search_user == 'Y' ) {

	    printf("\n  Enter name : ");
	    fgets(input_transfer_user,sizeof(input_transfer_user),stdin);
	    strlwr(input_transfer_user);

	    //This removes the \n from fgets;
	    size_t len = strlen(input_transfer_user);
	    if (len > 0 && input_transfer_user[len - 1] == '\n') {
	      input_transfer_user[len - 1] = '\0'; 
	    }


	    search_transfer_user = 0;
	    for (search_transfer_user = 0;search_transfer_user <= COUNTER;search_transfer_user++) {


	      if ( strcmp((ptr + search_transfer_user)->Name,input_transfer_user)==0 || strcmp((ptr + search_transfer_user)->FullName,input_transfer_user)==0) {
		printf("\n  %16s",(ptr + search_transfer_user)->FullName);
		printf("\t: [ %d ]",(ptr + search_transfer_user)->AccountNo);
		/* printf("\n"); */
		break;
	      }
	    }

	    if ( strcmp((ptr + search_transfer_user)->Name,input_transfer_user)!=0 && strcmp((ptr + search_transfer_user)->FullName,input_transfer_user)!=0 ) {
	      printf("\n  Error: User not found\n");
	    }

	  }

	  if ( strcmp((ptr + search_transfer_user)->Name,input_transfer_user)==0 || strcmp((ptr + search_transfer_user)->FullName,input_transfer_user)==0) {
	    break;
	  }



	  if ( can_search_user == 'n' || can_search_user == 'N' ) {
	    break;
	  }




	  /* bytes = 0; */
	};

	printf("\n");


	printf("\n\n  TRANSFER MONEY\n");
	printf("----------------------------------\n\n");
	printf("\n  Enter amount : ");
	scanf("%9d",&transfer_amount);
	printf("\n");

	if ( transfer_amount > (ptr + current_user)->AccountBalance) {
	  printf("\n  Error: Insufficient funds for this transaction\".\n\n");
	  getchar();
	  transaction -= 1;
	  break;
	}

	if ( transfer_amount <= 0 ) {
	  printf("\n  Error: Invalid amount.\n\n");
	  transaction -= 1;
	  break;
	}

	printf("  Enter account no. : ");
	scanf("%4d",&acc_no);

	getchar();


	while ( verify_acc <= COUNTER ) {

	  if ( (ptr + verify_acc)->AccountNo == acc_no) {
	    break;
	  }
	  verify_acc++;
	}

	if ( (ptr + verify_acc)->AccountNo == acc_no) {

	  if ( transfer_amount <= (ptr + current_user)->AccountBalance && transfer_amount > 0 ) {
	    (ptr + current_user)->AccountBalance -= transfer_amount;
	    (ptr + verify_acc)->AccountBalance += transfer_amount;
	    printf("\n\n-- Money Transferred --\n\n");
	  }

	}

	else {
	  printf("\n  Error: Account not found\n");
	  transaction -= 1;
	}


	break;


      case ACCOUNT_DETAILS: 

	system("cls");
	balance = (ptr + current_user)->AccountBalance;
	printf("\n\n  ACCOUNT DETAILS\n");
	printf("----------------------------------\n\n");

	printf("  Name                 : %s\n",(ptr + current_user)->FullName);
	printf("  Password             : %s\n",(ptr + current_user)->Password);
	printf("  Account no.          : %d\n",(ptr + current_user)->AccountNo);
	printf("  Total Balance        : %d\n",balance);
	printf("  No. of transactions  : %d\n\n",transaction);
	/* printf("\n  %d transaction(s) have been made from your account\n\n",transaction); */

	break;


	/* case TRANSACTION_DETAILS: */

	/* break; */


      case EXIT: 

	printf("\n\n  Exited Successfully..\n");
	return 0;
	break;
    }

    printf("\n  Press any key ...\n  ");
    after_transaction = _getch();
    interaction = 1;



  } while ( menu_option == DEPOSIT || menu_option == WITHDRAW || menu_option == TRANSFER || menu_option == ACCOUNT_DETAILS || menu_option == EXIT) ;

  return 0;

}



