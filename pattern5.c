#include<stdio.h>
void main(){
	int n,i,j;
	printf("enter no. of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i+j<=n){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}

