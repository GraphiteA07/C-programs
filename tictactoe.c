//STATUS: Requires Testing

#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define DELAY         60  //15 for animated game board.
#define ASCII_ZERO    48


void set_color          (int color);
void print_cell         (char value, int index);
void menu_ascii         ();
void menu_ascii_animate ();
void scan_color_override();
void scan_mark_override (char* game_table);
int scan_for_winner     (char* game_table);


//color system
HANDLE console;

enum 
{
  NORMAL,
  BRIGHT_CYAN,
  BRIGHT_RED,
  BRIGHT_GREEN
};

WORD colors[] =
{
  /* NORMAL */
  FOREGROUND_RED   |
  FOREGROUND_GREEN |
  FOREGROUND_BLUE,

  /* BRIGHT CYAN - X */
  FOREGROUND_GREEN |
  FOREGROUND_BLUE  |
  FOREGROUND_INTENSITY,

  /* BRIGHT RED - O */
  FOREGROUND_RED   |
  FOREGROUND_INTENSITY,

  /* BRIGHT GREEN - WIN */
  FOREGROUND_GREEN |
  FOREGROUND_INTENSITY
};

//global variables
int cell_color[9]  = {NORMAL,NORMAL,NORMAL, NORMAL,NORMAL,NORMAL, NORMAL,NORMAL,NORMAL};
char table_mem[9]  = {0, 0, 0, 0, 0, 0, 0, 0, 0};
int player_move;
int mark_override  = 0;
int winner         = 0;
int draw           = 0;


int main() {

  console = GetStdHandle(STD_OUTPUT_HANDLE);

  char game_table[9]  = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  char game_state[4]  = {'1', '2', 'X', 'O'};
  char leave_game;
  int state_idx       = 0;
  int first_launch    = 0;
  int menu_option;


  enum Options {

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

    if (menu_option == PLAY) {
      break;
    } 

    else if (menu_option == EXIT) {

        printf("\n\n\n Exited Successfully...");
        break;
    }

  } while (menu_option != PLAY && menu_option != EXIT);


  switch (menu_option) {

    case PLAY:

      while (1) {

game:

        if (mark_override == 0) {
          system("cls");
        }

        else {

          mark_override = 0;
          printf("\n\n    Cell already taken, press any key to continue...");
          getch();

          if (state_idx == 1) {        //PLAYER 2 [ O ] because of game_state[]
            state_idx -= 1; 
          }

          else if (state_idx == 0) {   //PLAYER 1 [ X ] because of game_state[]
            state_idx += 1;
          } 

          goto game;
        }

        menu_ascii();
        printf("\n\n\n");

        /* //animated game board */
        /* printf("              +-----+-----+-----+\n"); */
        /* Sleep(DELAY); */
        /* printf("              |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[0],0); */
        /* printf("  |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[1],1); */
        /* printf("  |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[2],2); */
        /* printf("  |\n"); */
        /* Sleep(DELAY); */
        /* printf("              |     |     |     |\n"); */
        /* Sleep(DELAY); */
        /* printf("              +-----+-----+-----+\n"); */
        /* Sleep(DELAY); */
        /* printf("              |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[3],3); */
        /* printf("  |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[4],4); */
        /* printf("  |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[5],5); */
        /* printf("  |\n"); */
        /* Sleep(DELAY); */
        /* printf("              |     |     |     |\n"); */
        /* Sleep(DELAY); */
        /* printf("              +-----+-----+-----+\n"); */
        /* Sleep(DELAY); */
        /* printf("              |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[6],6); */
        /* printf("  |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[7],7); */
        /* printf("  |  "); */
        /* Sleep(DELAY); */
        /* print_cell(game_table[8],8); */
        /* printf("  |\n"); */
        /* Sleep(DELAY); */
        /* printf("              |     |     |     |\n"); */
        /* Sleep(DELAY); */
        /* printf("              +-----+-----+-----+"); */
        

        //game board
         printf("              +-----+-----+-----+\n");
         printf("              |  ");
         print_cell(game_table[0],0);
         printf("  |  ");
         print_cell(game_table[1],1);
         printf("  |  ");
         print_cell(game_table[2],2);
         printf("  |\n");
         printf("              |     |     |     |\n");
         printf("              +-----+-----+-----+\n");
         printf("              |  ");
         print_cell(game_table[3],3);
         printf("  |  ");
         print_cell(game_table[4],4);
         printf("  |  ");
         print_cell(game_table[5],5);
         printf("  |\n");
         printf("              |     |     |     |\n");
         printf("              +-----+-----+-----+\n");
         printf("              |  ");
         print_cell(game_table[6],6);
         printf("  |  ");
         print_cell(game_table[7],7);
         printf("  |  ");
         print_cell(game_table[8],8);
         printf("  |\n");
         printf("              |     |     |     |\n"); 
         printf("              +-----+-----+-----+"); 
        

        if (winner == 1) {
            winner = 0;

          if (state_idx == 1) {        //PLAYER 2 [ O ] because of game_state[]
            state_idx -= 1; 
          }

          else if (state_idx == 0) {   //PLAYER 1 [ X ] because of game_state[]
            state_idx += 1;
          } 

          printf("\n\n\t         PLAYER %c WINS!\n\n", game_state[state_idx]);
          printf("\n\t        Press any key..");
          getch();
          break;
        }

        if (draw == 1) {

          draw = 0;
          printf("\n\n\t\t  IT'S A TIE!\n\n");
          printf("\n\t        Press any key..");
          getch();
          break;
        }

        printf("\n\n\n");
        printf("\t       Player %c [ ",game_state[state_idx]);
        
        if (state_idx == 0) {
            set_color(BRIGHT_CYAN);
        } else {
            set_color(BRIGHT_RED);
        }
        
        printf("%c", game_state[state_idx + 2]);
        set_color(NORMAL);
 
        printf(" ] : ");
        player_move = getche();

        if (player_move != n1 && player_move != n2 && player_move != n3 &&  
            player_move != n4 && player_move != n5 && player_move != n6 &&
            player_move != n7 && player_move != n8 && player_move != n9 ) {

          do {

            printf("\n\n\t       Exit? (y/n) : ");
            leave_game = getche();


            if (leave_game == yes || leave_game == YES) {
                printf("\n\n\n Exited Successfully...");
              goto exit;
            }

            if ( leave_game == no || leave_game == NO ){

              goto game; 
            }
          }while (leave_game != yes && leave_game != YES && leave_game != no && leave_game != NO); 
        }

        player_move -= ASCII_ZERO;
        player_move -= 1;             //-1 because of game_table[] index.

        if (state_idx == 0) {         //PLAYER 1 [ X ] because of game_state[]

          game_table[player_move] = 'X';	
          cell_color[player_move] = BRIGHT_CYAN;
          state_idx += 1;
        }

        else if (state_idx == 1) {   //PLAYER 2 [ O ] because of game_state[]

          game_table[player_move] = 'O';	
          cell_color[player_move] = BRIGHT_RED;
          state_idx -= 1;
        }

        scan_color_override();
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


void set_color(int color) {

  SetConsoleTextAttribute(console, colors[color]);
}

void print_cell(char value, int index) {

  set_color(cell_color[index]);
  printf("%c", value);
  set_color(NORMAL);

}

void menu_ascii_animate() {

  printf("   _____ ___ ____ _____  _    ____ _____ ___  _____ \n");
  Sleep(DELAY);
  printf("  |_   _|_ _/ ___|_   _|/ \\  / ___|_   _/ _ \\| ____|\n");
  Sleep(DELAY);
  printf("    | |  | | |     | | / _ \\| |     | || | | |  _|  \n");
  Sleep(DELAY);
  printf("    | |  | | |___  | |/ ___ \\ |___  | || |_| | |___ \n");
  Sleep(DELAY);
  printf("    |_| |___\\____| |_/_/   \\_\\____| |_| \\___/|_____|\n");
}

void menu_ascii() {

  printf("   _____ ___ ____ _____  _    ____ _____ ___  _____ \n");
  printf("  |_   _|_ _/ ___|_   _|/ \\  / ___|_   _/ _ \\| ____|\n");
  printf("    | |  | | |     | | / _ \\| |     | || | | |  _|  \n");
  printf("    | |  | | |___  | |/ ___ \\ |___  | || |_| | |___ \n");
  printf("    |_| |___\\____| |_/_/   \\_\\____| |_| \\___/|_____|\n");
}

void scan_color_override() {

  if (table_mem[player_move] == 'X' && cell_color[player_move] == BRIGHT_RED) {
    cell_color[player_move] = BRIGHT_CYAN;
  }

  else if (table_mem[player_move] == 'O' && cell_color[player_move] == BRIGHT_CYAN) {
    cell_color[player_move] = BRIGHT_RED;
  }
}

void scan_mark_override(char* game_table) {

  if (table_mem[player_move] == 0 && game_table[player_move] == 'X') {
    table_mem[player_move] = 'X';
  }

  else if (table_mem[player_move] == 0 && game_table[player_move] == 'O') {
    table_mem[player_move] = 'O';
  }

  //if Player 1 tries to override Player 2's mark -> REVERT to 'O'!
  else if (table_mem[player_move] == 'O' && game_table[player_move] == 'X') {
    game_table[player_move] = 'O';
    mark_override = 1;
  }

  //if Player 1 replays his move 
  else if (table_mem[player_move] == 'X' && game_table[player_move] == 'X') {
    mark_override = 1;
  }

  //if Player 2 tries to override Player 1's 'X' -> REVERT to 'X'!
  else if (table_mem[player_move] == 'X' && game_table[player_move] == 'O') {
    game_table[player_move] = 'X';
    mark_override = 1;
  }

  //if Player 2 replays his move 
  else if (table_mem[player_move] == 'O' && game_table[player_move] == 'O') {
    mark_override = 1;
  }
}

int scan_for_winner(char* game_table) {

  int i = 0;

  //for rows (player 1, player 2)
  for (i = 0; i <= 6; i +=3) {

    if (game_table[i] == game_table[i+1] && game_table[i+1] == game_table[i+2]){

      winner = 1;
      cell_color[i]     = BRIGHT_GREEN;
      cell_color[i + 1] = BRIGHT_GREEN;
      cell_color[i + 2] = BRIGHT_GREEN;
    }
  }

  //for columns (player 1, player 2)
  for (i = 0; i <= 2; i++) {

    if (game_table[i] == game_table[i+3] && game_table[i+3] == game_table[i+6]) {

      winner = 1;
      cell_color[i]     = BRIGHT_GREEN;
      cell_color[i + 3] = BRIGHT_GREEN;
      cell_color[i + 6] = BRIGHT_GREEN;
    }
  }

  //for diagonals (player 1, player 2)
  if (game_table[0] == game_table[4] && game_table[4] == game_table[8]) {

    winner = 1;
    cell_color[0] = BRIGHT_GREEN;
    cell_color[4] = BRIGHT_GREEN;
    cell_color[8] = BRIGHT_GREEN;
  }

  else if (game_table[2] == game_table[4] && game_table[4] == game_table[6]) {

    winner = 1;
    cell_color[2] = BRIGHT_GREEN;
    cell_color[4] = BRIGHT_GREEN;
    cell_color[6] = BRIGHT_GREEN;
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


