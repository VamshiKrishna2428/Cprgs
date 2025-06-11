#include<stdio.h>
int min_using_fun1(int arr[],int n)
{
        int min=arr[0];
        int i=0;
        for(i=1;i<n;i++){
                if(min>arr[i]){
                        min = arr [i];
                }
        }
        return min;
}
int main()
{
        int i=0,min=0,n,list[10];
	printf("Enter the size/n");
	scanf("%d",&n);
	printf("Enter the elements\n");
        //int numbers[]={21,4,5,7,8,6,51,24};
	for(i=0;i<n;i++)
		scanf("%d",list[i]);
	//min= min_using_fun(numbers,8);
	for(i=0;i<n;i++)
	min= min_using_fun1(list[i],n);
        printf("minimum numer is %d\n",min);
        return(0);
}
