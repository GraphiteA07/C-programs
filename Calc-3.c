//Has some interesting cases
//Looping the OUTPUT on 'c'  --DONE-- //Multiply function not multiplying ( WOW ) --DONE--
//Subtract function not subtracting ( WOW ) --WORKS BUT ....DOESN'T WORK TOO--


#include <stdio.h>
#include <string.h>
#include <unistd.h>

 int delay2 = 50000;   /*41900*/

void ASCII_S() {


printf("\n\n     8888b.  8b    d8    db    .dP\"Y8    dP\"\"b8    db    88      dP\"\"b8 \n");
 usleep(delay2);
printf("      8I  Yb 88b  d88   dPYb   `Ybo.\"   dP   `\"   dPYb   88     dP   `\" \n");
 usleep(delay2);
printf("      8I  dY 88YbdP88  dP__Yb  o.`Y8b   Yb       dP__Yb  88  .o Yb     \n");
 usleep(delay2);
printf("     8888Y\"  88 YY 88 dP\"\"\"\"Yb 8bodP'    YboodP dP\"\"\"\"Yb 88ood8  YboodP `  \n\n");
printf("   _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
}

void ASCII() {

printf("\n\n     8888b.  8b    d8    db    .dP\"Y8    dP\"\"b8    db    88      dP\"\"b8 \n");
printf("      8I  Yb 88b  d88   dPYb   `Ybo.\"   dP   `\"   dPYb   88     dP   `\" \n");
printf("      8I  dY 88YbdP88  dP__Yb  o.`Y8b   Yb       dP__Yb  88  .o Yb     \n");
printf("     8888Y\"  88 YY 88 dP\"\"\"\"Yb 8bodP'    YboodP dP\"\"\"\"Yb 88ood8  YboodP `  \n\n");


}


int main() {

  system("cls");
  int delay = 1;
  int OutputStore;
  char option;

  //for addition
  int i = 0;
  float markA[10];
  float add = 0;

  //for multiplication
  int j = 0;
  float markM[10];
  float mult = 1;

  //for division
  int k = 0;
  float markD[10];
  float div = 0;

  //for subtraction 
  int l = 0;
  int p = -1;
  float markS[10];
  float sub = 0;
 
 //for statement 
  char AfterOutput;


/* -_-_-_-_CODE STARTING POINT-_-_-_-_- */

  do {

  printf("\n\t  [ d ]   Division        \n");
  printf("\n\t  [ m ]   Multiplication  \n");
  printf("\n\t  [ a ]   Addition        \n");
  printf("\n\t  [ s ]   Subtraction     \n");
  printf("\n\t  [ S ]   Square          \n");
  printf("\n\t  [ c ]   Cube            \n");
  printf("\n\t  [ e ]   Exit            \n");

  
  printf("\n\n\tWhat would it be : ");
  scanf("%s",&option);

  switch ( option ) {


    case 'a':

  while ( i < 10 ) {

  printf("\n\tEnter numbers : ");
  scanf("%f",&markA[i]);

  if (markA[0] == 0 || markA[1] == 0) {

    sleep(delay);
    printf("\n\tMinimum 2 numbers required \n");
    return 0;
  }

   if ( markA[i] == 0 ) {

  printf("\n--------------------------------------------------------------------");
      printf("\n\n  OUPUT : %.3f \n",add);  
  printf("\n--------------------------------------------------------------------\n");
  i = 0;

  add = 0;
      break;
    }

    add += markA[i];

  i++;

  }
      break;


    case 'm':

  while ( j < 10 ) {

  printf("\n\tEnter numbers : ");
  scanf("%f",&markM[j]);

  if (markM[0] == 0 || markM[1] == 0) {

    sleep(delay);
    printf("\n\tMinimum 2 numbers required \n");
    return 0;
  }

   if ( markM[j] == 0 ) {

  printf("\n--------------------------------------------------------------------");
      printf("\n\n  OUPUT : %.3f \n",mult);  
  printf("\n--------------------------------------------------------------------\n");
  j = 0;

  mult = 1;
      break;
    }

  
   mult *= markM[j];


  j++;

  }
      break;


    case 's':

  while ( l < 10 ) {


  printf("\n\tEnter numbers : ");
  scanf("%f",&markS[l]);


  while ( p < 10 ) {

    /* p += 1; */
    markS[p] = markS[p] * (-1);
    p++;

  }

    


  if (markS[0] == 0 || markS[1] == 0) {

    sleep(delay);
    printf("\n\tMinimum 2 numbers required \n");
    return 0;
  }

   if ( markS[l] == 0 ) {

  printf("\n--------------------------------------------------------------------");
      printf("\n\n  OUPUT : %.3f \n",sub);  
  printf("\n--------------------------------------------------------------------\n");
  l = 0;
  p = 0;
  /* markS[p] = 0; */
  sub = 0;
      break;
    }

    sub -= markS[l]; //sub was storing values with (-) when it was sub -= mark[i] Ex: -200 -100 = 300!


  l++;

  }
  break;

    case 'e':
	printf("\n Exited Successfully!\n");
	return 0;


    default:
	 printf("\n\t.");
	 usleep(400000); 
	 printf(".");
	 usleep(500000); 
	 printf(".\n");
	 usleep(99999); 

      printf("\n\tOperator : Unknown \n");
      return 0;
  }


   
 printf("\n\n\n   WHERE TO PROCEED \n");
 printf("==========================\n\n\n");

    printf("\n Continue           ( c )\n");
    printf("\n Exit               ( e )\n");

    printf("\n Input : ");
    scanf("%s",&AfterOutput);

    while ( AfterOutput != 'c' && AfterOutput != 'e') {

      printf("\n Enter 'c' or 'e' : ");
      scanf("%1s",&AfterOutput);
      scanf("%*[^\n]");

    }

    switch ( AfterOutput ) {

      case 'c':

    printf(" \nDirecting");
    printf(".");
    usleep(90000);
    printf(".");
    usleep(90000);
    printf(".");
    usleep(90000);



   usleep(60000);
    system("cls");
    break;

      case 'e':
	printf("\n Exited Successfully!\n");
	break;

      default:
	printf("\n Paji! Tusi kya likh rahe ro ji!\n");
	break;
    }


  }

  while ( AfterOutput == 'c' );


/*   if ( AfterOutput == 'e') { */

/*     printf(" \nExited Successfully!"); */
/*     return 0; */
/*   } */



    /* switch ( AfterOutput ) { */

    /*   case 'c': */
	/* printf("\n True\n"); */
	/* AfterOutput = add; */
	/* break; */

    /*   case 'e': */
	/* printf("\n Exited\n"); */
	/* break; */

    /*   default: */
	/* printf("\n Paji! Tusi kya likh rahe ro ji!\n"); */
	/* break; */
    /* } */







  return 0;
}



