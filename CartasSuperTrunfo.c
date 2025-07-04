#include <stdio.h>

int main(){
    // Declaração de variaveis
    
    char Estado1, Codigo1[20], Cidade1[20], Estado2, Codigo2[20], Cidade2[20];
    int Populacao1, Pontos_turisticos1, Populacao2, Pontos_turisticos2;
    float Area1, PIB1, Area2, PIB2, densidade1, densidade2, PIBpc1, PIBpc2;

    //carta 1

    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado1);

    printf("Digite o codigo: ");
    scanf("%s", Codigo1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a populacao: ");
    scanf("%i", &Populacao1);

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
    scanf("%i", &Populacao2);

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
    
    
    //Resultado 1
    

    printf("--Carta 1--\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("Populacao: %i\n", Populacao1);
    printf("Area: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Numero de pontos turisticos: %i\n", Pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per capta: %.2f reais\n", PIBpc1);


    //Resultado 2

    printf("--Carta 2--\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("Populacao: %i\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Numero de pontos turisticos: %i\n", Pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per capta: %.2f reais\n", PIBpc2);

    return 0;
}
