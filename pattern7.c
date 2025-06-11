#include<stdio.h>
void main(){
        int n,i,j,number=1;
        printf("Enter no. of rows:\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                        printf("%d",number);
			number++;
                        }
                printf("\n");
        }
}
