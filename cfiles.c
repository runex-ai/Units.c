#include <stdio.h>
#include <stdlib.h>


void writeToFile();
void readToFile();
void appendFromFile();

int main(){
	
	appendFromFile();
	readToFile();
	
	return 0;
}

void writeToFile(){
	FILE * fptr;
	char sentence[300];
	fptr= fopen("C:\\Users\\ADMIN\\OneDrive\\Attachments\\files\\sample.txt","w");
	
	if(fptr==NULL){
		printf("Error creating the file(path) \n");
		exit(1);
	}
	printf("Enter the paragraph \n");
	fgets(sentence,sizeof(sentence),stdin);
	
	fputs(sentence, fptr);
	printf("paragraph successufully written to file \n");
	fclose(fptr);
}
void readToFile(){
	FILE *fptr;
	int ch;
	fptr= fopen("C:\\Users\\ADMIN\\OneDrive\\Attachments\\files\\sample.txt","r");
	
		if(fptr==NULL){
		printf("Error creating the file(path) \n");
		exit(1);
	}
	printf("\n ---Reading paragrapg from file---\n");
	
	while((ch = getc(fptr)) != EOF){
		putchar(ch);
	}
	printf("File successfully read \n");
	fclose(fptr);
}
void appendFromFile(){
	FILE *fptr;
	char sentence[300];
	fptr= fopen("C:\\Users\\ADMIN\\OneDrive\\Attachments\\files\\sample.txt","a");
	
		if(fptr==NULL){
		printf("Error creating the file(path) \n");
		exit(1);
}

printf("Enter a  paragraph to append \n");
fgets(sentence,sizeof(sentence),stdin);
	
	fputs(sentence, fptr);
	printf("paragraph successufully written to file \n");
	fclose(fptr);

}