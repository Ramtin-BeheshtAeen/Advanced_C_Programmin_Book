#include <stdio.h>

int main(){
	
	int variable = 20;
	
	printf("This variable value is: %d  \n ", variable);
	printf("This variable occupies %lu bytes  \n", sizeof( int ) );
	printf("This variable Address  in memory is: %p  \n", &variable);

	return(0);
}
