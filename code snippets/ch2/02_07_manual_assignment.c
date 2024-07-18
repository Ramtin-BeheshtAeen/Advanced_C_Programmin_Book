#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
	char name[50];
	int age;
};

struct person *create_person(const char *name, int age){
	struct person *p = malloc( sizeof(struct person) );
	if ( p == NULL ) {
		return NULL;
	}

	strncpy(p->name, name, sizeof(p->name) - 1 );
	p->name[sizeof(p->name) - 1] = '\0'; //Makeing sure that string ends up with null
	p->age = age;

	return p;

}

int main() {
	struct person *person_instance = create_person("Ramtin", 22);

	if ( person_instance != NULL ){
		printf("Person created: %s, %d years old", person_instance->name, person_instance->age);
		free(person_instance);
	}

	return 0;
}







