#include <stdio.h>
    int main(){


        int populacao, _populacao, turisticos, _turisticos;
        char estado, _estado;
        char codigo[4];
        char _codigo[4];
        char cidade[20];
        char _cidade[20];
        float area, _area, pib, _pib;


         //cadastro da primeira carta.

        printf("CADASTRO DA CARTA 01:\n");
            printf("\n");

    printf("Digite a letra do estado da sua carta: (A..H)\n");
    scanf("%c", &estado);

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
    printf("PIB: %f Milhões\nPontos turísticos: %d\n", pib, turisticos);

    printf("\n------------------------\n");