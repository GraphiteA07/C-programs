
#include <stdio.h>
#include <unistd.h>

int main() {

  int delay = 1;



  char choice;
// char after_calc;
  
//divide
  float d1;  
  float d2;
  float d3;
  float d4;
  float d5;
  float d6;
  float d7;
  float d8;
  float d9;
  float d10;
  float d11;
  float d12;
  float d13;
  float d14;
  float d15;
  float d16;

//multiply
  float m1;
  float m2;
  float m3;
  float m4;
  float m5;
  float m6;
  float m7;
  float m8;
  float m9;
  float m10;
  float m11;
  float m12;
  float m13;
  float m14;
  float m15;
  float m16;
 

//additon
  float a1;
  float a2;
  float a3;
  float a4;
  float a5;
  float a6;
  float a7;
  float a8;
  float a9;
  float a10;
  float a11;
  float a12;
  float a13;
  float a14;
  float a15;
  float a16;

//subtraction
  float s1;
  float s2;
  float s3;
  float s4;
  float s5;
  float s6;
  float s7;
  float s8;
  float s9;
  float s10;
  float s11;
  float s12;
  float s13;
  float s14;
  float s15;
  float s16;

  float zero = 0;

  start:
  printf("\n\n\n\t\t\tDMAS CALCULATOR\n");
  printf("\t\t============================\n\n\n");



  printf("\n\tFor Division        ( d )\n");
  printf("\n\tFor Multiplication  ( m )\n");
  printf("\n\tFor Addition        ( a )\n");
  printf("\n\tFor Subtraction     ( s )\n");
  printf("\n\tFor Square          ( S )\n");
  printf("\n\tFor Cube            ( q )\n");

  
  printf("\n\n\tWhat would it be :  ");
  scanf("%s",&choice);


  switch (choice) {

    case 'd':
      
    printf("\n\tOperator : Division\n\n");

    printf("\n\tEnter 1st number : ");
    scanf("%f",&d1);

    if ( d1 == zero) {

      sleep(delay);
      printf("\n\tMinimum 2 numbers required\n");
      return 0;
    } 

    printf("\n\tEnter 2nd number : ");
    scanf("%f",&d2);

    if ( d2 == zero) {

      sleep(delay);
      printf("\n\tMinimum 2 numbers required\n");
      return 0;

    } 
    printf("\n\tEnter 3rd number : ");
    scanf("%f",&d3);

    if (d3 == zero) {

      float divider3 = (d1/d2);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider3);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 4th number : ");
    scanf("%f",&d4);

    if (d4 == zero) {

      float divider4 = (d1/d2/d3);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider4);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 5th number : ");
    scanf("%f",&d5);
    
    if (d5 == zero) {

      float divider5 = (d1/d2/d3/d4);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider5);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 6th number : ");
    scanf("%f",&d6);

    if (d6 == zero) {

      float divider6 = (d1/d2/d3/d4/d5);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider6);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 7th number : ");
    scanf("%f",&d7);
    
    if (d7 == zero) {

      float divider7 = (d1/d2/d3/d4/d5/d6);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider7);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 8th number : ");
    scanf("%f",&d8);

    if (d8 == zero) {

      float divider8 = (d1/d2/d3/d4/d5/d6/d7);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider8);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 9th number : ");
    scanf("%f",&d9);

    if (d9 == zero) {

      float divider9 = (d1/d2/d3/d4/d5/d6/d7/d8);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider9);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 10th number : ");
    scanf("%f",&d10);

    if (d10 == zero) {

      float divider10 = (d1/d2/d3/d4/d5/d6/d7/d8/d9);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider10);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 11th number : ");
    scanf("%f",&d11);

    if (d11 == zero) {

      float divider11 = (d1/d2/d3/d4/d5/d6/d7/d8/d9/d10);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider11);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 12th number : ");
    scanf("%f",&d12);

    if (d12 == zero) {

      float divider12 = (d1/d2/d3/d4/d5/d6/d7/d8/d9/d10/d11);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider12);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 13th number : ");
    scanf("%f",&d13);

    if (d13 == zero) {

      float divider13 = (d1/d2/d3/d4/d5/d6/d7/d8/d9/d10/d11/d12);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider13);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 14th number : ");
    scanf("%f",&d14);

    if (d14 == zero) {

      float divider14 = (d1/d2/d3/d4/d5/d6/d7/d8/d9/d10/d11/d12/d13);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider14);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tEnter 15th number : ");
    scanf("%f",&d15);

    if (d15 == zero) {

      float divider15 = (d1/d2/d3/d4/d5/d6/d7/d8/d9/d10/d11/d12/d13/d14);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider15);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

    printf("\n\tMax limit reached! : ");
    scanf("%f",&d16);

    if (d16 == zero) {

      float divider16 = (d1/d2/d3/d4/d5/d6/d7/d8/d9/d10/d11/d12/d13/d14/d15);

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",divider16);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
    }

      break;

    case 'm':
      
    printf("\n\tOperator : Multiplication\n\n");

    printf("\n\tEnter 1st number : ");
    scanf("%f",&m1);

    if (m1 == zero) {

      sleep(delay);
      printf("\n\tMinimum 2 numbers required\n");
      return 0;

    }

    printf("\n\tEnter 2nd number : ");
    scanf("%f",&m2);

    if (m2 == zero) {

      sleep(delay);
      printf("\n\tMinimum 2 numbers required\n");
      return 0;

    }
    printf("\n\tEnter 3rd number : ");
    scanf("%f",&m3);

    if (m3 == zero) {

    float multiplier3 = m1 * m2;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier3);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 4th number : ");
    scanf("%f",&m4);

    if (m4 == zero) {

    float multiplier4 = m1 * m2 * m3;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier4);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 5th number : ");
    scanf("%f",&m5);

    if (m5 == zero) {

    float multiplier5 = m1 * m2 * m3 * m4;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier5);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 6th number : ");
    scanf("%f",&m6);

    if (m6 == zero) {

    float multiplier6 = m1 * m2 * m3 * m4 * m5;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier6);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 7th number : ");
    scanf("%f",&m7);

    if (m7 == zero) {

    float multiplier7 = m1 * m2 * m3 * m4 * m5 * m6;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier7);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 8th number : ");
    scanf("%f",&m8);

    if (m8 == zero) {

    float multiplier8 = m1 * m2 * m3 * m4 * m5 * m6 * m7;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier8);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 9th number : ");
    scanf("%f",&m9);

    if (m9 == zero) {

    float multiplier9 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier9);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 10th number : ");
    scanf("%f",&m10);

    if (m10 == zero) {

    float multiplier10 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier10);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 11th number : ");
    scanf("%f",&m11);

    if (m11 == zero) {

    float multiplier11 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9 * m10;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier11);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 12th number : ");
    scanf("%f",&m12);

    if (m12 == zero) {

    float multiplier12 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9 * m10 *m11;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier12);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 13th number : ");
    scanf("%f",&m13);

    if (m13 == zero) {

    float multiplier13 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9 * m10 * m11 * m12;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier13);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 14th number : ");
    scanf("%f",&m14);

    if (m14 == zero) {

    float multiplier14 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9 * m10 * m11 * m12 * m13;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier14);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tEnter 15th number : ");
    scanf("%f",&m15);

    if (m15 == zero) {

    float multiplier15 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9 * m10 * m11 * m12 * m14;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier15);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

    printf("\n\tMax limit reached! : ");
    scanf("%f",&m16);

    if (m16 == zero) {

    float multiplier16 = m1 * m2 * m3 * m4 * m5 * m6 * m7 * m8 * m9 * m10 * m11 * m12 * m14 * m15;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",multiplier16);
  printf("\n\n--------------------------------------------------------------------\n");
  
  return 0;
     
    }

      break;

    case 'a':
      
    printf("\n\tOperator : Addition\n\n");

   printf("\n\tEnter 1st number : ");
   scanf("%f",&a1);

   if (a1 == zero) {

      sleep(delay);
      printf("\n\tMinimum 2 numbers required\n");
      return 0;
   }

   printf("\n\tEnter 2nd number : ");
   scanf("%f",&a2);

   if (a2 == zero) {

      sleep(delay);
      printf("\n\tMinimum 2 numbers required\n");
      return 0;
   }

   printf("\n\tEnter 3rd number : ");
   scanf("%f",&a3);

   if (a3 == zero) {

    float adder3 = a1 + a2;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder3);
  printf("\n\n--------------------------------------------------------------------\n");

  return 0;
   }
   
   printf("\n\tEnter 4th number : ");
   scanf("%f",&a4);

   if (a4 == zero) {

    float adder4 = a1 + a2 + a3;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder4);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }
   
   printf("\n\tEnter 5th number : ");
   scanf("%f",&a5);

   if (a5 == zero) {

    float adder5 = a1 + a2 + a3 + a4;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder5);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }
   
   printf("\n\tEnter 6th number : ");
   scanf("%f",&a6);

   if (a6 == zero) {

    float adder6 = a1 + a2 + a3 + a4 + a5;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder6);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 7th number : ");
   scanf("%f",&a7);

   if (a7 == zero) {

    float adder7 = a1 + a2 + a3 + a4 + a5 + a6;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder7);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 8th number : ");
   scanf("%f",&a8);

   if (a8 == zero) {

    float adder8 = a1 + a2 + a3 + a4 + a5 + a6 + a7;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder8);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 9th number : ");
   scanf("%f",&a9);

   if (a9 == zero) {

    float adder9 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder9);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 10th number : ");
   scanf("%f",&a10);

   if (a10 == zero) {

    float adder10 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder10);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 11th number : ");
   scanf("%f",&a11);

   if (a11 == zero) {

    float adder11 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder11);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 12th number : ");
   scanf("%f",&a12);

   if (a12 == zero) {

    float adder12 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder12);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 13th number : ");
   scanf("%f",&a13);

   if (a13 == zero) {

    float adder13 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder13);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 14th number : ");
   scanf("%f",&a14);

   if (a14 == zero) {

    float adder14 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder14);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 15th number : ");
   scanf("%f",&a15);

   if (a15 == zero) {

    float adder15 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder15);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }

   printf("\n\tEnter 16th number : ");
   scanf("%f",&a16);

   if (a16 == zero) {

    float adder16 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14 + a15;

  printf("\n\n--------------------------------------------------------------------");
  printf("\n\n\tOUTPUT = %.2f",adder16);
  printf("\n\n--------------------------------------------------------------------\n");
  return 0;
   }


      break;
      
    case 's':
      
    printf("\n\tOperator : Subtraction\n\n");
      break;

    case 'S':
      
    printf("\n\tOperator : Square\n\n");
      break;

    case 'q':
      
    printf("\n\tOperator : Cube\n\n");
      break;

    default:
      
      printf("\n\t.");
      sleep (delay);

      printf(".");
      sleep (delay);

      printf(".\n");
      sleep (delay);

      printf("\n\tOperator : Unknown \n");
      return 0;
  }
  end:


  //THIS WILL COME IN END
  
/*    char after_calc;

    // Enhanced menu presentation
 printf("\n\n\n\n\t Where to proceed \n ");
 printf("  ==========================\n\n\n");

    printf("\n\t  Continue           ( c )\n");
   // printf("\n\t  Save and Continue  ( w )\n");
    printf("\n\t  Exit               ( e )\n");

    // Get user input with error handling
    printf("\n\t  Input : ");
    
    while (scanf(" %c", &after_calc) != 1 || (after_calc != 'c' && after_calc != 'e')) {
        printf("\nInvalid input. Please enter 'c' or 'e': ");
        // Clear input buffer to prevent infinite loop
        scanf("%*[^\n]"); // Discard invalid characters
    }

    switch (after_calc) {
        case 'c':
            // Implement save functionality here
	  printf("\n\tDirecting");
	 sleep(delay); 

	 printf(".");
	 printf(".\n\n");

	 goto start;

        //Run();

 
            break;
      case 'e':
            printf("\n\tExiting the game...\n");
            break;



	    
        default:
            // This shouldn't be reached due to validation

            printf("\n\tAn unexpected error occurred.\n");
    }*/ 

  return 0;
}
