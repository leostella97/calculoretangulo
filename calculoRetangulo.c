#include <stdio.h>
int main(){
	float A, b, h;
	printf("Calculo retangulo \n");
	printf("Digite o b: ");
	scanf("%f", &b);
	printf("Digite o h: ");
	scanf("%f", &h);
	A = b*h;
	printf("A area do retangulo e: %f", A);
	getch();
}

