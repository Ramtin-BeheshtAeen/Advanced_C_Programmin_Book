#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	char tic_tac_toe [3][3];
	char array[] = {'x', 'o'};

	//Initiallize the board
	for ( int i = 0; i < 3; i++ ){
		for ( int j = 0; j < 3; j++){
			// Assign 'x' or 'o' randomly to the board
			// rand() % 2 will Generate numbers between 0 and 1
			tic_tac_toe[i][j] = array[rand() % 2];

		}
	}
 

	//Printing the board
	for ( int i = 0; i < 3; i++ ){
		for ( int j = 0; j < 3; j++){
			printf(" %c ", tic_tac_toe[i][j]);
		}
		putchar('\n');
	}


 


	return(0);
}
