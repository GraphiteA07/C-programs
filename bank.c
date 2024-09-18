//Find solution to reduce code from multiplying
//Password and name authentication are not completed
//By Holding Ctrl+V and then pressing J will work well on the UserList
//This program is not working as well  --USERLIST--

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {

  system("cls");


  //for Loops
  
  int RyanLoop = 0;
  int ShayanLoop = 8;
  int AhmedLoop = 16;
  int ZainLoop = 24;
  

 //If username is found in UserList
  int RyanFound = 0;
  int ShayanFound = 0;
  int AhmedFound = 0;
  int ZainFound = 0;
 



  char Username[70];
  /* char Userpassword[10] = "password"; */
  /* char password[10]; */


  char UserList[30][60] = {  "Ryan", "ryan", "RYAN", "Ryan Asif", "Ryan asif", "ryan Asif", "ryan asif", "RYAN ASIF",                                                 "Shayan","shayan","SHAYAN","Shayan Siddiqui","Shayan siddiqui","shayan Siddiqui","shayan siddiqui","SHAYAN SIDDIQUI",                    "Ahmed","ahmed","AHMED","Ahmed Dayan","Ahmed dayan","ahmed Dayan","ahmed dayan","AHMED DAYAN",                                           "Zain","zain","ZAIN","dj",                                                                                                                                                                                    };                
			    





     printf("\n Enter name \n\n > ");
     gets(Username);
  

   while (RyanLoop < 8 ) {

     if ( strcmp(Username, UserList[RyanLoop]) == 0 ) {

       RyanFound = 1;

       break;
     }

       RyanLoop++;
   }

   if ( RyanFound ) {

     printf("\n You are Ryan");
     return 0;
   }


   while (ShayanLoop <=15 ) {

     if ( strcmp(Username, UserList[ShayanLoop]) == 0 ) {

       ShayanFound = 1;

       break;
     }

       ShayanLoop++;
   }

   if ( ShayanFound ) {

     printf("\n You are Shayan");
     return 0;
   }


   while (AhmedLoop <= 23 ) {

     if ( strcmp(Username, UserList[AhmedLoop]) == 0 ) {

       AhmedFound = 1;

       break;
     }

       AhmedLoop++;
   }

   if ( AhmedFound ) {

     printf("\n You are Ahmed");
     return 0;
   }


   while (ZainLoop <= 26  ) {

     if ( strcmp(Username, UserList[ZainLoop]) == 0 ) {

       ZainFound = 1;

       break;
     }

       ZainLoop++;
   }

   if ( ZainFound ) {

     printf("\n You are Zain");
     return 0;
   }
 

  return 0;

}


  /* strcpy(UserList[0], "Ryan"); */
  /* strcpy(UserList[1], "ryan"); */
  /* strcpy(UserList[2], "RYAN"); */
  /* strcpy(UserList[3], "Ryan Asif"); */
  /* strcpy(UserList[4], "Ryan asif"); */
  /* strcpy(UserList[5], "ryan Asif"); */
  /* strcpy(UserList[6], "ryan asif"); */
  /* strcpy(UserList[7], "RYAN ASIF"); */
  /* strcpy(UserList[8], "Shayan"); */
  /* strcpy(UserList[9], "shayan"); */
  /* strcpy(UserList[10], "SHAYAN"); */
  /* strcpy(UserList[11], "Shayan Siddiqui"); */
  /* strcpy(UserList[12], "Shayan siddiqui"); */
  /* strcpy(UserList[13], "shayan Siddiqui"); */
  /* strcpy(UserList[14], "shayan siddiqui"); */
  /* strcpy(UserList[15], "SHAYAN SIDDIQUI"); */
  /* strcpy(UserList[16], "Ahmed"); */
  /* strcpy(UserList[17], "ahmed"); */
  /* strcpy(UserList[18], "AHMED"); */
  /* strcpy(UserList[19], "Ahmed Dayan"); */
  /* strcpy(UserList[20], "Ahmed dayan"); */
  /* strcpy(UserList[21], "ahmed Dayan"); */
  /* strcpy(UserList[22], "AHMED DAYAN"); */
  /* strcpy(UserList[23], ""); */
  /* strcpy(UserList[24], ""); */
  /* strcpy(UserList[25], ""); */
  /* strcpy(UserList[26], ""); */
  /* strcpy(UserList[27], ""); */
  /* strcpy(UserList[28], ""); */
  /* strcpy(UserList[29], ""); */
  /* strcpy(UserList[30], ""); */
  /* strcpy(UserList[31], ""); */
  /* strcpy(UserList[32], ""); */
  /* strcpy(UserList[33], ""); */



     /* printf("%s\n",&UserList[i]); */

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

