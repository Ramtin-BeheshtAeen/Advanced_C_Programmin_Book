#include <stdio.h>
#include <stdlib.h>

int main(){
	struct person {
		char name[32];
		int age;

	}; 

	struct person *employee;
	
	/* Allocating storage for the POinter Structure: */
	employee = (struct person *)malloc( sizeof(struct person) * 1 );
	if (employee == NULL){
		puts("Unable to allocate Storage");
		exit(1);
	}
	
	/*Getting the name of the Employee strucutre:*/
	printf("Enter the Employees name: \n");
	fgets(employee->name, 32, stdin);

	/*Getting the age of the Employee strucutre:*/
	printf("Enter the Employees age: \n");
	scanf("%d", &employee->age);

	printf("Employee's name is: %s", employee -> name);
	printf("Employee's name is: %d \n", employee -> age );

	return(0);
}
