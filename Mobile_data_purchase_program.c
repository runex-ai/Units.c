/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:MOBILE DATA BUNDLE PURCHASE
DATE:9/27/2026
VERSION:1
*/

#include <stdio.h> 

int main() {
	
	int choice;
	int cost;
	
	
	//display mobile_data_provided
	printf("Select data bundle : \n");
	printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @ 200 KES \n");
	printf("3. 1GB @ 350 KES \n");
	printf("4. 2GB @ 600 KES \n");

 //prompt the user
     
    printf("Enter your choice (1-4) : \t");
    scanf("%d",&choice);
    
    switch(choice){
    	case 1:
    	cost= 50 ;
    	printf("You selected 100MB.Cost = %d KES \n",cost);
    	break;
    	case 2:
		cost=200 ;
		printf("You selected 500MB.Cost = %d KES \n",cost);
		break;
		case 3:
		cost=350 ;
		printf("You selected 1GB.Cost = %d KES \n",cost);
		break;
		case 4:
		cost=600 ;
		printf("You selected 2GB.Cost = %d KES \n",cost);
		break;
		
		default:
			printf("Invalid choice \n");
	}

	return 0;  

	
}
