//STATUS: Game logic remaining 

#include <stdio.h>
#include <conio.h>
#include <unistd.h>

int delay = 60000;   /*41900*/

void TicTacToeAnimate() {

  // distance from stat " (2)
printf("   _____ ___ ____ _____  _    ____ _____ ___  _____ \n");
usleep(delay);
printf("  |_   _|_ _/ ___|_   _|/ \\  / ___|_   _/ _ \\| ____|\n");
usleep(delay);
printf("    | |  | | |     | | / _ \\| |     | || | | |  _|  \n");
usleep(delay);
printf("    | |  | | |___  | |/ ___ \\ |___  | || |_| | |___ \n");
usleep(delay);
printf("    |_| |___\\____| |_/_/   \\_\\____| |_| \\___/|_____|\n");

}

void TicTacToe() {

  // distance from stat " (2)
printf("   _____ ___ ____ _____  _    ____ _____ ___  _____ \n");
printf("  |_   _|_ _/ ___|_   _|/ \\  / ___|_   _/ _ \\| ____|\n");
printf("    | |  | | |     | | / _ \\| |     | || | | |  _|  \n");
printf("    | |  | | |___  | |/ ___ \\ |___  | || |_| | |___ \n");
printf("    |_| |___\\____| |_/_/   \\_\\____| |_| \\___/|_____|\n");

}




int main() {


  char game_table[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
                               

  char mark_display[2] = {'X','O'};
  char leave_game;



  int state = 0;
  int interaction = 0;
  int player_move;
  int menu_option;
  int player_display[2] = {1,2};

  enum GameState {

    PLAY = 49,
    EXIT = 50, 
    yes  = 121,
    YES  = 89,
    no   = 110,
    NO   = 78,
  };

  enum KeyboardInput {

    n1 = 49, 
    n2 = 50, 
    n3 = 51, 
    n4 = 52, 
    n5 = 53, 
    n6 = 54, 
    n7 = 55, 
    n8 = 56, 
    n9 = 57, 

  };

  do {

  system("cls");

  if (interaction == 0) {
  TicTacToeAnimate();
  }

  else {
    TicTacToe();
  }


  // distance 13 spaces

  printf("\n\n             [1] Play \n");
  printf("\n             [2] Exit \n");
  printf("\n             Input : ");
  menu_option = getche();

  interaction = 1;

  if (menu_option == PLAY || menu_option == EXIT) {
    break;
  } 


  } while (menu_option != PLAY || menu_option != EXIT);


  switch (menu_option) {

    case PLAY:


   while (1) {

game:


	system("cls");

      TicTacToe();


      printf("\n\n\n");


      printf("              +-----+-----+-----+\n");
      printf("              |  %c  |  %c  |  %c  |\n",'0' + game_table[0], '0' + game_table[1], '0' + game_table[2]);
      printf("              |     |     |     |\n");
      printf("              +-----+-----+-----+\n");
      printf("              |  %c  |  %c  |  %c  |\n",'0' + game_table[3], '0' + game_table[4], '0' + game_table[5]);
      printf("              |     |     |     |\n");
      printf("              +-----+-----+-----+\n");
      printf("              |  %c  |  %c  |  %c  |\n",'0' + game_table[6], '0' + game_table[7], '0' + game_table[8]);
      printf("              |     |     |     |\n");
      printf("              +-----+-----+-----+");



      printf("\n\n\n");


      printf("\t       Player %d [ %c ] : ",player_display[state],mark_display[state]);
      player_move = getche();

      if (player_move != n1 && player_move != n2 && player_move != n3 &&                                                                           player_move != n4 && player_move != n5 && player_move != n6 &&                                                                           player_move != n7 && player_move != n8 && player_move != n9) {


	printf("\n\n\t       Exit? (y/n) : ");
	leave_game = getche();
	if (leave_game == yes || leave_game == YES) {
	  break;
	}

	if ( leave_game == no || leave_game == NO ){
	 goto game; 
	}
	
      }


      player_move -= 48;
      player_move -= 1;


      if (state == 0) {

         game_table[player_move] = 40;	
	 state += 1;
      }

      else if (state == 1) {

         game_table[player_move] = 31;	
	 state -= 1;
      }





      } //end of loop


 /* while (player_move != 1 || player_move != 2 || player_move != 3 || player_move != 4 || player_move != 5 || player_move != 6 || player_move != 7 || player_move != 8 || player_move != 9); */



      break;

    case EXIT:
      break;
  }






  /* printf("\n\n\n"); */


  return 0;
}
