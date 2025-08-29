#include <stdio.h>

int main() {        
    // define a primeira carta
	char Estado_1[3];
	char Codigo_da_Carta_1[5];
	char Nome_da_Cidade_1[50];
	float Populacao_1;
	float Area_1;
	float PIB_1;
	int Numero_de_Pontos_Turisticos_1;
	float Densidade_Populacional_1;
	float PIB_per_Capita_1;
	float Super_Poder_1;
	int campeao_1 = 0;
    
    // define a segunda carta
	char Estado_2[3];
	char Codigo_da_Carta_2[5];
	char Nome_da_Cidade_2[50];
	float Populacao_2;
	float Area_2;
	float PIB_2;
	int Numero_de_Pontos_Turisticos_2;
	float Densidade_Populacional_2;
	float PIB_per_Capita_2;
	float Super_Poder_2;
	int campeao_2 = 0;

    // coleta os dados da carta 1
	printf("Digite o Estado da sua primeira carta(Ex: \"RJ\"): ");                                                                                          
	scanf("%2s", Estado_1);         
	getchar();                                                                                                                         

	printf("Digite o Codigo da sua primeira carta(Ex: \"RJ01\"): ");                                                                                          
	scanf("%4s", Codigo_da_Carta_1);    
	getchar();                                                                                                                              
	
	printf("Digite o nome da sua primeira carta(Ex: \"Rio de janeiro\"): ");                                                                                          
	fgets(Nome_da_Cidade_1, 50, stdin);                                                                                                                                                                                                                                                         

	printf("Digite a população da sua primeira carta em milhões(Ex: \"6.2\"): ");                                                                                          
	scanf("%f", &Populacao_1);                                                                                                                                   
	getchar();                                                                                                                         

	printf("Digite a área da sua primeira carta em milhares de Km²(Ex: \"1.2\"): ");                                                                                          
	scanf("%f", &Area_1);                                                                                                                         
	getchar();                                                                                                                         

	printf("Digite o PIB da sua primeira carta em Bilhões(Ex: \"331.28\"): ");                                                                                          
	scanf("%f", &PIB_1);                                                                                                                                   
	getchar();                                                                                                                         

	printf("Digite os pontos turísticos da sua primeira carta(Ex: \"100\"): ");                                                                                          
	scanf("%d", &Numero_de_Pontos_Turisticos_1);                                                                                                                                   
	getchar();                                                                                                                         

	Densidade_Populacional_1 =  Populacao_1 * 1000 / (Area_1 + 0.0001);
	PIB_per_Capita_1 = PIB_1 * 1000 / Populacao_1;
	Super_Poder_1 = Populacao_1 + PIB_1 + Area_1 + Numero_de_Pontos_Turisticos_1 + (1 / Densidade_Populacional_1) + PIB_per_Capita_1;

    // coleta os dados da carta 2
	printf("Digite o Estado da sua segunda carta(Ex: \"RJ\"): ");                                                                                          
	scanf("%2s", Estado_2);         
	getchar();                                                                                                                         

	printf("Digite o Codigo da sua segunda carta(Ex: \"RJ01\"): ");                                                                                          
	scanf("%4s", Codigo_da_Carta_2);    
	getchar();                                                                                                                              
	
	printf("Digite o nome da sua segunda carta(Ex: \"Rio de janeiro\"): ");                                                                                          
	fgets(Nome_da_Cidade_2, 50, stdin);                                                                                                                                                                                                                                                         

	printf("Digite a população da sua segunda carta em milhões(Ex: \"6.2\"): ");                                                                                          
	scanf("%f", &Populacao_2);                                                                                                                                   
	getchar();                                                                                                                         

	printf("Digite a área da sua segunda carta em milhares de Km²(Ex: \"1.2\"): ");                                                                                          
	scanf("%f", &Area_2);                                                                                                                         
	getchar();                                                                                                                         

	printf("Digite o PIB da sua segunda carta em Bilhões(Ex: \"331.28\"): ");                                                                                          
	scanf("%f", &PIB_2);                                                                                                                                   
	getchar();                                                                                                                         

	printf("Digite os pontos turísticos da sua segunda carta(Ex: \"100\"): ");                                                                                          
	scanf("%d", &Numero_de_Pontos_Turisticos_2);                                                                                                                                   
	getchar();                                                                                                                         

	Densidade_Populacional_2 = Populacao_2 * 1000 / (Area_2 + 0.0001);
	PIB_per_Capita_2 = PIB_2 * 1000 / Populacao_2;
	Super_Poder_2 = Populacao_2 + PIB_2 + Area_2 + Numero_de_Pontos_Turisticos_2 + (1 / Densidade_Populacional_2) + PIB_per_Capita_2;

    // exibe a primeira carta
	printf("\n\nCarta 1: \nEstado: %s\nCódigo: %s\nNome da Cidade: %sPopulação: %.2f Milhões\nÁrea: %.2f mil Km².\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\n\n",
		Estado_1,
		Codigo_da_Carta_1,
		Nome_da_Cidade_1,
		Populacao_1,
		Area_1,
		PIB_1,
		Numero_de_Pontos_Turisticos_1,
		Densidade_Populacional_1,
		PIB_per_Capita_1);	

    // exibe a segunda carta
	printf("Carta 2: \nEstado: %s\nCódigo: %s\nNome da Cidade: %sPopulação: %.2f Milhões\nÁrea: %.2f mil Km².\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\n\n",
		Estado_2,
		Codigo_da_Carta_2,
		Nome_da_Cidade_2,
		Populacao_2,
		Area_2,
		PIB_2,
		Numero_de_Pontos_Turisticos_2,
		Densidade_Populacional_2,
		PIB_per_Capita_2);	

    //comparações entre as cartas
	if (Populacao_1 > Populacao_2){
		printf("População: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("População: Carta 2 venceu\n");
		campeao_2 += 1;
	}

	if (Area_1 > Area_2){
		printf("Área: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("Área: Carta 2 venceu\n");
		campeao_2 += 1;
	}

	if (PIB_1 > PIB_2){
		printf("PIB: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("PIB: Carta 2 venceu\n");
		campeao_2 += 1;
	}

	if (Numero_de_Pontos_Turisticos_1 > Numero_de_Pontos_Turisticos_2){
		printf("Pontos Turísticos: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("Pontos Turísticos: Carta 2 venceu\n");
		campeao_2 += 1;
	}

	if (Densidade_Populacional_1 < Densidade_Populacional_2){
		printf("Densidade Populacional: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("Densidade Populacional: Carta 2 venceu\n");
		campeao_2 += 1;
	}

	if (PIB_per_Capita_1 > PIB_per_Capita_2){
		printf("PIB per Capita: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("PIB per Capita: Carta 2 venceu\n");
		campeao_2 += 1;
	}

	if (Super_Poder_1 > Super_Poder_2){
		printf("Super Poder: Carta 1 venceu\n");
		campeao_1 += 1;
	}else {
		printf("Super Poder: Carta 2 venceu\n");
		campeao_2 += 1;
	}

    //demonstração do campeão
	if (campeao_1 > campeao_2){
		printf("\n\nParabéns, Carta 1 venceu!\n");
	}else {
		printf("\n\nParabéns, Carta 2 venceu!\n");
	}
	return 0;

} 
