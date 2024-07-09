#include <stdio.h>

int main(){
	int arraySize;

	//Ask the user for the array size:
	printf("Enter the size of the array: ");
	scanf("%d", &arraySize);

	//declare VLA based on the user input:
	int myArray[arraySize];

	//Intitialize array with values
	for (int i = 0; i < arraySize; i++){
		myArray[i] = i * i;
	}

	//Print array values:
	for (int i = 0; i < arraySize; i++){
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}

	return 0;
}
