
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

         struct Author author = {
		 {15, 10, 1844},
		 {25, 8, 1900},
		 "Nietzsche"
	 };
 

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
