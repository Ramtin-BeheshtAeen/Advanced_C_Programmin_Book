#include <stdio.h>
#include <stdlib.h>

int* make_array_func(void){
	//Dynamically allocate an array of 5 integers
	int *array = malloc( 5 * sizeof(int));

	if (array == NULL){
		//Handle memory allocation failure
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	//Asigning values to the Array:
	for ( int x = 0; x < 5; x++){
		array[x] = rand() % 10 + 1;
	}

	return array;
}

int main(){
	int *r;

	r = make_array_func();

	puts("Here are 5 random numbers:");
	for ( int x = 0; x < 5; x++) {
		printf("%d\n", r[x]);
	}
	//Frreing up the memory!! Dont Forgot that
	free(r);
	return 0;

}
