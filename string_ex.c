#include <stdio.h>
#include <string.h>

// to print first name and last name of a user
 
/*int printString(char arr[]);

int main(){
	char firstname[100],lastname[100];
	printf("Enter firstname:");
	scanf("%s",firstname);
	printf("Enter lastname:");
        scanf("%s",lastname);
	printf("your full name is:\n");
	printString(firstname);
	printString(lastname);
	return 0;
}

int printString(char arr[]){
	for(int i=0;arr[i] != 0;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
}*/

// program to write full name of a user

/*int main(){
	char str[100];
	printf("Enter your fullname:\n");
	fgets(str,100,stdin);
	printf("Your fullname is:\n");
	puts(str);
}*/
 
// string using pointers


/*int main(){
	char *CanChange = "Hello World";
	puts(CanChange);
	
	CanChange = "Hello";
	puts(CanChange);

	char CannotChange [] = "Hello World";
	puts(CannotChange);
	
	//char CannotChange [] = "Hello";
	//puts(CannotChange);
}*/



// using STRING functions 



/*int main(){
	char firstname [] = "vamshi ";
	char lastname [] = "krishna";

	int length = strlen(firstname);
	printf("length is: %d\n",length);

	//strcat(firstname,lastname);
        //puts(firstname);

	//strcpy(firstname,lastname);
	//puts(firstname);

	printf("%d\n",strcmp(firstname,lastname));
}*/



// take a string input from user using %c

/*int main(){
	char str[100];
	char ch;
	int i=0;
	while(ch!='\n'){
		scanf("%c",&ch);
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
	puts(str);
}*/


// SALTING concept
 
/*void salting(char password[]);

int main(){
	char password[100];
	printf("Enter password:\n");
	scanf("%s",password);

	salting(password);

}

void salting(char password[]){
	char salt [] = "@*24";
	char new_password [200];

	strcpy(new_password,password);
	strcat(new_password,salt);

	puts(new_password);
}*/

// function that counts vowels in a string

/*int count_vowels(char str[]);

int main(){
	char str[100];
	printf("Enter a string:\n");
	fgets(str,100,stdin);

	int n = count_vowels(str);
	printf("vowels in a string are:%d\n",n);
}

int count_vowels(char str[]){
	int count = 0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				count++;
		}
	}
	return count;
}*/

// to convert lower case letters to upper case

#include <ctype.h>
/*int main(){
	char s[100];
	printf("Enter a string:\n");
	fgets(s,100,stdin);
	int i;
	if(s[i]>='a' && s[i]<='z'){
	   for (int i = 0; s[i]!='\0'; i++) {
        	if(s[i] >= 'a' && s[i] <= 'z') {
         		s[i] = s[i] - 32;
		}
	   }
	   printf("Upper case string is:\n");
	   puts(s);
	}
	else{
		for(int i=0;s[i]!='\0';i++){
			if(s[i]>='A' && s[i]<='Z'){
				s[i] = s[i] + 32;
			}
		}
		printf("lower case string is:\n");
		puts(s);
	}
}*/

// to remove spaces in a string


int main(){
	char str [] = " v in ay ";
	char trim(str);
	puts(str);
}


























