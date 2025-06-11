#include<stdio.h>

void max_no_using_pointer(int *m,int *n);

int main(){
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
        scanf("%d",&b);
	max_no_using_pointer(&a,&b);
}

void max_no_using_pointer(int *m,int *n){
	if(*m>*n){
		printf("%d is maximum\n",*m);
	}
	else if(*m<*n){
                printf("%d is maximum\n",*n);
        }
	else{
		printf("both are equal\n");
	}
}
