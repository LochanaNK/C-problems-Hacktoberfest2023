#include<stdio.h>
int main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	
	//determinig whether the year took as input is a leap year or not
	
	if(year%4==0){
		printf("It is a leap year");
	}else if(year%4!=0){
		printf("It is not a leap year");
	}else{
		printf("Invalid input");
	}
	return 0;
}
