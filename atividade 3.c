#include <stdio.h>
int main(){
	int num;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("O numero %d eh par.", num);
	} else {
		printf("O numero %d eh impar.", num);
	}
}

