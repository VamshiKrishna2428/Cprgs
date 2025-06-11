#include <stdio.h>
#include <math.h>

int power_of_number(int a, int b);

int main(){
	int a,n;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter n:\n");
        scanf("%d",&n);
	int p = power_of_number(a,n);
	printf("power of a number is: %d\n",p);
}
int power_of_number(int x, int y){
	return pow(x,y);
}
