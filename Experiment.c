#include <stdio.h>

int main(){
	
	char a[3];
	
	printf("Enter");
	scanf("%s",&a);
	
	if(a=="yes"){
		
		int Cyear;
	int Byear;
	
	printf("\nWant to know your age?\n");
	
	printf("\nEnter the current year\n");
	scanf("%d",&Cyear);
	
	printf("\nEnter your Birthyear\n");
	scanf("%d",&Byear);
	
	int age =Cyear-Byear;
	
	printf("\nYou are %d years old",age);
}
	else{
		printf("OK");
	}
	
	
	return 0;
}	


