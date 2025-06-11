#include <stdio.h>
#include <string.h>

// to store data of students 
 
/*struct student{
       char name[100];
	int rollNo;
 	float cgpa;
};

int main(){
	struct student s1;
	strcpy(s1.name,"vamshi krishna");
	s1.rollNo = 26;
	s1.cgpa = 9.2;

	struct student s2;
        strcpy(s2.name,"nithin");
        s2.rollNo = 28;
        s2.cgpa = 9.3;

	printf("student name = %s\n",s1.name);
	printf("student rollNo. = %d\n",s1.rollNo);
	printf("student cgpa = %f\n",s1.cgpa);

	printf("student name = %s\n",s2.name);
        printf("student rollNo. = %d\n",s2.rollNo);
        printf("student cgpa = %f\n",s2.cgpa);
}*/


//  about array(->) operator
	struct student{
            	char name[100];
        	int rollNo;
        	float cgpa;
	};
	struct student s1;
	struct student *ptr;
	ptr = &s1;

	int main(){
		//struct student *ptr = &s1;
		struct student s1 = {"raju",2435,8.8};
		struct student *ptr = &s1;
		printf("student name with ptr = %s\n",(*ptr).name);
		printf("student rollNO with ptr = %d\n",(*ptr).rollNo);
		printf("student cgpa with ptr = %f\n",(*ptr).cgpa);


		printf("student -> name = %s\n",ptr -> name);
		printf("student -> rollNo = %d\n",ptr -> rollNo);
		printf("student -> cgpa = %f\n",ptr -> cgpa);
	}


























