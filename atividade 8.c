#include <stdio.h>
int main(){
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em celsius:\n");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius*1.8) + 32;
	
	printf("A temperatura em Fahrenheit eh: %.2f", fahrenheit);
}
