#include<stdio.h>
int main(){
	int i=1,j=1;
	
	//printing using while loop
	
	printf("Printing numbers using while loop\n\n");
	while(i<=50){
		printf("%d ",i);
		i++;
	}
	printf("\n");
	
	//printing using for loop
	
	printf("\nPrinting numbers using for loop\n\n");
	for(i=1;i<=50;i++){
		printf("%d ",i);
	}
	printf("\n");
	
	//printing using do while loop
	
	printf("\nPrinting numbers using do while loop\n\n");
	i=1;
	do{
		printf("%d ",i);
		i++;
	}while(i<=50);
	
	return 0;
}
