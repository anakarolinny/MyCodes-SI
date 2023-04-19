#include <stdio.h>
int main(){
	int num, i, resul;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	printf("\tTabuada de %d:\n", num);
	for(i=0; i < 11; i++){
		resul = num * i;
		printf("\t%d * %d = %d\n", num, i, resul);
	}
}
