#include <stdio.h>

//int sum(int a,int b);  //function prototype

int main(){
	int sum(int a,int b);
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
        scanf("%d",&b);
	int S = sum(a,b); // function call
	printf("sum is %d\n",S);
}
// function definition
int sum(int x,int y){
	return x+y;
}

