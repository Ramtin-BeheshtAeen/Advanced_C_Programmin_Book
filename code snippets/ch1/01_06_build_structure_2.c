#include <stdio.h>
#include <string.h>

struct animal {
	int id;
	int life_span;
	char sound[20];
	char class[10];
} german_shepherd ;

int main(){
	
	german_shepherd.id = 31415;
	german_shepherd.life_span = 20;
	//german_shepherd.sound = "Bark";
	strcpy(german_shepherd.sound,"Bark");
	//german_shepherd.class = "Dog"
	strcpy(german_shepherd.class,"Dog");



	printf("%d: German Shepherd is a %s breed, thus it will %s and live for %d ",
		german_shepherd.id,
		german_shepherd.class,
		german_shepherd.sound,
		german_shepherd.life_span
	      );
	
	puts("\n");

	return(0);
}
