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
		 struct Date died;
                 char name[30];
         };

         struct Author author;

         author.birthday.day = 15;
         author.birthday.month = 10;
         author.birthday.year = 1844;
	 
         author.died.day = 25;
         author.died.month = 8;
         author.died.year = 1900;

         strcpy(author.name, "Nietzsche");

         printf("%s was born on /%d/%d/%d and died on  /%d/%d/%d",
                 author.name,
                 author.birthday.day,
                 author.birthday.month,
                 author.birthday.year,
		 
                 author.died.day,
                 author.died.month,
                 author.died.year
                 );
         puts("\n");

 }
