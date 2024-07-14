#include <stdio.h>
#include <malloc.h>


struct sorter {
	int n_item, start, end;
	int *data;
};

//The function is intended to create and return a pointer to a struct sorter
struct sorter * sorter_create(int n){
	int *data;
	struct sorter *s = malloc(sizeof(struct sorter));
	
	if (s == NULL){
		return NULL;
	}

	data = malloc(sizeof(int) * n);
	
	if (s->data == NULL){
		free(s);
		return NULL;
	}

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

}

int sorter_get(struct sorter *s){
	return 0;	
}




void main(void){
	
	struct sorter *s;
	//it is going to sort 32 elements	
	s = sorter_create(32);
	
	sorter_add(s, 3);
	sorter_add(s, 1);
	sorter_add(s, 2);

	for (int i = 0 ; i < 3; i++){
		printf("%d \n", sorter_get(s));
	}
	
	
	
}


