#include <stdio.h>
#include <stdlib.h>

int main(){
	int *myArray;
	int arraySize;

	printf("Enter the size of the Array: ");
	scanf("%d",&arraySize);
	
	// Dynamically allocate memory for the array
	myArray = (int *)malloc(arraySize * sizeof(int));

	//Checking wheter rhe memory allocation was successful or not:
	if(myArray == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}

	//Initialize array with values:
	for(int i = 0; i < arraySize; i++) {
		myArray[i] = i * i;
	}

	//Print Arrays Values
	for (int i = 0; i < arraySize; i++){
		printf("myArray[%d] = %d\n",i, myArray[i]);
	}

	//Free the allocated memory
	free(myArray);
	
	return 0;
}

