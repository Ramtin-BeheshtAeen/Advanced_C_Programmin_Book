#include <stdio.h>

double add(int x, int y){
	return x + y;
}

double subtract(int x, int y){
	return x - y;
}

double multiply(int x, int y){
	return x * y;
}

double divide(int x, int y){
	return x / y;
}


void ( *select_operation() ) {
	int option = 0;
	printf("Select an operation: \n");
	printf("Enter 1 for Subtracting\n");
	printf("Enter 2 for adding\n");
	printf("Enter 3 for multipling\n");
	printf("Enter 4 for dividing\n");

	scanf("%d", &option);

	switch (option){
		case 1: return subtract;
		case 2: return add;
		case 3: return multiply;
		case 4: return divide;
		default: return NULL;

	}
		 
}

int main(){

	double (*operation) (int, int) = select_operation();	
	printf("result: %f \n", operation(20, 5));
}
