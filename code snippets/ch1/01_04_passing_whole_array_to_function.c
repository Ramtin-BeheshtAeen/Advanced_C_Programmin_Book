#include <stdio.h>

void print_array_func(char input_array[]){
	
	for ( int x = 0; x < 6; x++){
		input_array[x]++;
		putchar(input_array[x]);
	}
}

int main(){

	char text[] = "Gdkkn ";

	print_array_func(text);
	putchar('\n');

	return(0);

}
