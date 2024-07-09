#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int Id;
};

int main() {

	struct Person person;
	char buffer[32];
	
	printf("Enter your name: ");
	fgets(buffer, 32, stdin);

	/* Allocate Storage */
	person.name = (char *)malloc( strlen(buffer) + 1 );

	if (person.name == NULL)
	{
		puts("Unable to allocate Storage");
		exit(1);
	}

	/* Copying the buffer to the allocated storage */
	strcpy( person.name , buffer);
	

	printf("Enter the Id: ");
	scanf("%d", &person.Id);

	printf("User Name is: %s", person.name);
	printf("User Id is: %d \n", person.Id);

	return(0);
}

