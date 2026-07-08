//updated version of experiment.c
//working accordingly!

#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>


int main() {

  system("cls");

  char user_name[40];
  char user_input;
 
  int current_year;
  int birth_year;
  int user_age;


  printf("\n What's your name?\n\n > ");
  fgets(user_name, 40, stdin);

  int len = strlen(user_name);
    if (len > 0 && user_name[len - 1] == '\n') {
        user_name[len - 1] = '\0'; 
    }


  printf("\n Welcome, %s \n",user_name);

  printf("\n Want to know your age? (y/n)\n\n > ");
  user_input = getche();



  if (user_input=='y' || user_input=='Y')  {

     printf("\n\n Let's begin!\n");
    
    printf("\n Enter the current year \n\n > ");
    scanf("%d",&current_year);

    printf("\n Enter your birth year \n\n > ");
    scanf("%d",&birth_year);

    user_age = current_year - birth_year; 

  if (user_age == 0) {
    printf("\n Error : Age cannot be zero\n");
    return 0;
  }


  if ( user_age >= 200 && user_age <= 999 ) {
    printf("\n Impressive! You've lived over a hundred years.\n Unfortunately, our database doesn't support vampires yet.\n");
    return 0;
  }

  if ( user_age >= 1000 ) {
    printf("\n Impressive! You've lived over a thousand years.\n Unfortunately, our database doesn't support vampires yet.\n");
    return 0;
  }


    printf("\n You are %d years old! \n",user_age);
  }

  if (user_input=='n' || user_input=='N') {
    printf("\n\n A secret agent, huh? Fine, keep your secrets.\n We'll just assume you're an ancient vampire\n or a time traveler trying to blend in.\n");
  }


  return 0;

}


