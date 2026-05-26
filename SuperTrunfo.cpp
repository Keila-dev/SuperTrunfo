#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//variaveis carta 1
	char Estado;
	char CodigoCarta[3];
	char Cidade[10];
	int Populacao, Turismo;
	float Area, PIB;

	//variaveis carta 2
	char Estado2;
	char CodigoCarta2[3];
	char Cidade2[10];
	int Populacao2, Turismo2;
	float Area2, PIB2;

	//variavel que calcula densidade populacional (NIVEL 2)
	float DensidadePopulacional1;
	float DensidadePopulacional2;

	//variavel que calcula o PIB per Capita (NIVEL 2)
	float PIBperCapita1;
	float PIBperCapita2;

	//Pedindo dados da carta 2
	printf("Carta 1 \n");
	printf("Digite o estado da carta 1: \n");
	scanf(" %c", & Estado);

	printf("Digite o codigo da carta 1: \n");
	scanf(" %s", & CodigoCarta);

	printf("Digite a cidade da carta 1: \n");
	scanf(" %s", & Cidade);

	printf("Digite a populacao da carta 1: \n");
	scanf(" %d", & Populacao);

	printf("Digite a area(km) da carta 1: \n");
	scanf(" %f", & Area);

	printf("Digite o PIB da carta 1: \n");
	scanf(" %f", & PIB);

	printf("Digite a quantidade de pontos turisticos da carta 1: \n");
	scanf(" %d", & Turismo);
	
	//Pedindo dados da carta 2
	printf("\nCarta 2 \n");

	printf("Digite o estado da carta 2: \n");
	scanf(" %c", &Estado2);

	printf("Digite o codigo da carta 2: \n");
	scanf(" %s", CodigoCarta2);

	printf("Digite a cidade da carta 2: \n");
	scanf(" %s", & Cidade2);

	printf("Digite a populacao da carta 2: \n");
	scanf(" %d", & Populacao2);

	printf("Digite a area (km) da carta 2: \n");
	scanf(" %f", & Area2);

	printf("Digite o PIB da carta 2: \n");
	scanf(" %f", & PIB2);

	printf("Digite a quantidade de pontos turisticos da carta 2: \n");
	scanf(" %d", & Turismo2);

	//Mostrando o resultado

	printf("\nCarta 1: \n");
	printf("Estado: %c \n", Estado);
	printf("Codigo: %s \n", CodigoCarta);
	printf("Nome da cidade: %s \n", Cidade);
	printf("Populacao: %d \n", Populacao);
	printf("Area: %.2f km\n", Area);
	printf("PIB: %.2f bilhoes de reais\n", PIB);
	printf("Numeros de Pontos Turisticos: %d \n", Turismo);

	DensidadePopulacional1 = (float)Populacao / Area; //calcula a densidade populacional (nivel 2)
	printf("Densidade Populacional: %.2f hab/km \n", DensidadePopulacional1); //mostra o resultado da densidade populacional

	PIBperCapita1 = (float) (PIB * 1000000000.0) / Populacao; //*1000000000.0 converte o PIB de bilhoes para reais. Calcula PIB per Capita)
	printf("PIB per Capita: %.2f reais \n \n", PIBperCapita1); //mostra resultado do PIB perc Capita
	
	printf("Carta 2: \n");
	printf("Estado: %c \n", Estado2);
	printf("Codigo: %s \n", CodigoCarta2);
	printf("Nome da cidade: %s \n", Cidade2);
	printf("Populacao: %d \n", Populacao2);
	printf("Area: %.2f km\n", Area2);
	printf("PIB: %.2f bilhoes de reais\n", PIB2);
	printf("Numeros de Pontos Turisticos: %d \n", Turismo2);

	DensidadePopulacional2 = (float)Populacao2 / Area2; // Calcula a densidade populacional da cidade 2(NIVEL2)
	printf("Densidade Populacional: %.2f hab/km \n", DensidadePopulacional2);

	PIBperCapita2 = (float)(PIB2 * 1000000000.0) / Populacao2; //*1000000000.0 converte o PIB de bilhoes para reais (NIVEL2)
	printf("PIB per Capita: %.2f reais \n \n", PIBperCapita2);

	return 0;

}
