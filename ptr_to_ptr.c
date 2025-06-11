#include <stdio.h>

int main(){
		float price = 105.543;
		float *ptr = &price;
		float **pptr = &ptr;
		printf("%f\n",*ptr);
 	  	printf("%f\n",**pptr);

	/*int i = 4;
	int *ptr = &i;
	int **pptr = &ptr;
	printf("%d\n",*ptr);
	printf("%d\n",**pptr);*/
}


