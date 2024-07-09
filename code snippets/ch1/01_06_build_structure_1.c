#include <stdio.h>
#include <string.h>

struct animal {
	int id;
	int life_span;
	char sound[20];
	char class[10];
} ;

int main(){
	
	struct animal german_shepherd;
	struct animal chinchilla_persians;

	german_shepherd.id = 31415;
	german_shepherd.life_span = 20;
	//german_shepherd.sound = "Bark";
	strcpy(german_shepherd.sound,"Bark");
	//german_shepherd.class = "Dog"
	strcpy(german_shepherd.class,"Dog");


	chinchilla_persians.id = 31416 ; 
	chinchilla_persians.life_span = 10;
       	//chinchilla_persians.sound = "Meow";
       	strcpy(chinchilla_persians.sound,"Meow");
       	//chinchilla_persians.class = "Cat";
       	strcpy(chinchilla_persians.class,"Cat");

	printf("%d: German Shepherd is a %s breed, thus it will %s and live for %d ",
		german_shepherd.id,
		german_shepherd.class,
		german_shepherd.sound,
		german_shepherd.life_span
	      );
	
	puts("\n");

	printf("%d: Chinchilla Persians. is a %s breed, thus it will %s and live for %d ",
		chinchilla_persians.id,
		chinchilla_persians.class,
		chinchilla_persians.sound,
		chinchilla_persians.life_span
	      );

	puts("\n");

	return(0);
}
