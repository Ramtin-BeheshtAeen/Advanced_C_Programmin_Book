#include <stdio.h>

double add(double x, double y){
	return x + y;
}

int main(){

	double (*add_function_ptr) (double, double);

	add_function_ptr = add;
	
	double result = add_function_ptr(20, 10);

	printf("result: %f \n", result);

	return 0;
}
