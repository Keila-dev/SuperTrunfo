#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//variaveis carta 1
	char Estado[3];
	char CodigoCarta[3];
	char Cidade[10];
	unsigned long int Populacao;
	int Turismo;
	float Area, PIB;
	float SuperPoder1;
	float InversoDensidade1;

	//variaveis carta 2
	char Estado2[3];
	char CodigoCarta2[3];
	char Cidade2[10];
	unsigned long int Populacao2;
	int Turismo2;
	float Area2, PIB2;
	float SuperPoder2;
	float InversoDensidade2;

	//variavel que calcula densidade populacional (NIVEL 2)
	float DensidadePopulacional1;
	float DensidadePopulacional2;

	//variavel que calcula o PIB per Capita (NIVEL 2)
	float PIBperCapita1;
	float PIBperCapita2;

	int escolhaJogador;
	

	//Pedindo dados da carta 1
	printf("Carta 1 \n");
	printf("Digite o estado da carta 1: \n");
	scanf(" %s", & Estado);

	printf("Digite o codigo da carta 1: \n");
	scanf(" %s", & CodigoCarta);

	printf("Digite a cidade da carta 1: \n");
	scanf(" %s", & Cidade);

	printf("Digite a populacao da carta 1: \n");
	scanf(" %lu", & Populacao);

	printf("Digite a area(km) da carta 1: \n");
	scanf(" %f", & Area);

	printf("Digite o PIB da carta 1: \n");
	scanf(" %f", & PIB);

	printf("Digite a quantidade de pontos turisticos da carta 1: \n");
	scanf(" %d", & Turismo);
	
	//Pedindo dados da carta 2
	printf("\nCarta 2 \n");

	printf("Digite o estado da carta 2: \n");
	scanf(" %s", &Estado2);

	printf("Digite o codigo da carta 2: \n");
	scanf(" %s", CodigoCarta2);

	printf("Digite a cidade da carta 2: \n");
	scanf(" %s", & Cidade2);

	printf("Digite a populacao da carta 2: \n");
	scanf(" %lu", & Populacao2);

	printf("Digite a area (km) da carta 2: \n");
	scanf(" %f", & Area2);

	printf("Digite o PIB da carta 2: \n");
	scanf(" %f", & PIB2);

	printf("Digite a quantidade de pontos turisticos da carta 2: \n");
	scanf(" %d", & Turismo2);

	//Mostrando o resultado

	printf("\nCarta 1: \n");
	printf("Estado: %s \n", Estado);
	printf("Codigo: %s \n", CodigoCarta);
	printf("Nome da cidade: %s \n", Cidade);
	printf("Populacao: %lu \n", Populacao);
	printf("Area: %.2f km\n", Area);
	printf("PIB: %.2f bilhoes de reais\n", PIB);
	printf("Numeros de Pontos Turisticos: %d \n", Turismo);

	DensidadePopulacional1 = (float)Populacao / Area; //calcula a densidade populacional (nivel 2)
	printf("Densidade Populacional: %.2f hab/km \n", DensidadePopulacional1); //mostra o resultado da densidade populacional

	InversoDensidade1 = 1 / DensidadePopulacional1;

	PIBperCapita1 = (float) (PIB * 1000000000.0) / Populacao; //*1000000000.0 converte o PIB de bilhoes para reais. Calcula PIB per Capita)
	printf("PIB per Capita: %.2f reais \n", PIBperCapita1); //mostra resultado do PIB perc Capita

	SuperPoder1 = (float)Populacao + Area + PIB + Turismo + PIBperCapita1 + InversoDensidade1;
	printf("Super Poder: %.2f \n\n", SuperPoder1);
	
	printf("Carta 2: \n");
	printf("Estado: %s \n", Estado2);
	printf("Codigo: %s \n", CodigoCarta2);
	printf("Nome da cidade: %s \n", Cidade2);
	printf("Populacao: %lu \n", Populacao2);
	printf("Area: %.2f km\n", Area2);
	printf("PIB: %.2f bilhoes de reais\n", PIB2);
	printf("Numeros de Pontos Turisticos: %d \n", Turismo2);

	DensidadePopulacional2 = (float)Populacao2 / Area2; // Calcula a densidade populacional da cidade 2(NIVEL2)
	printf("Densidade Populacional: %.2f hab/km \n", DensidadePopulacional2);

	InversoDensidade2 = 1 / DensidadePopulacional2;

	PIBperCapita2 = (float)(PIB2 * 1000000000.0) / Populacao2; //*1000000000.0 converte o PIB de bilhoes para reais (NIVEL2)
	printf("PIB per Capita: %.2f reais \n", PIBperCapita2);

	SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + Turismo2 + PIBperCapita2 + InversoDensidade2;
	printf("Super Poder: %.2f \n\n", SuperPoder2);

	//Mostrando resultado das comparações
	printf("Comparacao geral das Cartas: \n");
	printf("Populacao: Carta 1 venceu (%u) \n", Populacao>Populacao2);
	printf("Area: Carta 1 venceu (%d) \n", Area > Area2);
	printf("PIB: Carta 1 venceu (%d) \n", PIB > PIB2);
	printf("Pontos Turisticos: Carta 1 venceu (%d) \n", Turismo > Turismo2);
	printf("Densidade Populacional: Carta 2 venceu (%d) \n", InversoDensidade1<InversoDensidade2);
	printf("PIB per Capita: Carta 1 venceu (%d) \n", PIBperCapita1 > PIBperCapita2);
	printf("Super Poder: Carta 1 venceu (%d) \n\n", SuperPoder1 > SuperPoder2);

	//desafio NIVEL NOVATO- AULA3
	printf("Comparacao de cartas (Atributo: Populacao): \n");
	printf("Carta 1- %s (%s):%lu \n", Cidade, Estado, Populacao);
	printf("Carta 2- %s (%s):%lu \n", Cidade2, Estado2, Populacao2);

	if (Populacao > Populacao2) {
		printf("Carta 1 (%s) venceu! \n\n", Cidade);
	}
	else if (Populacao < Populacao2) {
		printf("Carta 2 (%s) venceu!\n\n", Cidade2);
	}
	else {
		printf("Empatou!\n\n");
	}

	//DESAFIO NIVEL AVENTUREIRO

	printf("***COMPARANDO AS CARTAS***\n");
	printf("Escolha qual atributo quer comparar:\n");
	printf("1. Populacao\n");
	printf("2. Area\n");
	printf("3. PIB\n");
	printf("4. Numero de pontos turisticos\n");
	printf("5. Densidade demografica\n\n");
	printf("Escolha: \n");
	scanf("%d", &escolhaJogador);

	switch (escolhaJogador)
	{
	    case 1:
			if (Populacao > Populacao2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Populacao\n");
				printf("Populacao1: %lu e Populacao2: %lu\n", Populacao, Populacao2);
				printf("Parabens, carta 1 venceu! \n");
			}
			else if (Populacao < Populacao2) {
				printf("Cidade1: %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Populacao\n");
				printf("Populacao1: %lu e Populacao2: %lu\n", Populacao, Populacao2);
				printf("Parabens, carta 2 venceu! \n");

			}
			else {
				printf("Cidade1: %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Populacao\n");
				printf("Populacao1: %lu e Populacao2: %lu\n", Populacao, Populacao2);
				printf("Houve empate!\n");
			}

		break;

	    case 2:
			if (Area > Area2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Area\n");
				printf("Area1: %.2f e Area2: %.2f\n", Area, Area2);
				printf("Parabens, carta 1 venceu! \n");
			}
			else if (Area < Area2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Area\n");
				printf("Area1: %.2f e Area2: %.2f\n", Area, Area2);
				printf("Parabens, carta 2 venceu! \n");

			}
			else {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Area\n");
				printf("Area1: %.2f e Area2: %.2f\n", Area, Area2);
				printf("Houve empate!\n");
			}

		break;

	    case 3:
			if (PIB > PIB2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: PIB\n");
				printf("PIB1: %.2f e PIB2: %.2f\n", PIB, PIB2);
				printf("Parabens, carta 1 venceu! \n");
			
			}
			else if (PIB < PIB2)
			{
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: PIB\n");
				printf("PIB1: %.2f e PIB2: %.2f\n", PIB, PIB2);
				printf("Parabens, carta 2 venceu! \n");
			}
			else {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: PIB\n");
				printf("PIB1: %.2f e PIB2: %.2f\n", PIB, PIB2);
				printf("Houve empate!\n");
			}

		break;

	    case 4:
			if (Turismo > Turismo2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Numero de pontos turisticos\n");
				printf("Pontos Turisticos1: %d e Pontos Turisticos2: %d\n", Turismo, Turismo2);
				printf("Parabens, carta 1 venceu! \n");
			}
			else if (Turismo < Turismo2) {
				printf("Cidade1: %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Numero de pontos turisticos\n");
				printf("Pontos Turisticos1: %d e Pontos Turisticos2: %d\n", Turismo, Turismo2);
				printf("Parabens, carta 2 venceu! \n");

			}
			else {
				printf("Cidade1: %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Numero de pontos turisticos\n");
				printf("Pontos Turisticos1: %d e Pontos Turisticos2: %d\n", Turismo, Turismo2);
				printf("Houve empate!\n");
			}

		break;

	    case 5:
			if (DensidadePopulacional1 < DensidadePopulacional2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Densidade Populacional\n");
				printf("Densidade Populacional1: %.3f e Densidade Populacional2: %.3f\n", DensidadePopulacional1, DensidadePopulacional2);
				printf("Parabens, carta 1 venceu! \n");
			}
			else if (DensidadePopulacional1 > DensidadePopulacional2) {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Densidade Populacional\n");
				printf("Densidade Populacional1: %.3f e Densidade Populacional2: %.3f\n", DensidadePopulacional1, DensidadePopulacional2);
				printf("Parabens, carta 2 venceu! \n");

			}
			else {
				printf("Cidade1 : %s e Cidade2: %s\n", Cidade, Cidade2);
				printf("Atributo escolhido: Densidade Populacional\n");
				printf("Densidade Populacional1: %.3f e Densidade Populacional2: %.3f\n", DensidadePopulacional1, DensidadePopulacional2);
				printf("Houve empate!\n");
			}
		break;

	    default:
		      printf("Opcao invalida. \n");
		break;
	}


	return 0;
}
