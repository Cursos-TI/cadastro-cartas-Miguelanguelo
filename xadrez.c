#include <stdio.h>
#include  <stdlib.h>
#include  <time.h>

int main() {

// Variáveis para armazenar os dados das cartas

char estado1 , estado2;             
char codigo1 [20], codigo2 [20];    
char nome1 [20], nome2 [20];       
int populacao1 , populacao2 ;    
float area1 , area2 ;
float pib1 , pib2 ;                 
int pontos1 , pontos2 ;             
float densidade1 , densidade2 ;
float pib_per_capita1 , pib_per_capita2 ;
float superpoder1 , superpoder2 ;

int opcao;
int escolha_aleatoria;
srand(time(0));

printf("Bem vindo ao Super Trunfo\n");
printf("1 - INICIAR JOGO\n");
printf("2 - REGRAS DO JOGO\n");
printf("Digite a opção desejada: \n");
scanf("%d", &opcao);

switch(opcao) {
    
    case 1:
        printf("\nIniciando o jogo...\n");
    break;
    case 2:
        printf("\nRegras do jogo:\n");
        printf("1. O jogo consiste em comparar duas cartas, cada uma representando um estado brasileiro.\n");
        printf("2. Cada carta possui os seguintes atributos: população, área, PIB, pontos turísticos, densidade demográfica e PIB per capita.\n");
        printf("3. Será escolhido aleatoriamente um atributo para comparar as cartas.\n");
        printf("4. A carta com o maior valor no atributo escolhido vence, exceto na categoria densidade demográfica, onde a carta com o menor valor vence.\n");
        printf("5. O objetivo é vencer o maior número de comparações possível.\n");
        printf("6. Divirta-se jogando e aprendendo sobre os estados brasileiros!\n");
        printf("\nPressione 1 para iniciar o jogo: \n");
        scanf("%d", &opcao);
        printf("\nIniciando o jogo...\n");
    break;
    default:
        printf("\nOpção inválida. Iniciando o jogo...\n");
    break;
    
}

printf("Vamos cadastrar os dados da primeira carta: \n");

// Cadastro da primeira carta

printf("\nDigite a letra do estado : \n"); 
scanf(" %c", &estado1);

printf("Digite o codigo do estado : \n"); 
scanf("%s",codigo1);

printf("Digite o nome do estado : \n");
scanf("%s", nome1);

printf("Digite a população do estado : \n");
scanf("%d", &populacao1);

printf("Digite a área do estado : \n");
scanf("%f", &area1);

printf("Digite o PIB em bilhõesdo estado : \n");
scanf("%f", &pib1);

printf("Digite os pontos turísticos do estado : \n");
scanf("%d", &pontos1);

// Cálculo da densidade demográfica e do PIB per capita da primeira carta

densidade1 = (float) populacao1 / area1;
pib_per_capita1 = (float) (pib1 * 1000000000.0) / populacao1;
superpoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + densidade1 + pib_per_capita1);


printf("\nCadastro da primeira carta realizado com sucesso! \n");
printf("Vamos cadastrar os dados da segunda carta: \n");

// Cadastro da segunda carta

printf("\nDigite a letra do estado : \n");
scanf(" %c", &estado2);

printf("Digite o codigo do estado : \n");
scanf("%s", codigo2);

printf("Digite o nome do estado : \n");
scanf("%s", nome2);

printf("Digite a população do estado : \n");
scanf("%d", &populacao2);

printf("Digite a área do estado : \n");
scanf("%f", &area2);

printf("Digite o PIB em bilhõesdo estado : \n");
scanf("%f", &pib2);

printf("Digite os pontos turísticos do estado : \n");
scanf("%d", &pontos2);

// Cálculo da densidade demográfica e do PIB per capita da segunda carta

densidade2 = (float) populacao2 / area2;
pib_per_capita2 = (float) (pib2 * 1000000000.0) / populacao2;
superpoder2 = (float) (populacao2 + area2 + pib2 + pontos2 + densidade2 + pib_per_capita2);

printf("\nCadastro da segunda carta realizado com sucesso! \n");
printf("Cartas cadastradas com sucesso! \n");
printf("Exibindo os dados das duas cartas: \n");

// Exibindo os dados das cartas

printf("\nCarta 1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome do estado: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos turísticos: %d\n", pontos1);
printf("Densidade demográfica: %.2f habitantes por Km²\n", densidade1);
printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita1);
printf("Superpoder: %.2f\n", superpoder1);

printf("\nCarta 2: \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome do estado: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontos2);
printf("Densidade demográfica: %.2f habitantes por Km²\n", densidade2);
printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita2);
printf("Superpoder: %.2f\n", superpoder2);

printf("\n ### Chegou a hora da comparação ### ! \n");
printf("Será escolhido aleatoriamente um atributo para comparar as cartas. \n");
printf("\nA carta com o maior valor em cada categoria vence. \n");
printf("Com exceção da densidade demográfica, onde a carta com o menor valor vence. \n");

escolha_aleatoria = rand() % 5 + 1;

switch(escolha_aleatoria) {
    case 1:
        printf("\nAtributo escolhido: POPULAÇÂO\n");
if (populacao1 > populacao2) {
    printf("\nCarta 1 Venceu, pois sua população (%d) é maior que a da carta 2 (%d).\n", populacao1, populacao2);
} else if (populacao2 > populacao1) {
    printf("\nCarta 2 Venceu, pois sua população (%d) é maior que a da carta 1 (%d).\n", populacao2, populacao1);
} else {
    printf("\nEmpate na categoria população, ambas as cartas têm a mesma população (%d).\n", populacao1);
}
  break;
  
    case 2:
        printf("\nAtributo escolhido: ÁREA\n");
if (area1 > area2) {
    printf("\nCarta 1 Venceu, pois sua área (%.2f) é maior que a da carta 2 (%.2f).\n", area1, area2);
} else if (area2 > area1) {
    printf("\nCarta 2 Venceu, pois sua área (%.2f) é maior que a da carta 1 (%.2f).\n", area2, area1);
} else {
    printf("\nEmpate na categoria área, ambas as cartas têm a mesma área (%.2f).\n", area1);
}
    break;
    
        case 3:
            printf("\nAtributo escolhido: PIB\n");
if (pib1 > pib2) {
    printf("\nCarta 1 Venceu, pois seu PIB (%.2f bilhões) é maior que o da carta 2 (%.2f bilhões).\n", pib1, pib2);
} else if (pib2 > pib1) {
    printf("\nCarta 2 Venceu, pois seu PIB (%.2f bilhões) é maior que o da carta 1 (%.2f bilhões).\n", pib2, pib1);
} else {
    printf("\nEmpate na categoria PIB, ambas as cartas têm o mesmo PIB (%.2f bilhões).\n", pib1);
}
    break;
    
        case 4:
            printf("\nAtributo escolhido: PONTOS TURÍSTICOS\n");
if (pontos1 > pontos2) {
    printf("\nCarta 1 Venceu, pois seus pontos turísticos (%d) é maior que os da carta 2 (%d).\n", pontos1, pontos2);
} else if (pontos2 > pontos1) {
    printf("\nCarta 2 Venceu, pois seus pontos turísticos (%d) é maior que os da carta 1 (%d).\n", pontos2, pontos1);
} else {
    printf("\nEmpate na categoria pontos turísticos, ambas as cartas têm o mesmo número de pontos turísticos (%d).\n", pontos1);
}
    break;
    
        case 5:
            printf("\nAtributo escolhido: DENSIDADE DEMOGRÁFICA\n");
if (densidade1 < densidade2) {
    printf("\nCarta 1 Venceu, pois sua densidade demográfica (%.2f) é menor que a da carta 2 (%.2f).\n", densidade1, densidade2);
} else if (densidade2 < densidade1) {
    printf("\nCarta 2 Venceu, pois sua densidade demográfica (%.2f) é menor que a da carta 1 (%.2f).\n", densidade2, densidade1);
} else {
    printf("\nEmpate na categoria densidade demográfica, ambas as cartas têm a mesma densidade (%.2f).\n", densidade1);
} 
    break;

}

return 0;

}