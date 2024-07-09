#include <stdio.h>

void print_arrays_char( char a ){
	a++;
	putchar(a);
}

int main(){
	char text[] = "Gdkkn";

	for( int x = 0; x < 6; x++ ){
		print_arrays_char(text[x]);
	}
	putchar('\n');
}
