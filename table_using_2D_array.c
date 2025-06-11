#include <stdio.h>

void storeTable(int arr[][10],int row,int column,int number);

int main(){
	int tables[2][10];
	storeTable(tables,0,10,4);
	storeTable(tables,1,10,5);
	for(int i=0;i<10;i++){
	printf("%d\t",tables[0][i]);
	}
	printf("\n");
	for(int i=0;i<10;i++){
        printf("%d\t",tables[1][i]);
        }
        printf("\n");
	return 0;
}

void storeTable(int arr[][10],int row,int column,int number){
	for(int i=0;i<column;i++){
		arr[row][i] = number*(i+1);
	}
}


