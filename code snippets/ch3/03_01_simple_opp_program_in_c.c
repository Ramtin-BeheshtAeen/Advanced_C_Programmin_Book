#include <stdio.h>

struct Person {
	int age;
	// In structures we can not define functions
	// But we can Define variables
	// If we can define variable, so we can define pointer variables too
	// and if we can define pointer variables, we can define pointer functions too
	void (*set)(struct Person *, int);
	int (*get)(struct Person *);
};


void setAge(struct Person * instance, int age){
	instance -> age = age;
};

int getAge(struct Person * instance){
	return(instance-> age);
};


/* Creating Objects: */
int main(){
	struct Person person1;
	// Binding:
	person1.set = setAge;
	person1.get = getAge;
	
	//Setting the age for the Object person1 to 18:
	person1.set(&person1, 18);
	printf("The age is: %d \n", person1.get(&person1));

	return(0);
}


