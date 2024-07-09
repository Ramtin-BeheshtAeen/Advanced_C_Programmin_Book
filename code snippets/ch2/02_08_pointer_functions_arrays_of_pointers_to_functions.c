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


int main(){
	double (*opration_array[]) (int, int) = {add, subtract, multiply, divide};

	double result = (*opration_array[2])(3, 20);
	
	printf("result: %f \n", result);

}
