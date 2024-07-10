#include <stdio.h>


struct sorter {
	int n_item, start, end;
	int data[];
};

//The function is intended to create and return a pointer to a struct sorter
struct sorter * sorter_create(int n){
	return NULL;
}

void sorter_destroy(struct sorter *s){

}

void sorter_add(struct sorter *s, int value){

}

int sorter_get(struct sorter *s){
	return 0;	
}




void main(void){
	
	struct sorter *s;
	
	s = sorter_create(32);

	sorter_add(s, 3);
	sorter_add(s, 1);
	sorter_add(s, 2);

	for (int i = 0 ; i < 3; i++){
		printf("%d \n", sorter_get(s));
	}
	
	
	
}



