#include<stdio.h>

void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main(){
	int arr[] = {5,10,15,20,25,30};
	reverse(arr,6);
	printArr(arr,6);
	return 0;
}

void reverse(int arr[],int n){
	for(int i=0;i<n/2;i++){
		int firstValue = arr[i];
		int secondValue = arr[n-i-1];
		arr[i] = secondValue;
		arr[n-i-1] = firstValue;
	}
}

void printArr(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

