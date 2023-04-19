#include <stdio.h>
int main(){
	float pi = 3.14;
	float area, raio;
	
	printf("Digite o valor do raio: \n");
	scanf("%f", &raio);
	
	area = pi * (raio*raio);
	
	printf("A area do circulo eh: %.2f", area);
}
