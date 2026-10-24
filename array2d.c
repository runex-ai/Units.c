/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A ROOM OCCUPANCY(one branch)
DATE:10/24/2026
VERSION:1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int occupancy[5][10];
	int occupied,vaccant;
	int i;
	int j;
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			occupancy[i][j]=rand()%2;
		}
	}
	for(i=0;i<5;i++){
		occupied=0;
		vaccant=0;
		
		for(j=0;j<10;j++){
			
			printf("%d",occupancy[i][j]);
			
			if(occupancy[i][j]==1){
				occupied++;
			}else{
				vaccant++;
			}
		}
		
		printf("Floor %d ,occupied %d, vaccant %d \n",i+1,occupied,vaccant);
		
	}
	
	return 0;
	
}