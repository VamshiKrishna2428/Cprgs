#include <stdio.h>

#include <string.h>

int main(){
	char name[20] = "vamshi ";
	char name2[] = "krishna";
	// length of string
	int length = strlen(name);
	// int length = strlen(name2);
	printf("length is:%d\n",length);
	// copy 
	//strcpy(name2,name);
	puts(name);
	// concatination
	//strcat(name,name2);
	puts(name);
	// compare
	int compare = strcmp(name,name2);
	printf("%d\n",compare);
}

