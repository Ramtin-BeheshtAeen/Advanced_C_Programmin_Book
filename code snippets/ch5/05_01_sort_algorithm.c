#include <stdio.h>
#include <malloc.h>
//#include <assert.h>


struct sorter {
	int n_item, start, end;
	int *data;
};

//The function is intended to create and return a pointer to a struct sorter
struct sorter * sorter_create(int n){
	printf("sorter create function");
	int *data;
	struct sorter *s = malloc(sizeof(struct sorter));
	
	if (s == NULL){
		printf("line 17 failed");
		return NULL;
	}

	data = malloc(sizeof(int) * n);
	
	if (data == NULL){	
		printf("line 24 failed");
		free(s);
		return NULL;
	}
	
	//fulling *data_array with big int:
	for (int i)

	*s = (struct sorter){
		.n_item = n,
		.start  = 0,
		.end    = 0,
		.data   = data
	};

	return s;
}

void sorter_destroy(struct sorter *s){

}


/* 
 * Adding values to data structure and simultaneously sorting them.
 */
void sorter_add(struct sorter *s, int value){
	//it will validate to see whether the client passed the correct format of the sorter

	printf("we are in add \n");
	//We dont dnt want to use the -> operator in order to accsess the data array in s, so a new array is defined:
	int *array;
	int number_of_items, start, end;

	array            = s -> data;
	start		 = s -> start;
	end		 = s -> end; 			
	number_of_items  = s -> n_item;

 	printf("end : %d, start: %d \n", end, start);
	for (int i = 0; i < (end - start) + 1; i++){
		int tmp = array[i];
		printf("compare %d with %d \n", tmp , value);
		if (tmp > value){
			//replace the new value with temp value because it is bigger
			array[i] = value;
			// change temp value to value in order to continue the comparsion
			tmp = value;

		}
	}
	//when ever add a new item just add one to the end
	s->end = end + 1;


}

int sorter_get(struct sorter *s){
	return 0;	
}




void main(void){	
	printf("main \n");
	struct sorter *s;
	//it is going to sort 32 elements	
	s = sorter_create(32);
	printf("s defined");
	sorter_add(s, 3);
	sorter_add(s, 1);
	sorter_add(s, 2);

	for (int i = 0 ; i < 3; i++){
		printf("%d \n", sorter_get(s));
	}
	
	
	
}


