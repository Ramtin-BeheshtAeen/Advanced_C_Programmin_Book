#include <stdio.h>

int main(){
	int original_array[5] = {10, 20, 30, 40, 50};
	int duplicate[5];

	for ( int i = 0; i < 5; i++){
		duplicate[i] = original_array[i];
	}

	puts("Arrays Values \n");

	for ( int j = 0; j < 5; j++ ){
		printf("Element#%d %7d == %d \n", j, original_array[j], duplicate[j]);
	}

	
}
