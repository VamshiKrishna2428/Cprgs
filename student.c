#include <stdio.h>
int main(){
	int marks;
	printf("Enter the marks\n");
	scanf("%d",&marks);
	if(marks>=30 && marks<=100){
		printf("pass\n");
	}
	else if(marks<=30 && marks>=0){
		printf("fail\n");
	}
	else{
		printf("Enter valid marks\n");
	}

}


