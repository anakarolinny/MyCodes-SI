#include <stdio.h>
int main(){
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	if(idade >= 18)
	printf("Voce eh maior de idade!");
	else
	printf("Voce eh menor de idade!");
}
