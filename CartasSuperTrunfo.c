#include <stdio.h>

int main(){
    // Declaração de variaveis
    
    char Estado1, Codigo1[20], Cidade1[20], Estado2, Codigo2[20], Cidade2[20];
    int Pontos_turisticos1, Pontos_turisticos2;
    float Area1, PIB1, Area2, PIB2, densidade1, densidade2, PIBpc1, PIBpc2, SuperPoder1, SuperPoder2;
    unsigned long int Populacao1, Populacao2;



    //carta 1

    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado1);

    printf("Digite o codigo: ");
    scanf("%s", Codigo1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &Populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &Pontos_turisticos1);

    printf("Digite a area: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);


    //carta 2
    

    printf("Carta 2\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado2);

    printf("Digite o codigo: ");
    scanf("%s", Codigo2);

    printf("Digite a cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &Populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &Pontos_turisticos2);

    printf("Digite a area: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);


    //cauculos

    densidade1 = Populacao1 / Area1;
    densidade2 = Populacao2 / Area2;

    PIBpc1 = Populacao1 / PIB1;
    PIBpc2 = Populacao2 / PIB2;

    SuperPoder1 = Populacao1 + Area1 + PIB1 + Pontos_turisticos1 + PIBpc1 + (1 / densidade1);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Pontos_turisticos2 + PIBpc2 + (1 / densidade2);
    


    //Resultado 1

    

    printf("--Carta 1--\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %i\n", Pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per capta: %.2f reais\n", PIBpc1);
    printf("Super poder: %.2f\n", SuperPoder1);
    

    //Resultado 2

    printf("--Carta 2--\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %i\n", Pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per capta: %.2f reais\n", PIBpc2);
    printf("Super poder: %.2f\n", SuperPoder2);


    //comparação


    printf("--Comparação de cartas--\n");

    printf("Populacao: carta %i venceu\n", Populacao1 > Populacao2);
    printf("Area: carta %i venceu\n", Area1 > Area2);
    printf("PIB: carta %i venceu\n", PIB1 > PIB2);
    printf("Pontos turisticos: carta %i venceu\n", Pontos_turisticos1 > Pontos_turisticos2);
    printf("Densidade populacional: carta %i venceu\n", densidade1 < densidade2);
    printf("PIB per capta: carta %i venceu\n", PIBpc1 > PIBpc2);
    printf("Super poder: carta %i venceu\n", SuperPoder1 > SuperPoder2);



    return 0;

}