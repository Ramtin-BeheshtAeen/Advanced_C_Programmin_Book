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

	} authors[3] = {
		{ { 10, 15, 1844 },  "Nietzsche"  },
		{ { 2, 21, 1789},  "Schopenhauer" },
		{ { 5, 5, 1813},  "kierkegaard"}
	};
	
	
	for ( int x = 0; x < 3; x++ ){
		printf("Author#%d: %s was born on /%d/%d/%d \n",
			x + 1,
			authors[x].name,
			authors[x].birthday.day,
			authors[x].birthday.month,
			authors[x].birthday.year
			);
	};

	puts("\n");

}
