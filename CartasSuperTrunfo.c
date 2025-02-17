#include <stdio.h>

int main(){

    //cadastrando as variaveis
    int codigo1 = 13, codigo2 = 15;
    char estado1, estado2[100];
    char cidade1, cidade2[100];
    float populacao1, populacao2;
    int pt1, pt2;
    float pib1, pib2;
    float area1, area2;
    
    //indicando a variavel vencedora
    printf("A descisão das cartas sera pela população! \n"); 
    
    //cadastramento da carta 1
    printf("Cadastro da carta1: \n");

    printf("Insira o codigo da carta1:\n");
    scanf("%d", &codigo1);
    
    printf("Insira o nome do estado:\n");
    scanf("%s", &estado1);
    
    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade1);
    
    printf("Insira a populacao:\n");
    scanf("%f", &populacao1);
    
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pt1);
    
    printf("Insira o pib:\n");
    scanf("%f", &pib1);
    
    printf("Insira a area:\n");
    scanf("%f", &area1);
    
    //resultado das inserções da carta 1
    printf("Código: %d\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Pontos turisticos: %d\n", pt1);
    printf("Pib: %f\n", pib1);
    printf("Area: %f\n", area1);
    
    //cadastramento da carta 2
    printf("Cadastro da carta2: \n");

    printf("Insira o codigo da carta2:\n");
    scanf("%d", &codigo2);
    
    printf("Insira o nome do estado:\n");
    scanf("%s", &estado2);
    
    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade2);
    
    printf("Insira a populacao:\n");
    scanf("%f", &populacao2);
    
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pt2);
    
    printf("Insira o pib:\n");
    scanf("%f", &pib2);
    
    printf("Insira a area:\n");
    scanf("%f", &area2);
    
    //resultado das inserções da carta 2
    printf("Código: %d\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Pontos turisticos: %d\n", pt2);
    printf("Pib: %f\n", pib2);
    printf("Area: %f\n", area2);

    //indicando o ganhador
    if(populacao1 > populacao2){
        printf("Carta1 é a vencedora!!!");
    } else{
        printf("Carta2 é a vencedora!!!");
    }


    return 0;




    


}
