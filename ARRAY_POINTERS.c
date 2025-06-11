#include <stdio.h>

/*int main(){
	int a[10] = {5,3,7,1,6,2};
	int *p = &a;
	//p = a;

	printf("%p\n",a);
	printf("%p\n",p);
	printf("%p\n",&a);
	printf("%p\n",&p);


	//printf("%d\n",a);
        printf("%d\n",*p);
        printf("%d\n",*a);
        //printf("%d\n",p);
	

	printf("%d\n",a[3]);
	printf("%d\n",3[a]);
	printf("%d\n",*(a+3));
	printf("%d\n",*(p+3));
}*/



int main(){
	int a[5],i;
	int *p = a;
	printf("Enter the elements in an array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);  //(a+i) || i(a) || (q+i) 
	}
	printf("The elements in an array are:");
	for(i=0;i<5;i++){
		printf("%d, ",a[i]); // *(a+i) || *(p+i) || i[a] || i[p]
	}
	printf("\n");
}

