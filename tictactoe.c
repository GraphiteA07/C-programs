//STATUS: Requires Testing    

#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>

#define DELAY         60000 /*41900*/
#define ASCII_NUM_0    48


void menu_ascii_animate();
void menu_ascii();
void scan_mark_override(char game_grid[]);

int scan_for_winner(char game_grid[]);
int player_move;
int winner  = 0;
int draw    = 0;

char table_mem[9]               = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };


int main() {

  char game_table[9]            = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  char mark_display[2]          = {'X','O'};
  char leave_game;

  int active_mark     = 0;
  int first_launch    = 0;
  int player_display  = 1;
  int menu_option;


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

    if (first_launch == 0) {
      menu_ascii_animate();
    }

    else {
      menu_ascii();
    }

    // distance 13 spaces

    printf("\n\n             [1] Play \n");
    printf("\n             [2] Exit \n");
    printf("\n             Input : ");
    menu_option = getche();

    first_launch = 1;

    if (menu_option == PLAY || menu_option == EXIT) {
      break;
    } 

  } while (menu_option != PLAY || menu_option != EXIT);


  switch (menu_option) {

    case PLAY:

      while (1) {

game:


	system("cls");
	menu_ascii();

	printf("\n\n\n");

	printf("              +-----+-----+-----+\n");
	printf("              |  %c  |  %c  |  %c  |\n",game_table[0], game_table[1], game_table[2]);
	printf("              |     |     |     |\n");
	printf("              +-----+-----+-----+\n");
	printf("              |  %c  |  %c  |  %c  |\n",game_table[3], game_table[4], game_table[5]);
	printf("              |     |     |     |\n");
	printf("              +-----+-----+-----+\n");
	printf("              |  %c  |  %c  |  %c  |\n",game_table[6], game_table[7], game_table[8]);
	printf("              |     |     |     |\n");
	printf("              +-----+-----+-----+");


	if (winner == 1) {

	  winner = 0;

	  if (player_display == 2) {
	    player_display -= 1; 
	  }

	  else if (player_display == 1) {
	    player_display += 1;
	  } 

	  printf("\n\n\t         PLAYER %d WINS!\n\n", player_display);
	  break;
	}


	if (draw == 1) {

	  draw = 0;
	  printf("\n\n\t\t  IT'S A TIE!\n\n");
	  break;

	}

	printf("\n\n\n");

	printf("\t       Player %d [ %c ] : ", player_display, mark_display[active_mark]);
	player_move = getche();

	if (player_move != n1 && player_move != n2 && player_move != n3 &&  
	    player_move != n4 && player_move != n5 && player_move != n6 &&
	    player_move != n7 && player_move != n8 && player_move != n9 ) {

	  do {

	  printf("\n\n\t       Exit? (y/n) : ");
	  leave_game = getche();


	  if (leave_game == yes || leave_game == YES) {
	    goto exit;
	  }

	  if ( leave_game == no || leave_game == NO ){

	    goto game; 
	  }



	  }while (leave_game != yes && leave_game != YES && leave_game != no && leave_game != NO); 

	}

	player_move -= ASCII_NUM_0;
	player_move -= 1;          //-1 because of game_table[] index.
				   
	if (player_display == 1) {

	  game_table[player_move] = 'X';	

	  player_display += 1;
	  active_mark += 1;
	}

	else if (player_display == 2) {

	  game_table[player_move] = 'O';	

	  player_display -= 1;
	  active_mark -= 1;
	}


	scan_mark_override(game_table);

	scan_for_winner(game_table);

      } //end of loop
	
exit:
      break;

    case EXIT:
      break;
  } //end of switch

  return 0;
} //end of main()


void menu_ascii_animate() {

  printf("   _____ ___ ____ _____  _    ____ _____ ___  _____ \n");
  usleep(DELAY);
  printf("  |_   _|_ _/ ___|_   _|/ \\  / ___|_   _/ _ \\| ____|\n");
  usleep(DELAY);
  printf("    | |  | | |     | | / _ \\| |     | || | | |  _|  \n");
  usleep(DELAY);
  printf("    | |  | | |___  | |/ ___ \\ |___  | || |_| | |___ \n");
  usleep(DELAY);
  printf("    |_| |___\\____| |_/_/   \\_\\____| |_| \\___/|_____|\n");

}

void menu_ascii() {

  printf("   _____ ___ ____ _____  _    ____ _____ ___  _____ \n");
  printf("  |_   _|_ _/ ___|_   _|/ \\  / ___|_   _/ _ \\| ____|\n");
  printf("    | |  | | |     | | / _ \\| |     | || | | |  _|  \n");
  printf("    | |  | | |___  | |/ ___ \\ |___  | || |_| | |___ \n");
  printf("    |_| |___\\____| |_/_/   \\_\\____| |_| \\___/|_____|\n");

}

void scan_mark_override(char game_grid[]) {


  /* mark_override[player_move]  => table_mem[player_move]*/
  /* game_table[player_move]     => game_grid[player_move] */    

  

  if (table_mem[player_move] == 0 && game_grid[player_move] == 'X') {
    table_mem[player_move] = 'X';
  }

  else if (table_mem[player_move] == 0 && game_grid[player_move] == 'O') {
    table_mem[player_move] = 'O';
  }

  //if Player 1 tries to override Player 2's mark -> REVERT to 'O'!
  else if (table_mem[player_move] == 'O' && game_grid[player_move] == 'X') {
    game_grid[player_move] = 'O';
  }

  //if Player 2 tries to override Player 1's 'X' -> REVERT to 'X'!
  else if (table_mem[player_move] == 'X' && game_grid[player_move] == 'O') {
    game_grid[player_move] = 'X';
  }

}



int scan_for_winner(char game_grid[]) {

  int i = 0;

  //for rows (player 1, player 2)
  
  for (i = 0; i <= 6; i +=3) {


    if (game_grid[i] == game_grid[i+1] && game_grid[i+1] == game_grid[i+2]){
      winner = 1;
    }

  }


  //for columns (player 1, player 2)

  for (i = 0; i <= 2; i++) {

    if (game_grid[i] == game_grid[i+3] && game_grid[i+3] == game_grid[i+6]) {
      winner = 1;
    }

  }

  //for diagonals (player 1, player 2)
  
  if (game_grid[0] == game_grid[4] && game_grid[4] == game_grid[8]) {
    winner = 1;
  }

  else if (game_grid[2] == game_grid[4] && game_grid[4] == game_grid[6]) {
    winner = 1;
  }

  //for draws (player 1, player 2)
  

    if (table_mem[0] != 0 && winner == 0 && table_mem[1] != 0 && winner == 0 && 
        table_mem[2] != 0 && winner == 0 && table_mem[3] != 0 && winner == 0 &&
	table_mem[4] != 0 && winner == 0 && table_mem[5] != 0 && winner == 0 &&
	table_mem[6] != 0 && winner == 0 && table_mem[7] != 0 && winner == 0 && 
	table_mem[8] != 0 && winner == 0 ) {

       draw = 1;
    }

  return 0;
}


