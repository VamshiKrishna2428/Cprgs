#include <stdio.h>
int count_even(int arr[],int n);
int main(){
	/*float price[4];
	printf("Enter prices:\n");
	for(int i=0;i<3;i++){
		scanf("%f",&price[i]);
	}
	for(int i=0;i<3;i++){
		printf("total price [i]:%f\n",price[i]+(0.18*price[i]));
	}*/


	/*int aadhar[5];

	//int *ptr = &aadhar[0];
	for(int i=0;i<5;i++){
		printf("%d index:",i);
		scanf("%d",&aadhar[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d index =  %d\n",i,aadhar[i]);
	}*/

	
	int i,arr[i],n;
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}

	printf("even numbers are:%d\n",count_even(arr,n));
}
int count_even(int arr[],int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2 == 0){
			count++;
		}
	}
	return count;
}
