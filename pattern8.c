#include<stdio.h>
void main(){
	int i,j,space,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(space=1;space<=(n-i);space++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

