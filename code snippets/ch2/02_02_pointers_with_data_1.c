#include <stdio.h>

int main() {
	
	int numerical_var = 42;
	int *numerical_var_ptr;
	
	numerical_var_ptr = & numerical_var;

	printf("Address of the variable numerical_var is: %p  \n", &numerical_var);
	printf("the value stored in numerical_var_ptr is: %p  \n", numerical_var_ptr);
	
	
	printf("Value of the variable numerical_var is: %d \n", numerical_var);
	printf("value of the memeory address in numerical_var is: %d \n", *numerical_var_ptr);


	return(0);
}

