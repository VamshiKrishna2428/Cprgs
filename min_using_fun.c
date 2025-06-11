#include<stdio.h>
int min_using_fun(int arr[],int size)
{
	int min=arr[0];
	int i=0;
	for(i=1;i<size;i++){
		if(min>arr[i]){
			min = arr [i];
		}
	}
	return min;
}
int main()
{
	int i=0,min=0;
	int numbers[]={21,4,5,7,8,6,51,24};
	min= min_using_fun(numbers,8);
	printf("minimum numer is %d\n",min);
	return(0);
}

