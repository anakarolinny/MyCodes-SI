#include <stdio.h>
int main(){
	int num, ant, suc;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("\n Numero: %d\n Antecessor: %d\n Sucessor: %d", num, ant, suc);
}
