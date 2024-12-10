/* #include <stdio.h> */
/* #include <windows.h> */
/* #include <conio.h> */

/* int main() { */
/*     char input[10] = ""; */ 
/*     char gh; */

/*     printf("Start typing...\n"); */

/*     while (1) { */
/*         if (_kbhit()) { */ 
/*              gh = _getch(); */ 

/*             // Beep when any key is pressed */
/*             Beep(500, 200); */ 

/* 	    if ( gh != 0 ) { */
/* 	      break; */
/* 	    } */
/*             if (gh != 13) { // Exclude Enter key from input string */
/*                 input[strlen(input)] = gh; */ 
/*             } else { // Enter key pressed, break the loop */
/*                 break; */
/*             } */
/*         } */
/*     } */

/*     printf("You entered: %d\n",&input); */

/*     return 0; */
/* } */

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int ch = 0;

    printf("Press any key...\n");

    ch = _getch(); 
    Beep(500, 200); 

    printf("You pressed: %d\n", ch);

    return 0;
}
