
#include <stdio.h>

int main(){
	
    int a;
	
	printf("Want to know your age?\n");
	printf("\n(1 means 'yes' and   0 means 'no')\n")
	;scanf("\n%d",&a);
	
	
	
	if(a==1){
	
		
	int Cyear;
	int Byear;
	
	
	printf("\nEnter the current year\n");
	scanf("%d",&Cyear);
	
	printf("\nEnter your Birthyear\n");
	scanf("%d",&Byear);
	
	int age =Cyear-Byear;
	
	printf("\nYou are %d years old\n",age);
	}
	
	

	if (a==0);{
		printf("OK");
	}
	
	
	return 0;
}	




