/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A  SIMPLE GUESSING GAME
DATE:10/5/2026
VERSION:1
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(NULL));
	int secret =rand()%20+1;
	int guess=0;
	int attempts=0;
	
	printf("Guess the number(1-20) \n");
	
	do{
		printf("Enter your guess:");
		if(scanf("%d",&guess)!=1){
			printf("Invalid input. \n");
			while(getchar()!='\n');
			continue;
		}
		attempts++;
		
		if(guess>secret)
		printf("Too high!\n");
		
		else if(guess<secret)
		printf("Too low!\n");
		
		else
		printf("Congraduations! \n");
		
	}while(guess!=secret);
	
	printf("It took you %d attempts.\n",attempts);
	
	return 0;
}