#include <stdio.h>

int main (){

    char pais1[15], pais2[15];
    float area1, area2, densi_pop1, densi_pop2, pib_perCapta1, pib_perCapta2;
    double PIB1, PIB2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;

    int menuComparacao1, menuComparacao2, pontosCarta1, pontosCarta2;

    float soma1 = 0, soma2 = 0;

    printf("CARTA 1\n");

    printf("Digite o nome do país: \n");
    scanf("%s", pais1);
    
    printf("Digite a população corresṕondente ao país: \n");
    scanf("%d", &populacao1);

    printf("Digite a área corresṕondente ao país: \n");
    scanf("%f", &area1);

    printf("Digite o PIB corresṕondente ao país: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos corresṕondente ao país: \n");
    scanf("%d", &pontos_turisticos1);

    //calculando a densidade populacional de cada cidade
    densi_pop1 = (float) populacao1/area1;

    //calculando o PIB per capta
    pib_perCapta1 = (float) PIB1/populacao1;
    
    printf("CARTA 2\n");

    printf("Digite o nome do país: \n");
    scanf("%s", pais2);
    
    printf("Digite a população corresṕondente ao país: \n");
    scanf("%d", &populacao2);

    printf("Digite a área corresṕondente ao país: \n");
    scanf("%f", &area2);

    printf("Digite o PIB corresṕondente ao país: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos correspondente ao páis: \n");
    scanf("%d", &pontos_turisticos2);

    //calculando a densidade populacional de cada cidade
    densi_pop2 = (float) populacao2/area2;

    //calculando o PIB per capta
    pib_perCapta2 = (float) PIB2/populacao2;


    //Menu para a escolha do atributo de compração:
    printf("+++++0+++++ MENU COMPARAÇÃO I +++++0+++++\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5.Densidade demográfica\n");
    printf("Escolha uma opção para a comparação das cartas: ");
    scanf("%d", &menuComparacao1);
    printf("\n");

    printf("País: %s x País: %s\n", pais1, pais2);
    printf("Atributo escolhido: %d\n", menuComparacao1);


    switch (menuComparacao1)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2;

        if (populacao1 > populacao2) {
            printf("População da Carta 1: %d x População da Carta 2: %d\n", populacao1, populacao2);
            printf("Carta 1 - venceu \n");
        } else if (populacao1< populacao2) {
            printf("População da Carta 1: %d x População da Carta 2: %d\n", populacao1, populacao2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("População da Carta 1: %d x População da Carta 2: %d\n", populacao1, populacao2);
            printf("Empate!");
        }
        break;

    case 2:
        soma1 += area1;
        soma2 += area2;

        if (area1 > area2){
            printf("Área da Carta 1: %.2f x Área da Carta 2: %2.f\n", area1, area2);
            printf("Carta 1 - venceu \n");
        } else if (area1 < area2){
            printf("Área da Carta 1: %.2f x Área da Carta 2: %2.f\n", area1, area2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 3:
        soma1 += PIB1;
        soma2 += PIB2;

        if (PIB1 > PIB2){
            printf("PIB da Carta 1: %.2lf x PIB da Carta 2: %.2lf\n", PIB1, PIB2);
            printf("Carta 1 - venceu \n");
        } else if (PIB1 < PIB2){
            printf("PIB da Carta 1: %.2lf x PIB da Carta 2: %.2lf\n", PIB1, PIB2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 4:
        soma1 += pontos_turisticos1;
        soma2 == pontos_turisticos2;

        if (pontos_turisticos1 > pontos_turisticos2){
            printf("Pontos turísticos da Carta 1: %d x Pontos Turísticos da Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta 1 - venceu \n");
        } else if (pontos_turisticos1 < pontos_turisticos2){
            printf("Pontos turísticos da Carta 1: %d x Pontos Turísticos da Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 5:
        soma1 += densi_pop1;
        soma2 += densi_pop2;

        if (densi_pop1 < densi_pop2){
            printf("A menor densidade demográfica é: %.2f\n", densi_pop1);
            printf("Carta 1 - venceu \n");
        } else if (densi_pop2 < densi_pop1){
            printf("A menor densidade demográfica é: %.2f\n", densi_pop2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!");
    
        }
        break;
    
    default:
    printf("Digite uma opção válida!");
        break;
    }

    printf("+++++0+++++ MENU COMPARAÇÃO II +++++0+++++\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5.Densidade demográfica\n");
    printf("Escolha uma opção para a comparação das cartas: ");
    scanf("%d", &menuComparacao2);
    printf("\n");

    //printf("País: %s x País: %s\n", pais1, pais2);
    printf("Atributo escolhido: %d\n", menuComparacao2);

    if (menuComparacao1 == menuComparacao2)
        {
            printf("Você escolheu a mesma opção. Recomece e escolha opções diferentes.\n");
        }

    switch (menuComparacao2)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2;

        if (populacao1 > populacao2){
            printf("População da Carta 1: %d x População da Carta 2: %d\n", populacao1, populacao2);
            printf("Carta 1 - venceu \n");
        } else if (populacao1< populacao2){
            printf("População da Carta 1: %d x População da Carta 2: %d\n", populacao1, populacao2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("População da Carta 1: %d x População da Carta 2: %d\n", populacao1, populacao2);
            printf("Empate!");
        }
        break;

    case 2:
        soma1 += area1;
        soma2 += area2;

        if (area1 > area2){
            printf("Área da Carta 1: %.2f x Área da Carta 2: %2.f\n", area1, area2);
            printf("Carta 1 - venceu \n");
        } else if (area1 < area2){
            printf("Área da Carta 1: %.2f x Área da Carta 2: %2.f\n", area1, area2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 3:
        soma1 += PIB1;
        soma2 += PIB2;

        if (PIB1 > PIB2){
            printf("PIB da Carta 1: %.2lf x PIB da Carta 2: %.2lf\n", PIB1, PIB2);
            printf("Carta 1 - venceu \n");
        } else if (PIB1 < PIB2){
            printf("PIB da Carta 1: %.2lf x PIB da Carta 2: %.2lf\n", PIB1, PIB2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 4:
        soma1 += pontos_turisticos1;
        soma2 += pontos_turisticos2;

        if (pontos_turisticos1 > pontos_turisticos2){
            printf("Pontos turísticos da Carta 1: %d x Pontos Turísticos da Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta 1 - venceu \n");
        } else if (pontos_turisticos1 < pontos_turisticos2){
            printf("Pontos turísticos da Carta 1: %d x Pontos Turísticos da Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 5:
        soma1 += densi_pop1;
        soma2 += densi_pop2;

        if (densi_pop1 < densi_pop2){
            printf("A menor densidade demográfica é: %.2f\n", densi_pop1);
            printf("Carta 1 - venceu \n");
        } else if (densi_pop2 < densi_pop1){
            printf("A menor densidade demográfica é: %.2f\n", densi_pop2);
            printf("Carta 2 - venceu\n");
        } else {
            printf("Empate!");
    
        }
        break;
    
    default:
    printf("Digite uma opção válida!");
        break;
    }
    // soma dos atributos
    printf("***** RESULTADO FINAL *****\n");
    printf("A soma dos atributos:\n");
    printf("%s: %.2f X ", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);
    
    //tratamento de empates
    if (soma1 > soma2) {
        printf("A Carta 1 venceu a rodada!\n");
    } else if (soma2 > soma1){
        printf("A Carta 2 venceu a rodada!\n");
    } else {
        printf("Empate!\n");
    }


    return 0;
}
