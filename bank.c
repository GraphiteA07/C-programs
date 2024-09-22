//Password and name authentication are not completed
//Add names fawad,talha,Muaz

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {

  system("cls");


  //for Loops
  
  int RyanLoop = 0;
  int ShayanLoop = 8;
  int AhmedLoop = 16;
  int KhuzemaLoop = 24;
  int FawadLoop = 32;
  int TalhaLoop = 40;
  int MuazLoop = 48;
  /* int ZainLoop = 0; */
  

 //If username is found in UserList
  int RyanFound = 0;
  int ShayanFound = 0;
  int AhmedFound = 0;
  int ZainFound = 0;
  int KhuzemaFound = 0;
  int FawadFound = 0;
  int TalhaFound = 0;
  int MuazFound = 0;
 



  char Username[70];
  /* char Userpassword[10] = "password"; */
  /* char password[10]; */


  char UserList[60][40] = {  "Ryan", "ryan", "RYAN", "Ryan Asif", "Ryan asif", "ryan Asif", "ryan asif", "RYAN ASIF",                                                 "Shayan","shayan","SHAYAN","Shayan Siddiqui","Shayan siddiqui","shayan Siddiqui","shayan siddiqui","SHAYAN SIDDIQUI",                    "Ahmed","ahmed","AHMED","Ahmed Dayan","Ahmed dayan","ahmed Dayan","ahmed dayan","AHMED DAYAN",                                          "Khuzema","khuzema","KHUZEMA","Khuzema Afridi","Khuzema afridi","khuzema Afridi","khuzema afridi","KHUZEMA AFRIDI",                      "Fawad","fawad","FAWAD","Fawad Ahmed","Fawad ahmed","fawad Ahmed","fawad ahmed","FAWAD AHMED",                                           "Talha","talha","TALHA","Talha Qadri","Talha qadri","talha Qadri","talha qadri","TALHA QADRI",                                            "Muaz","muaz","MUAZ","Muaz Khan","Muaz khan","muaz Khan","muaz khan","MUAZ KHAN",                                                                                                                                                                                                        };                
			    





     printf("\n Enter name \n\n > ");
     gets(Username);
  

   while (RyanLoop < 8 ) {

     if ( strcmp(Username, UserList[RyanLoop]) == 0 ) {

       RyanFound = 1;

       break;
     }
       RyanLoop++;
   }



   while (ShayanLoop <=15 ) {

     if ( strcmp(Username, UserList[ShayanLoop]) == 0 ) {

       ShayanFound = 1;

       break;
     }
       ShayanLoop++;
   }

   /* if ( ShayanFound ) { */

   /*   printf("\n You are Shayan"); */
   /*   return 0; */
   /* } */


   while (AhmedLoop <= 23 ) {

     if ( strcmp(Username, UserList[AhmedLoop]) == 0 ) {

       AhmedFound = 1;

       break;
     }
       AhmedLoop++;
   }

   /* if ( AhmedFound ) { */

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

   while (KhuzemaLoop <= 31) {

     if ( strcmp(Username, UserList[KhuzemaLoop]) == 0 ) {

       KhuzemaFound  = 1;

       break;
     }
       KhuzemaLoop++;
   }


   while (FawadLoop <=39 ) {

     if ( strcmp(Username, UserList[FawadLoop]) == 0 ) {

       FawadFound = 1;

       break;
     }
       FawadLoop++;
   }

   while (TalhaLoop <=47 ) {

     if ( strcmp(Username, UserList[TalhaLoop]) == 0 ) {

       TalhaFound = 1;

       break;
     }
       TalhaLoop++;
   }
   
   while (MuazLoop <=55 ) {

     if ( strcmp(Username, UserList[MuazLoop]) == 0 ) {

       MuazFound = 1;

       break;
     }
       MuazLoop++;
   }

   if ( RyanFound || ShayanFound || AhmedFound || KhuzemaFound || FawadFound || TalhaFound || MuazFound) {

     printf("\n You are invited");
     return 0;
   }

   else {

     printf("\n Not invited");
     return 0;
   }
 

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

