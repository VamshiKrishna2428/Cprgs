#include <stdio.h>

int main(){
	int countLength(char arr[]);
	char name[30];
	fgets(name,30,stdin);
	printf("length is:%d\n", countLength(name));
}

int countLength(char arr[]){
	int count = 0;
	for(int i=0;arr[i] != '\0';i++){
		count ++;
	}
	return count-1;
}

