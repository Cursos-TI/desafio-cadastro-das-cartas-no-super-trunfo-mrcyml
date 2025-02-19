#include <stdio.h>
    int main() {

        float area, pib;
        double populacao, cidades;
        int estados, turisticos;
        char pais[80];
    
//cadastro da carta.

        printf("Qual o país da sua carta? \n");
        scanf("%s", &pais);

        printf("Quantos Estados? \n");
        scanf("%d", &estados);

        printf("Quantas cidades? \n");
        scanf("%f", &cidades);

        printf("População? \n");
        scanf("%f" , &populacao);

        printf("Quantos pontos turísticos? \n");
        scanf("%d", &turisticos);

        printf("PIB? \n");
        scanf("%f", &pib);


        //Exibindo o resultado

        printf("Sua Carta:\n");
        printf("País: %s\n", pais);
        printf("Estados: %d\n", estados);
        printf("Cidades: %f mil\n", cidades);
        printf("População: %f milhões\n", populacao);
        printf("Pontos Turísticos: %d\n", turisticos);
        printf("PIB: %f trilhões USD\n", pib);


        return 0;

    }