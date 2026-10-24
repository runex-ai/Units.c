/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A ROOM OCCUPANCY(multiple branches)
DATE:10/24/2026
VERSION:1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int chain[3][5][10];
	int totaloccupied=0;
	int a;
	int b;
	int c;
	
	srand(time(NULL));
	
	for(a=0;a<3;a++){
		for(b=0;b<5;b++){
			for(c=0;c<10;c++){
				
				chain[a][b][c]=rand()%2;
				
				
				if(chain[a][b][c]==1){
					totaloccupied++;
				}
			}
			
		}
	}
	
		printf("Total rooms occupied accross all branches %d \n",totaloccupied);
		
	return 0;
	
}