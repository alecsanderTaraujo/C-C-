#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	char nome [100];
	float altura;
	
	printf ("insira seu nome: \n");
	scanf("%s",nome);
	
	printf("insira sua idade: \n");
	scanf("%d",&idade);
	
	printf ("insira sua altura: \n");
	scanf("%f",&altura);
	
	printf ("Os dados Fornecidos foram, Nome: %s, Idade: %d,Altura: %.2f" , nome,idade,altura);
	
	getchar();
	return 0;
}
