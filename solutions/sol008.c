#include<stdio.h>
int main(){
	char type;
	float num1,num2,ans;
	
	printf("+ -addition\n- -subtraction\n* -multiplication\n/ -division\nEnter operation: ");
	scanf("%c",&type);
	
	//calculating and displaying the answer according to the operation chose
	
	switch(type){
		case'+':printf("Enter first number: ");
				scanf("%f",&num1);
				printf("Enter second number: ");
				scanf("%f",&num2);
				ans=num1+num2;
				printf("%.2f",ans);
				break;
		case'-':printf("Enter first number: ");
				scanf("%f",&num1);
				printf("Enter second number: ");
				scanf("%f",&num2);
				ans=num1-num2;
				printf("%.2f",ans);
				break;
		case'*':printf("Enter first number: ");
				scanf("%f",&num1);
				printf("Enter second number: ");
				scanf("%f",&num2);
				ans=num1*num2;
				printf("%.2f",ans);
				break;
		case'/':printf("Enter first number: ");
				scanf("%f",&num1);
				printf("Enter second number: ");
				scanf("%f",&num2);
				ans=num1/num2;
				printf("%.2f",ans);
				break;
		default:printf("Invalid operation");
	}
	return 0;
}
