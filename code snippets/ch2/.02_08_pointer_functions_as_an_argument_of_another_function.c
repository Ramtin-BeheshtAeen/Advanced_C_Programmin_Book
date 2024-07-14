#include <stdio.h>
#include <stdbool.h>

bool temperature_check_in_celsius(int temperature){
	if (temperature <= 0) return true;
	else return false;
}


bool temperature_check_in_fahrenheit(int temperature){
	if (temperature <= 32) return true;
	else return false;
}


void is_forzen ( bool (*temperature_check) (int) ){
	int temperature;
	printf("Enter the temperature: ");
	scanf("%d", &temperature);

	if(temperature_check(temperature)){
		printf("It's frozen");
	}
	else{
		printf("It's NOT frozen! \n");
	}
}

int main(){
	printf("Celsius \n");
	is_forzen(temperature_check_in_celsius);

	printf("Fahrenheit \n");
	is_forzen(temperature_check_in_fahrenheit);



}
