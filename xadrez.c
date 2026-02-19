#include <stdio.h>

int main() {

// Variáveis para armazenar os dados das cartas

char estado1 , estado2;             
char codigo1 [10], codigo2 [10];    
char nome1 [20], nome2 [20];       
int populacao1 , populacao2 ;    
float area1 , area2 ;
float pib1 , pib2 ;                 
int pontos1 , pontos2 ;             
float densidade1 , densidade2 ;
float pib_per_capita1 , pib_per_capita2 ;


printf("Bem vindo ao Super Trunfo\n");
printf("Vamos cadastrar os dados da primeira carta: \n");

// Cadastro da primeira carta

printf("\nDigite a letra do estado : \n"); 
scanf(" %c", &estado1);

printf("Digite o codigo do estado : \n"); 
scanf("%s",codigo1);

printf("Digite o nome da cidade do estado : \n");
scanf("%s", nome1);

printf("Digite a população do estado : \n");
scanf("%d", &populacao1);

printf("Digite a área do estado : \n");
scanf("%f", &area1);

printf("Digite o PIB do estado : \n");
scanf("%f", &pib1);

printf("Digite os pontos turísticos do estado : \n");
scanf("%d", &pontos1);

// Cálculo da densidade demográfica e do PIB per capita da primeira carta

densidade1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;

printf("\nCadastro da primeira carta realizado com sucesso! \n");
printf("Vamos cadastrar os dados da segunda carta: \n");

// Cadastro da segunda carta

printf("\nDigite a letra do estado : \n");
scanf(" %c", &estado2);

printf("Digite o codigo do estado : \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade do estado : \n");
scanf("%s", nome2);

printf("Digite a população do estado : \n");
scanf("%d", &populacao2);

printf("Digite a área do estado : \n");
scanf("%f", &area2);

printf("Digite o PIB do estado : \n");
scanf("%f", &pib2);

printf("Digite os pontos turísticos do estado : \n");
scanf("%d", &pontos2);

// Cálculo da densidade demográfica e do PIB per capita da segunda carta

densidade2 = populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;

printf("\nCadastro da segunda carta realizado com sucesso! \n");
printf("Cartas cadastradas com sucesso! \n");
printf("Exibindo os dados das duas cartas: \n");

// Exibindo os dados das cartas

printf("\nCarta 1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da cidade: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos turísticos: %d\n", pontos1);
printf("Densidade demográfica: %.2f habitantes por Km²\n", densidade1);
printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita1);

printf("\nCarta 2: \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontos2);
printf("Densidade demográfica: %.2f habitantes por Km²\n", densidade2);
printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita2);

return 0;

}