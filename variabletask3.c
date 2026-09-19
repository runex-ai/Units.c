/*

AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:VOLUME AND SURFACE AREA OF CYLINDER
DATE:9/19/2026
VERSION:1

*/

#include <stdio.h>

int main() {
	
	//declare variable
	float height ;
	float radius ;
	float volume ;
	float surface_area ;
	const float pi=3.142;
	
	
	//prompt the user
	
	printf("Enter the height : \t");
	scanf("%f", &height);
	
	printf("Enter the radius : \t");
	scanf("%f", &radius);
	
	//calculations
	
	volume=pi*radius*height;
	surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
	
	printf("The voulume of cylinder is : %f \n",volume);
	printf("The surface_area of cylinder : %f \n",surface_area);
	
	return 0;
	
}
