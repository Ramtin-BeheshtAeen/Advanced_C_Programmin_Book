#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
	int month;
	int year;
};

struct person {
	char name[50];
	int age;
	int id;
	struct Date birthdate;
};

struct person *create_person(const char *name, int age, int id, int birthdate_month, int birthdate_year){
	struct person *p = malloc( sizeof(struct person) );
	if (p == NULL){
		return NULL;
	}

	*p = (struct person) {
		.age           = age,
		.id            = id,
		.birthdate     = {.month = birthdate_month, .year = birthdate_year}

	};

	strncpy(p->name, name, sizeof(p->name) - 1 );
	p -> name[sizeof(p->name) - 1] = '\0'; //null-termination
					       
	return p;

}

int main() {
    struct person *p = create_person("Alice", 30, 1, 5, 1990);
    if (p != NULL) {
        printf("Person created: %s, %d years old, ID: %d, Birthdate: %d/%d\n", p->name, p->age, p->id, p->birthdate.month, p->birthdate.year);
        free(p);
    }
    return 0;
}
