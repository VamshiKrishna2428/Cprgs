#include <stdio.h>

/*int main(){
	int i,j,n,m,a[3][3];
	//printf("Enter the row size:\n");
	//scanf("%d",&n);
	//printf("Enter the column size:\n");
        //scanf("%d",&m);
	//printf("Enter the elements:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements are:\n");
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){	
			printf("%d, ",a[i][j]);
		}
	}
	printf("\n");
}*/


int main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int *p;
	p = a[0]; // a[0][0]
	
	printf("%u\n",p);
	printf("%u\n",a);
	printf("%u\n",*a);
	printf("%u\n",&a[0][0]);
	printf("%u\n",&a);
	printf("%u\n",a[0]);


	printf("%u\n",a[1]);
	printf("%u\n",a[1][0]);
	printf("%u\n",*(a+1)+2);
	printf("%d\n",*(*(a+1)+2));
}






















































