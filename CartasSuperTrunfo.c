#include <stdio.h>

int main(){

    int codigo;
    char estado[100];
    char cidade[100];
    float populacao;
    int pt;
    float pib;
    float area;

    printf("Insira o codigo da carta:\n");
    scanf("%d", &codigo);
    
    printf("Insira o nome do estado:\n");
    scanf("%s", &estado);
    
    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade);
    
    printf("Insira a populacao:\n");
    scanf("%f", &populacao);
    
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pt);
    
    printf("Insira o pib:\n");
    scanf("%f", &pib);
    
    printf("Insira a area:\n");
    scanf("%f", &area);

    printf("Código: %d\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Pontos turisticos: %d\n", pt);
    printf("Pib: %f\n", pib);
    printf("Area: %f\n", area);

    return 0;



    






}
