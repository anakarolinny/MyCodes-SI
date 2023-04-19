#include <stdio.h>
int main(){
	int num1, num2, num3;
	float ma;
	
	printf("Digite 3 numeros:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	ma = (num1 + num2 + num3)/3;
	
	printf("A media aritmetica entre %d, %d e %d eh %.2f", num1, num2, num3, ma);
}
