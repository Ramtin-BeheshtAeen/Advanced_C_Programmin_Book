#include <stdio.h>
#include <stdlib.h>

int make_array_func(void){

	int array[5];
	
	for ( int x = 0; x < 5; x++){
		array[x] = rand() % 10 + 1;
	}

	return(array);
}

int main(){

	int r[5];

	r = make_array_func();

	puts("Here are your 5 random numbers:");
	for (int x = 0; x < 6; x++){
		printf("%d\n",r[x]);
	}
}



