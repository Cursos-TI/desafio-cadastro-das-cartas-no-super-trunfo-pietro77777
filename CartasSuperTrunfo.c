#include <stdio.h>

int main(){
    int carta; 
    char estado[3];
    char codigodacarta[5];
    char nomecidade[50];
    int populacao;
    float areaemkm;
    float PIB;
    int numeropontosturisticos; 

    printf("digite o numero da carta: \n");
    scanf("%d", &carta);

    printf("digite o estado: \n");
    scanf("%s", estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigodacarta);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("digite a população: \n");
    scanf("%d", &populacao);

    printf("digite a area em km²: \n");
    scanf("%f", &areaemkm);
    
    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numeropontosturisticos);
    
    return 0;
    
}


