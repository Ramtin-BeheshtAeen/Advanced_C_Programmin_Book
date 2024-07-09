#include <stdio.h>

void function(int x)
{
	printf("X: %d \n", x);
}

int main(){

	void (*function_pointer)(int);
	
	function_pointer = &function;

	(*function_pointer)(4);
		
	return(0);
}
