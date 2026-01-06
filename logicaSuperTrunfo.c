#include <stdio.h>

int main(){
    char Estado1[3], Estado2[3];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[30], nome_da_cidade2[30];
    float area1, area2, densi_pop1, densi_pop2, pib_perCapta1, pib_perCapta2;
    double PIB1, PIB2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;

    printf("CARTA 1\n");

    printf("Digite a sigla corresṕondente ao Estado (ex.: BA): \n");
    scanf(" %s", &Estado1);
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex.: A01, B02): \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população corresṕondente ao Estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área corresṕondente ao Estado: \n");
    scanf("%f", &area1);

    printf("Digite o PIB corresṕondente ao Estado: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado: \n");
    scanf("%d", &pontos_turisticos1);

    //calculando a densidade populacional de cada cidade
    densi_pop1 = (float) populacao1/area1;

    //calculando o PIB per capta
    pib_perCapta1 = (float) PIB1/populacao1;


    printf("CARTA 2\n");

    printf("Digite a sigla corresṕondente ao Estado (ex.: BA): \n");
    scanf(" %s", &Estado2);
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex.: A01, B02): \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população corresṕondente ao Estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área corresṕondente ao Estado: \n");
    scanf("%f", &area2);

    printf("Digite o PIB corresṕondente ao Estado: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado: \n");
    scanf("%d", &pontos_turisticos2);


    //calculando a densidade populacional de cada cidade
    densi_pop1 = (float) populacao1/area1;

    //calculando o PIB per capta
    pib_perCapta1 = (float) PIB1/populacao1;


    printf("CARTA 2\n");

    printf("Digite a sigla corresṕondente ao Estado (ex.: BA): \n");
    scanf(" %s", &Estado2);
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex.: A01, B02): \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população corresṕondente ao Estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área corresṕondente ao Estado: \n");
    scanf("%f", &area2);

    printf("Digite o PIB corresṕondente ao Estado: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado: \n");
    scanf("%d", &pontos_turisticos2);

    //calculando a densidade populacional de cada cidade
    densi_pop2 = (float) populacao2/area2;

    //calculando o PIB per capta
    pib_perCapta2 = (float) PIB2/populacao2;

    /*
    Calcular o Super-Poder
    Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    Armazene o Super Poder como float. 
    */
    float superPoderA = populacao1 + area1 + PIB1 + pontos_turisticos1 + pib_perCapta1 + (1.0f/densi_pop1);
    float superPoderB = populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_perCapta2 + (1.0f/densi_pop2);


    // Comparação de Cartas - Pontos Turísticos: 
    
    printf("Comparação de cartas (Atributo: Pontos Turísticos): \n");
    printf("Carta 1 - %s(%s): %d\n", nome_da_cidade1, Estado1, pontos_turisticos1);
    printf("Carta 2 - %s(%s): %d\n", nome_da_cidade2, Estado2, pontos_turisticos2);

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("esultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
         printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
    }


    return 0;

}