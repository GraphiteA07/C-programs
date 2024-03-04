#include <stdio.h>

int main(){
	
	printf("\t\t\tRANDOM THINGS\n");
	
	char a[20];
	printf("What is your name? \n");
	scanf("%s",&a);
	
	
	printf("\n Hi! %s\n",a);
	
	int Cyear;
	int Byear;
	
	printf("\nWant to know your age?\n");
	
	printf("\nEnter the current year\n");
	scanf("%d",&Cyear);
	
	printf("\nEnter your Birthyear\n");
	scanf("%d",&Byear);
	
	int age =Cyear-Byear;
	
	printf("\nYou are %d years old",age);
	

	
	return 0;
}
