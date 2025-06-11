#include <stdio.h>

int square_of_no(int n);
int _square_of_no(int *n);

int main(){
	int n;
	printf("Enter n\n");
	scanf("%d",&n);
	square_of_no(n);
	printf("number is:%d\n",n);
	_square_of_no(&n);
	printf("number is:%d\n",n);
}
int square_of_no(int n){
	n = n*n;
	printf("square is:%d\n",n);
}
int _square_of_no(int *n){
        *n = (*n) * (*n);
        printf("square is:%d\n",*n);
}
