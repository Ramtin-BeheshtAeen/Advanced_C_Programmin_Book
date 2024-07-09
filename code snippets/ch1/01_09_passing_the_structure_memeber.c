#include <stdio.h>
#include <string.h>

/* Defining the Function:*/
void show_author_name(char* inputString);

int main(){

	struct Date {
		int month;
		int day;
		int year;
	};

	struct Author {
		struct Date birthday;
		char name[30];
	};

	struct Author authors[3];

	authors[0].birthday.day = 15;
	authors[0].birthday.month = 10;
	authors[0].birthday.year = 1844;
	strcpy(authors[0].name, "Nietzsche");

	
	authors[1].birthday.day = 21;
	authors[1].birthday.month = 2;
	authors[1].birthday.year = 1789;
	strcpy(authors[1].name, "Schopenhauer");

	
	authors[2].birthday.day = 5;
	authors[2].birthday.month = 5;
	authors[2].birthday.year = 1813;
	strcpy(authors[2].name, "kierkegaard");

	for ( int x = 0; x < 3; x++ ){

		/*Pasing the Author name to the function:*/
		show_author_name(authors[x].name);

		printf("was born on /%d/%d/%d \n",
			authors[x].birthday.day,
			authors[x].birthday.month,
			authors[x].birthday.year
			);
	};

	puts("\n");

}


void show_author_name(char *inputString){
	printf("%s \n", inputString);
};

