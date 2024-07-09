#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
};

int main() {
	
	char buffer[32];
	struct Person *employee;

	/* Allocating Storage for the Structure: */
	employee = (struct Person *)malloc( sizeof( struct Person) * 1);
	if(employee == NULL){
		printf("Unable to allocate Storage");
		exit(1);
	}

	printf("Enter the Employess's name:");
	fgets(buffer, 32, stdin);

	/* Allocating storage for the pointer member of the pointer Structure, which is named `name`*/
	employee -> name = (char *)malloc( sizeof(buffer) );
	if (employee -> name == NULL){
		printf("Unable to allocate Storage");
		exit(1);
	}

	/* Copying the buffer to the name: */
	strcpy(employee->name, buffer);
	/* Getting he age: */
	printf("Enter your age: ");
	scanf("%d", &employee->age);

	printf("Employee's name: %s", employee->name);
	printf("Employee's age: %d \n", employee->age);

};
