//Password and name authentication are not completed
//Line 199 for user and password verification
//New Name doesn't accept whitespaces in names
//Main_Display added.Not completed for Re-enter users
//// return 0 due to Enter 'y' or 'n' : LINE : 343 ( No need )


#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
#define MAXLENGTH 10 

int delay2 = 60000;   /*41900*/

void WELCOME() {

  //gap from ( " ) 6 ( Only ASCII )

  printf("\n\n    e   e  e eeee e     eeee eeeee eeeeeee eeee \n");
  usleep(delay2);
  printf("    8   8  8 8    8     8  8 8  88 8  8  8 8    \n");
  usleep(delay2);
  printf("    8e  8  8 8eee 8e    8e   8   8 8e 8  8 8eee \n");
  usleep(delay2);
  printf("    88  8  8 88   88    88   8   8 88 8  8 88   \n");
  usleep(delay2);
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

void Main_Display() {


}

int main() {

  system("cls");


  char Username[40];
  char Permission_SpecialChars; 
  int delay = 1;
  int s = 0;
  char GivenPassword[20];
  int max_length = 18;
  int input_length = strlen(GivenPassword);



  struct Users {

    int Found = 0;
    int Loop;
    char Password[MAXLENGTH];
    int AccountBalance;
    
  };

  struct Users User,Ryan,Shayan,Ahmed,Khuzema,Fawad,Talha,Muaz;

  strcpy(User.Password, "password");
  User.AccountBalance = 673573;



  Ryan.Found;
  Ryan.Loop = 0;
  strcpy(Ryan.Password, "ryan");
  Ryan.AccountBalance = 549543;

  Shayan.Found;
  Shayan.Loop = 8;
  strcpy(Shayan.Password, "shayan");
  Shayan.AccountBalance = 573262;

  Ahmed.Found;
  Ahmed.Loop = 16;
  strcpy(Ahmed.Password, "ahmed");
  Ahmed.AccountBalance = 652635;

  
  Khuzema.Found;
  Khuzema.Loop = 24;
  strcpy(Khuzema.Password, "khuzema");
  Khuzema.AccountBalance = 634162;


  Fawad.Found;
  Fawad.Loop = 32;
  strcpy(Fawad.Password, "fawad");
  Fawad.AccountBalance = 682469;


  Talha.Found;
  Talha.Loop = 40;
  strcpy(Talha.Password, "talha");
  Talha.AccountBalance = 645697;


  Muaz.Found;
  Muaz.Loop = 48;
  strcpy(Muaz.Password, "muaz");
  Muaz.AccountBalance = 657395;


  
  char UserList[60][40] = {  "Ryan", "ryan", "RYAN", "Ryan Asif", "Ryan asif", "ryan Asif", "ryan asif", "RYAN ASIF",                                                 "Shayan","shayan","SHAYAN","Shayan Siddiqui","Shayan siddiqui","shayan Siddiqui","shayan siddiqui","SHAYAN SIDDIQUI",                    "Ahmed","ahmed","AHMED","Ahmed Dayan","Ahmed dayan","ahmed Dayan","ahmed dayan","AHMED DAYAN",                                          "Khuzema","khuzema","KHUZEMA","Khuzema Afridi","Khuzema afridi","khuzema Afridi","khuzema afridi","KHUZEMA AFRIDI",                      "Fawad","fawad","FAWAD","Fawad Ahmed","Fawad ahmed","fawad Ahmed","fawad ahmed","FAWAD AHMED",                                           "Talha","talha","TALHA","Talha Qadri","Talha qadri","talha Qadri","talha qadri","TALHA QADRI",                                            "Muaz","muaz","MUAZ","Muaz Khan","Muaz khan","muaz Khan","muaz khan","MUAZ KHAN",                                                                                                                                                                                                        };                
			    


  /* do { */

     printf("\n Enter name \n\n > ");
     gets(Username);
     /* fgets(Username,40,stdin); */


   while (Ryan.Loop < 8 ) {

     if ( strcmp(Username, UserList[Ryan.Loop]) == 0 ) {

       Ryan.Found = 1;

       break;
     }
       Ryan.Loop++;
   }



   while (Shayan.Loop <=15 ) {

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


   while (Ahmed.Loop <= 23 ) {

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

   while (Khuzema.Loop <= 31) {

     if ( strcmp(Username, UserList[Khuzema.Loop]) == 0 ) {

       Khuzema.Found  = 1;

       break;
     }
       Khuzema.Loop++;
   }


   while (Fawad.Loop <=39 ) {

     if ( strcmp(Username, UserList[Fawad.Loop]) == 0 ) {

       Fawad.Found = 1;

       break;
     }
       Fawad.Loop++;
   }

   while (Talha.Loop <=47 ) {

     if ( strcmp(Username, UserList[Talha.Loop]) == 0 ) {

       Talha.Found = 1;

       break;
     }
       Talha.Loop++;
   }
   
   while (Muaz.Loop <=55 ) {

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

    printf("\n\n \"I\'m sure hackers will be terrified\" \n");
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

	 Verifying();
	 goto Main_Display;

       }

  //Checks for both Username (Not in UserList) and password ( not User.Password) 

       if ( !Ryan.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Shayan.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Ahmed.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Khuzema.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Fawad.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Talha.Found && strcmp(User.Password,GivenPassword)!=0  ||  !Muaz.Found && strcmp(User.Password,GivenPassword)!=0 ) {

	 return 0;          
       }





 Main_Display:

   system("cls");
	   
  WELCOME();




  printf("\n   [1] Deposite Money \t  [4] Account Details \n");
  printf("\n   [2] Withdraw Money \t  [5] Transaction Details \n");
  printf("\n   [3] Transfer Money \t  [6] Exit \n");

  printf("\n (R : %d)  (F : %d)  (K : %d)  (T : %d)  (Ahme : %d)  (M : %d)  (S : %d) ",Ryan.Found,Fawad.Found,Khuzema.Found,Talha.Found,Ahmed.Found,Muaz.Found,Shayan.Found);


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

  /*  /1*   printf("\n WELCOME --%s--",Username); *1/ */
  /*  /1*   return 0; *1/ */
  /*  /1* } *1/ */



  /*  //If Username is on the UserList and Password is User.password */
   

/* /1*    while(User.Loop <55 ) { *1/ */

/* /1*    if ( strcmp(Username,UserList[User.Loop])==0 && strcmp(Password,User.Password) == 0 ) { *1/ */

/* /1*      printf("\n WELCOME --%s--",Username); *1/ */
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


