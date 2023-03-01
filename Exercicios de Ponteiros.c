#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void Questao1() 
{
	int *arr = {(int *)calloc(10, sizeof(int))};
	int i = 0;
	
	for (i = 0; i < 10; i++){
		printf("%d\n", *arr);
	}
}


void Questao2() 
{
	srand(time(NULL));
	int j = 0;
	int i = 0;
	printf("Digite um numero inteiro positivo para alocar dinamicamente um array: ");
	scanf("%d", &j);

	int *arr = (int *)calloc(j, sizeof(int));
	
	for (i = 0; i < j; i++) {
		*arr = rand() %  101;
		printf("%d\n", *arr);
		arr++;
	}
}

float Questao3(int *arr, int j) {
	arr =  (int *)calloc(j, sizeof(int));
	int i = 0;
	float soma = 0;
	for (i = 1; i < j + 1; i++) {
		*arr = i;
		soma += *arr;
		arr++;
	}
	return soma / j;
}

void Questao4 (){
	int *matriz1 = NULL;
	int *matriz2 = NULL;
	int j = 0;
	printf("Escreva um valor para definir as linhas e colunas da matriz: ");
	scanf("%d", &j);
	
	matriz1 = (int *)calloc(j*j, sizeof(int));
	matriz2 = (int *)calloc(j*j,sizeof(int));
	
	for (int i = 0; i < j; j++){
		for (int x = 0; x < j; x++){
			
		}
	}
	
}

int main() {
	

	
}