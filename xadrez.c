#include <stdio.h>
#include  <stdlib.h>
#include  <time.h>

int main() {

// Variáveis para armazenar os dados das cartas

char nome1 [20], nome2 [20];       
int populacao1 , populacao2 ;    
float area1 , area2 ;
float pib1 , pib2 ;                 
int pontos1 , pontos2 ;             
float densidade1 , densidade2 ;
float pib_per_capita1 , pib_per_capita2 ;
float superpoder1 , superpoder2 ;

// Variávies para calcular valores e resultados das cartas

int opcao;
int aleatoria1;
srand(time(0));

/*  O código a seguir, cria um menu

  interativo simples com duas opções

  e contem a estrutura de repetição [do while]

  para que se atinja a opção 1 desejada. */

printf("\n### Bem vindo ao Super Trunfo ###\n");

do {

printf("\n1 - INICIAR JOGO\n");
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
        printf("3. Será escolhido aleatoriamente dois atributos para comparar as cartas.\n");
        printf("4. A carta que prevalecer nos dois atributos escolhidos vence.\n");
        printf("5. Para a densidade populacional a regra é inversa, o menor valor prevalece.\n");
        printf("6. Um ótimo jogo para você!\n");        
    break;
    default:
        printf("\nOpção inválida.\n");
    break;
    
}

 } while (opcao != 1);

printf("Vamos cadastrar os dados da primeira carta: \n");

// Cadastro da primeira carta

printf("\nDigite o nome do estado : \n");
scanf("%s", nome1);

printf("\nDigite a população do estado : \n");
scanf("%d", &populacao1);

printf("\nDigite a área do estado : \n");
scanf("%f", &area1);

printf("\nDigite o PIB em bilhõesdo estado : \n");
scanf("%f", &pib1);

printf("\nDigite os pontos turísticos do estado : \n");
scanf("%d", &pontos1);

// Cálculo da densidade demográfica e do PIB per capita da primeira carta

densidade1 = (float) populacao1 / area1;
pib_per_capita1 = (float) (pib1 * 1000000000.0) / populacao1;
superpoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + densidade1 + pib_per_capita1);


printf("\nCadastro da primeira carta realizado com sucesso! \n");
printf("Vamos cadastrar os dados da segunda carta: \n");

// Cadastro da segunda carta

printf("\nDigite o nome do estado : \n");
scanf("%s", nome2);

printf("\nDigite a população do estado : \n");
scanf("%d", &populacao2);

printf("\nDigite a área do estado : \n");
scanf("%f", &area2);

printf("\nDigite o PIB em bilhõesdo estado : \n");
scanf("%f", &pib2);

printf("\nDigite os pontos turísticos do estado : \n");
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
printf("\nNome do estado: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos turísticos: %d\n", pontos1);
printf("Densidade demográfica: %.2f habitantes por Km²\n", densidade1);
printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita1);
printf("Superpoder: %.2f\n", superpoder1);

printf("\nCarta 2: \n");
printf("\nNome do estado: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontos2);
printf("Densidade demográfica: %.2f habitantes por Km²\n", densidade2);
printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita2);
printf("Superpoder: %.2f\n", superpoder2);

printf("\n ### Chegou a hora da comparação ### ! \n");
printf("\nSerá escolhido aleatoriamente dois atributos para comparar as cartas. \n");
printf("A carta que prevalecer nos dois vence , se não...EMPATE! \n");
printf(" OBS : Na densidade demográfica , o menor valor prevalece. \n");


 /* O código a seguir junto com o comando srand(time(0))

   e o uso do swith, cria a lógica do jogo em que o computador

   irá escolher um numero aleatório de 1 à 10, esse numero 

   corresponderá a um atributo aleatório para comparar as

   duas cartas, aqui com ajuda do [if else] será exibido a carta

   que prevaleceu. Esse processo será feito duas vezes. */


char *vezes[4] = {"Primeiro" , "Segendo" , "terceiro" , "Quarto"};
int carta1 = 0 , carta2 = 0;
aleatoria1 = rand() % 6 + 1;


for(int i = 0 , x = 0; i <= 3 && x <= 3; i++ , x++) {

switch(aleatoria1) {
    case 1:
        printf("\n %s Atributo escolhido: POPULAÇÂO\n" , vezes[x]);
if (populacao1 > populacao2) {
       populacao1 > populacao2 ? carta1++ : carta2++;
    printf("\nCarta 1 Venceu, pois sua população (%d) é maior que a da carta 2 (%d).\n", populacao1, populacao2);
} else if (populacao2 > populacao1) {
    printf("\nCarta 2 Venceu, pois sua população (%d) é maior que a da carta 1 (%d).\n", populacao2, populacao1);
} else {
    printf("\nEmpate na categoria população, ambas as cartas têm a mesma população (%d).\n", populacao1);
}
  break;
  
    case 2:
        printf("\n %s Atributo escolhido: ÁREA\n" , vezes[x]);
if (area1 > area2) {
     area1 > area2 ? carta1++ : carta2++;
    printf("\nCarta 1 Venceu, pois sua área (%.2f) é maior que a da carta 2 (%.2f).\n", area1, area2);
} else if (area2 > area1) {
    printf("\nCarta 2 Venceu, pois sua área (%.2f) é maior que a da carta 1 (%.2f).\n", area2, area1);
} else {
    printf("\nEmpate na categoria área, ambas as cartas têm a mesma área (%.2f).\n", area1);
}
    break;
    
        case 3:
            printf("\n %s Atributo escolhido: PIB\n" , vezes[x]);
if (pib1 > pib2) {
        pib1 > pib2 ? carta1++ : carta2++;
    printf("\nCarta 1 Venceu, pois seu PIB (%.2f bilhões) é maior que o da carta 2 (%.2f bilhões).\n", pib1, pib2);
} else if (pib2 > pib1) {
    printf("\nCarta 2 Venceu, pois seu PIB (%.2f bilhões) é maior que o da carta 1 (%.2f bilhões).\n", pib2, pib1);
} else {
    printf("\nEmpate na categoria PIB, ambas as cartas têm o mesmo PIB (%.2f bilhões).\n", pib1);
}
    break;
    
        case 4:
            printf("\n %s Atributo escolhido: PONTOS TURÍSTICOS\n" , vezes[x]);
if (pontos1 > pontos2) {
        pontos1 > pontos2 ? carta1++ : carta2++;
    printf("\nCarta 1 Venceu, pois seus pontos turísticos (%d) é maior que os da carta 2 (%d).\n", pontos1, pontos2);
} else if (pontos2 > pontos1) {
    printf("\nCarta 2 Venceu, pois seus pontos turísticos (%d) é maior que os da carta 1 (%d).\n", pontos2, pontos1);
} else {
    printf("\nEmpate na categoria pontos turísticos, ambas as cartas têm o mesmo número de pontos turísticos (%d).\n", pontos1);
}
    break;
    
        case 5:
            printf("\n %s Atributo escolhido: DENSIDADE DEMOGRÁFICA\n" , vezes[x]);
if (densidade1 < densidade2) {
        densidade1 < densidade2 ? carta1++ : carta2++;
    printf("\nCarta 1 Venceu, pois sua densidade demográfica (%.2f) é menor que a da carta 2 (%.2f).\n", densidade1, densidade2);
} else if (densidade2 < densidade1) {
    printf("\nCarta 2 Venceu, pois sua densidade demográfica (%.2f) é menor que a da carta 1 (%.2f).\n", densidade2, densidade1);
} else {
    printf("\nEmpate na categoria densidade demográfica, ambas as cartas têm a mesma densidade (%.2f).\n", densidade1);
} 
    break;
    
        case 6:
            printf("\n %s Atributo escolhido: PIB PER CAPITA\n" , vezes[x]);
if (pib_per_capita1 > pib_per_capita2) {
        pib_per_capita1 > pib_per_capita2 ? carta1++ : carta2++;
    printf("\nCarta 1 Venceu, pois seu PIB per capita (%.2f) é maior que o da carta 2 (%.2f).\n", pib_per_capita1, pib_per_capita2);
} else if (pib_per_capita2 > pib_per_capita1) {
    printf("\nCarta 2 Venceu, pois seu PIB per capita (%.2f) é maior que o da carta 1 (%.2f).\n", pib_per_capita2, pib_per_capita1);
} else {
    printf("\nEmpate na categoria PIB per capita, ambas as cartas têm o mesmo PIB per capita (%.2f).\n", pib_per_capita1);
}
    break;
    
}

}


/* O codigo a seguir com a ajuda dos operadores

 de decisão e do [if else], cria a lógica em que será 

 exibido a carta vencedora, onde somente a carta que

 prevaleu nos dois atributos escolhidos vence

 se ela prevaleceu em um, e não no outro é 

 EMPATE. */
    

       if (carta1 > carta2) {
          printf("\nA Carta 1 venceu, com incríveis %d pontos.\n" , carta1);

     }  else if (carta1 < carta2)  {
          printf("\nA Carta 2 venceu, com incríveis %d pontos.\n" , carta2); 

     }  else {
          printf("\nEMPATE!\n");

     }  

     
    

return 0;

    }