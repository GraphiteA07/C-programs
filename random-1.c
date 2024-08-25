//Working Accordingly

#include <stdio.h>

int main() {

int Cyear; 
int Byear;





printf("Enter the current year\n");
scanf("%d",&Cyear);

printf("\nEnter your birth year\n");
scanf("%d",&Byear);

int age= (Cyear-Byear);

printf("\nYou are %d years old\n",age);




if (age>=18) {

	printf("\nSo, you can get a driving license");
}


else if (age<18) {

	printf("\nSo, you cannot get a driving license");
}



 



return 0;

}
