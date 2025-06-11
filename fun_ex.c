#include <stdio.h>

void printNamaste();
void printBonjour();

int main(){
	char C;
	printf("Enter i for Indian and f for French\n");
	scanf("%c",&C);
	if(C=='i'){
		printNamaste();
	}else if (C=='f'){
		printBonjour();
	}else{
		printf("not a valid letter\n");
	}
	return 0;
}
void printNamaste(){
	printf("Namaste\n");
}
void printBonjour(){
	printf("Bonjour\n");
}

