#include <stdio.h>

int main(){
	int work;
	printf("enter the work number\n");
	scanf("%d",&work);
	switch(work){
		case 1: printf("Sleeping\n");
			break;
		case 2: printf("Brushing\n");
			break;
		case 3: printf("Bathing\n");
                        break;
		case 4: printf("Eating\n");
                        break;
		case 5: printf("Reading\n");
                        break;
	   	case 6: printf("Working\n");
                        break;
		case 7: printf("Teaching\n");
                        break;		
		default: printf("Enter correct work\n");
	}
}

