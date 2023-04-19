#include <stdio.h>
int main(){
	int n1, n2, soma;
	
	printf("Digite dois numeros: \n");
	scanf("%d%d", &n1, &n2);
	
	soma = n1 + n2;
	
	printf("\nA soma entre %d e %d eh %d", n1, n2, soma);
}
