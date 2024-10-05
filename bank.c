//Password and name authentication are not completed
//Line 199 for user and password verification
//New Name doesn't accept whitespaces in names

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define MAXLENGTH 10 

int main() {

  system("cls");


  char Username[70];
  char GivenPassword[10];
  char UserPermission_AddSpecialCharacters; 



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
  strcpy(Ryan.Password, "nayr");
  Ryan.AccountBalance = 549543;

  Shayan.Found;
  Shayan.Loop = 8;
  strcpy(Shayan.Password, "nayahs");
  Shayan.AccountBalance = 573262;

  Ahmed.Found;
  Ahmed.Loop = 16;
  strcpy(Ahmed.Password, "demha");
  Ahmed.AccountBalance = 652635;

  
  Khuzema.Found;
  Khuzema.Loop = 24;
  strcpy(Khuzema.Password, "amezuhk");
  Khuzema.AccountBalance = 634162;


  Fawad.Found;
  Fawad.Loop = 32;
  strcpy(Fawad.Password, "dawaf");
  Fawad.AccountBalance = 682469;


  Talha.Found;
  Talha.Loop = 40;
  strcpy(Talha.Password, "ahlat");
  Talha.AccountBalance = 645697;


  Muaz.Found;
  Muaz.Loop = 48;
  strcpy(Muaz.Password, "zaum");
  Muaz.AccountBalance = 657395;


  
  char UserList[60][40] = {  "Ryan", "ryan", "RYAN", "Ryan Asif", "Ryan asif", "ryan Asif", "ryan asif", "RYAN ASIF",                                                 "Shayan","shayan","SHAYAN","Shayan Siddiqui","Shayan siddiqui","shayan Siddiqui","shayan siddiqui","SHAYAN SIDDIQUI",                    "Ahmed","ahmed","AHMED","Ahmed Dayan","Ahmed dayan","ahmed Dayan","ahmed dayan","AHMED DAYAN",                                          "Khuzema","khuzema","KHUZEMA","Khuzema Afridi","Khuzema afridi","khuzema Afridi","khuzema afridi","KHUZEMA AFRIDI",                      "Fawad","fawad","FAWAD","Fawad Ahmed","Fawad ahmed","fawad Ahmed","fawad ahmed","FAWAD AHMED",                                           "Talha","talha","TALHA","Talha Qadri","Talha qadri","talha Qadri","talha qadri","TALHA QADRI",                                            "Muaz","muaz","MUAZ","Muaz Khan","Muaz khan","muaz Khan","muaz khan","MUAZ KHAN",                                                                                                                                                                                                        };                
			    


  /* do { */

     printf("\n Enter name \n\n > ");
     gets(Username);


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
     scanf("%12s",&GivenPassword);

  //Checks for both Username and password
  
     if ( Ryan.Found && strcmp(Ryan.Password,GivenPassword)==0  ||  Shayan.Found && strcmp(Shayan.Password,GivenPassword)==0  ||  Ahmed.Found && strcmp(Ahmed.Password,GivenPassword)==0  ||  Khuzema.Found && strcmp(Khuzema.Password,GivenPassword)==0  ||  Fawad.Found && strcmp(Fawad.Password,GivenPassword)==0  ||  Talha.Found && strcmp(Talha.Password,GivenPassword)==0  ||  Muaz.Found && strcmp(Muaz.Password,GivenPassword)==0 /* ||  strcmp(User.Password,GivenPassword)==0*/) {

       printf("\n Wow invited");
       return 0;
     }


  //Tells the user to add special characters to name ( if name matches from UserList and password of "User.Password" is used )
  
     if ( Ryan.Found && strcmp(User.Password,GivenPassword)==0  ||  Shayan.Found && strcmp(User.Password,GivenPassword)==0  ||  Ahmed.Found && strcmp(User.Password,GivenPassword)==0  ||  Khuzema.Found && strcmp(User.Password,GivenPassword)==0  ||  Fawad.Found && strcmp(User.Password,GivenPassword)==0  ||  Talha.Found && strcmp(User.Password,GivenPassword)==0  ||  Muaz.Found && strcmp(User.Password,GivenPassword)==0 ) {

       printf("\n There is a similar name in the Members List.Consider adding \n some special characters between full name or after full name.");
       printf("\n\n [y] yes \n\n [n] no \n\n  > ");
       scanf("%s",&UserPermission_AddSpecialCharacters);


     }

       while ( UserPermission_AddSpecialCharacters != 'y' && UserPermission_AddSpecialCharacters != 'n') {

	 printf("\n Enter 'y' or 'n' : ");
	 scanf("%s",&UserPermission_AddSpecialCharacters);
	 scanf("%*[^\n]"); 
       }


       if (UserPermission_AddSpecialCharacters=='y') {


	  printf("\n Enter name \n\n > ");
	  scanf("%s",&Username);

	  printf("\n New name : %s ",Username);
       }

       if ( UserPermission_AddSpecialCharacters =='n') {
	 return 0;
       }




  /* } */
   /* while (UserPermission_AddSpecialCharacters=='y'); */





     





   /* if ( Ryan.Found || Shayan.Found || Ahmed.Found || Khuzema.Found || Fawad.Found || Talha.Found || Muaz.Found) { */

   /*   printf("\n You are invited"); */
   /*   return 0; */
   /* } */

   /* else { */

   /*   printf("\n Not invited"); */
   /*   return 0; */
   /* } */


  //Username and password are correct

   /* if ( Ryan.Found && strcmp(Password,Ryan.Password) == 0 || Shayan.Found && strcmp(Password,Shayan.Password) == 0 || Ahmed.Found && strcmp(Password,Ahmed.Password) == 0 || Khuzema.Found && strcmp(Password,Khuzema.Password) == 0 || Fawad.Found && strcmp(Password,Fawad.Password) == 0 || Talha.Found && strcmp(Password,Talha.Password) == 0 || Muaz.Found && strcmp(Password,Muaz.Password) == 0 ) { */

   /*   printf("\n WELCOME --%s--",Username); */
   /*   return 0; */
   /* } */



   //If Username is on the UserList and Password is User.password
   

/*    while(User.Loop <55 ) { */

/*    if ( strcmp(Username,UserList[User.Loop])==0 && strcmp(Password,User.Password) == 0 ) { */

/*      printf("\n WELCOME --%s--",Username); */
/*    } */

/*    } */ 





 

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

