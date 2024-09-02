
#include <stdio.h>
#include <unistd.h>

int main() {

  system("cls");
  int delay = 1;


  float mark[6];
  float add = 0;
  int i = 0;
  /* int j = 0; */
  /* int l = 2; */
  /* int Loop2 = 2; */ 
  /* int l = 0; */

  while ( i < 6 ) {

  printf("\n Enter numbers : ");
  scanf("%f",&mark[i]);

  if (mark[1] == 0) {

    sleep(delay);
    printf("\n Minimum 2 numbers required \n");
    break;
  }

  /* while ( j < 8 && mark[j] == 0 ) { */

  /*   printf("\n OUPUT : %.3f \n",add); */  
  /*   j++; */
   

  /* } */

 
    add += mark[i];

  /* l++; */
  i++;

  }
    printf("\n OUPUT : %.3f \n",add);  

  return 0;
}





          //This loop didn't work
    /* if (mark[Loop2] == 0 ) { */

    /* printf("\n OUPUT : %.3f \n",add); */  
    /* break; */

    /* Loop2++; */

    /* } */
  
  

  /* while ( j < 6 ) { */


  /*   printf("\n OUPUT : %d \n",add); */
  /*   j++; */
  

    
  /* } */
