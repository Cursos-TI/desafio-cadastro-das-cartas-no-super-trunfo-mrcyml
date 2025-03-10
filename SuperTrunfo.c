#include <stdio.h>
    int main(){


        int populacao, _populacao, turisticos, _turisticos;
        char estado, _estado;
        char codigo[4];
        char _codigo[4];
        char cidade[20];
        char _cidade[20];
        float area, _area, pib, _pib;
        float capita, densidade, _capita, _densidade;


         //cadastro da primeira carta.

        printf("CADASTRO DA CARTA 01:\n");
            printf("\n");

    printf("Digite a letra do estado da sua carta: (A..H)\n");
    scanf("%c", &estado);

    /*O erro indicado pela plataforma não possui um erro em si,
    pois ele sai e volta e o cadastro continua a rodar perfeitamente.*/  
    printf("Digite o código da sua carta:(A01..H04)\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a população da sua carta:\n");
    scanf("%d", &populacao);

    printf("Digite a área:(em km²)\n");
    scanf("%f", &area);

    printf("Digite o PIB: (em milhões)\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos);

    
            //Resultados da primeira carta.

        printf("\n------------------------\n");

    printf("Dados da carta 01:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d Habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Milhões\nPontos turísticos: %d\n", pib, turisticos);

    densidade = (float)(populacao / area);
    capita = (float)(pib / populacao);

    printf("Densidade Populacional: %f hab/km²\n", densidade);
    printf("PIB per Capita: %f Reais\n", capita);

    printf("\n------------------------\n");
    
            //cadastro da segunda carta.

            printf("CADASTRO DA CARTA 02\n");
            printf("\n");


printf("Digite a letra do estado da sua Carta:(A..H)\n");
scanf(" %c", &_estado);

printf("Digite o código da sua carta:(A01..H04)\n");
scanf("%s", &_codigo);

printf("Digite o nome da cidade:\n");
scanf("%s", &_cidade);

printf("Digite a população da sua carta:(em milhões)\n");
scanf("%d", &_populacao);

printf("Digite a área:(em km²)\n");
scanf("%f", &_area);

printf("Digite o PIB:\n");
scanf("%f", &_pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &_turisticos);

printf("\n------------------------\n");

    //Resultado da segunda carta.

    printf("Dados da carta 01:\n");
    printf("Estado: %c\n", _estado);
    printf("Código: %s\n", _codigo);
    printf("Nome da cidade: %s\n", _cidade);
    printf("População: %d Habitantes\n", _populacao);
    printf("Área: %.2f km²\n", _area);
    printf("PIB: %f Milhões\nPontos turísticos: %d\n", _pib, _turisticos);

    _densidade = (float)(_populacao / _area);
    _capita = (float)(_pib / _populacao);

    printf("Densidade Populacional: %f hab/km²\n", _densidade);
    printf("PIB per Capita: %f Reais\n", _capita);

return 0;

}