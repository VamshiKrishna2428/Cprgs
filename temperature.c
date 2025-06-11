#include <stdio.h>
	
void temperature(int temp);

int main(){
	int temp;
	printf("Enter temperature:\n");
	scanf("%d",&temp);
	temperature(temp);
}
void temperature(int x){
	if(x<=10){
		printf("Climate is cold\n");
	}
	if(x>=11){
		printf("Climate is hot\n");
	}
}
