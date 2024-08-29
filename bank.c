#include <stdio.h>

int main() {

  char Username[20];
  int password = 2024;



  printf("\n Enter your name \n\n > ");
  scanf("%s",&Username);

  printf("\n Enter password \n\n > ");
  scanf("%4d",&password);

  if ( password == 2024 ) {

    printf("\n True \n");
  }

  else if ( password != 2024 )  {

    printf("\n False \n");
    return 0;
  }

  printf("\n Sorry, what was your name again?\n");

  return 0;

}
