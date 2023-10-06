#include<stdio.h>
int main(){
	char type;
	float area,radius,height,base,length,width;
	
	printf("R-rectangle,T-triangle,C-circle\nEnter shape type: ");
	scanf("%c",&type);
	
	//calculating and displaying the area of the designated shape
	
	switch(type){
		case'r':
		case'R':printf("Enter length: ");
				scanf("%f",&length);
				printf("Enter width: ");
				scanf("%f",&width);
				area=length*width;
				printf("Area: %.2f",area);
				break;
		case't':
		case'T':printf("Enter height: ");
				scanf("%f",&height);
				printf("Enter base: ");
				scanf("%f",&base);
				area=height*base*1/2.0;
				printf("Area: %.2f",area);
				break;
		case'c':
		case'C':printf("Enter radius: ");
				scanf("%f",&radius);
				area=22/7.0*radius*radius;
				printf("Area: %.2f",area);
				break;
		default:printf("Invalid input");
	}
	return 0;
}
