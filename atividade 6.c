#include <stdio.h>
int main(){
	float num;
	int n1;
	
	printf("Digite um numero real:\n");
	scanf("%f", &num);
	
	n1 = num;
	
	printf("A parte inteira de %.2f eh %d", num, n1);
}
