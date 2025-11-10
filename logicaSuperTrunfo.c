#include <stdio.h>
int main(){
    /* Carta 1 */
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int pop1;
    float area1;
    float pib1;
    int turistico1;
    
    /* Carta 2 */
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int pop2;
    float area2;
    float pib2;
    int turistico2;
    
    printf("Informe o estado da carta 1:\n"); //cadastros de cartas
    scanf(" %s", estado1); //utilizando o scanf para capturar as entradas do usuario em relaçao as cartas
    printf("Informe o codigo do carta 1 : \n");
    scanf(" %s", codigo1);
    printf("Informe a cidade da carta 1 : \n");
    scanf(" %s", cidade1);
    printf("Informe a populacao da carta 1: \n");
    scanf("%d", &pop1);
    printf("Informe a area da carta 1 :\n");
    scanf("%f", &area1);
    printf("Informe o PIB da carta 1 :\n");
    scanf("%f", &pib1);
    printf("Informe quantos pontos turisticos da carta 1 :\n");
    scanf("%d", &turistico1);

    printf("Informe o estado da carta 2:\n");
    scanf(" %s", estado2);
    printf("Informe o codigo do carta 2 : \n");
    scanf(" %s", codigo2);
    printf("Informe a cidade da carta 2 : \n");
    scanf(" %s", cidade2);
    printf("Informe a populacao da carta 2: \n");
    scanf("%d", &pop2);
    printf("Informe a area da carta 2 :\n");
    scanf("%f", &area2);
    printf("Informe o PIB da carta 2 :\n");
    scanf("%f", &pib2);
    printf("Informe quantos pontos turisticos da carta 2 :\n");
    scanf("%d", &turistico2);
    
    float densidade1 = pop1 / area1; // Já que populaçao era uma variavel int e area uma variavel float, achei mais adequado escolher a densidade como float tambem para nao dar algum erro
    float pibpercapita1 = pib1 / pop1;
    float densidade2 = pop2 / area2;
    float pibpercapita2 = pib2 / pop2;

// Abaixo é os dados fornecidos pelo usuario para representar a carta 1
    printf("\n---Dados da Carta 1---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade :%s\n", cidade1);
    printf("populacao : %d\n", pop1);
    printf("area: %f\n", area1);
    printf("PIB : %f\n", pib1);
    printf("Pontos Turisticos : %d\n", turistico1);
    printf("Densidade populacional : %f\n", densidade1);  // A divisao da população e da area 
    printf("PIB per capita : %f\n", pibpercapita1);  // A divisao do pib e da população

// Abaixo é os dados fornecidos pelo usuario para representar a carta 2
    printf("\n---Dados da Carta 2---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade :%s\n", cidade2);
    printf("populacao : %d\n", pop2);
    printf("area: %f\n", area2);
    printf("PIB : %f\n", pib2);
    printf("Pontos Turisticos : %d\n", turistico2);
    printf("Densidade populacional : %f\n", densidade2); // A divisao da população e da area 
    printf("PIB per capita : %f\n", pibpercapita2); // A divisao do pib e da população

    printf("Comparacao de cartas (Atributo: Densidade Populacional)\nCarta 1 : %s (%s) : %f\n", cidade1, codigo1, densidade1);
    printf("Carta 2 : %s (%s) : %f\n", cidade2, codigo2, densidade2);

    // modulo para comparar as duas cartas do super trunfo
    if(densidade1 > densidade2){
        printf("Resultado: Carta 1 (%s) Venceu !", estado1);        
    } else{
        printf("Resultado: Carta 2 (%s) Venceu !", estado2); // resultado da comparaçao das cartas baseada na densidade populacional
    }

    return 0;
    












}