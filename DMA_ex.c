#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	ptr = (int *) calloc(5,sizeof(int));

	for(int i=0;i<n;i++){
		scanf("%d",ptr[i]);
	}

	/*ptr[0] = 2;
	ptr[1] = 4;
	ptr[2] = 6;
	ptr[3] = 8;
	ptr[4] = 10;*/

	for(int i=0;i<n;i++){
		printf("%d\n",ptr[i]);
	}
}

