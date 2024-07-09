#include <stdio.h>
#include <string.h>

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

	struct Author author;

	author.birthday.day = 15;
	author.birthday.month = 10;
	author.birthday.year = 1844;
	strcpy(author.name, "Nietzsche");

	printf("%s was born on /%d/%d/%d",
		author.name,
		author.birthday.day,
		author.birthday.month,
		author.birthday.year
		);
	puts("\n");

}
