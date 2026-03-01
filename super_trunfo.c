#include <stdio.h>

int main(){
    // declaração das variavéis de ambas as cartas
    char estado1, estado2;
    char codigo1[2], codigo2[2];
    char nome_cidade1[15], nome_cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;

    // armazenamento dos dados da carta 1
    printf("Vamos começar o cadastro da primeira carta.\n");

    printf("Digite a letra do Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Impresão dos dados da carta 1
    printf("Carta: %d\n", 1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhôes de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);

    // Armazenamento dos dados da carta 2
    printf("vamos cadastrar a segunda carta agora.\n");

    printf("Digite a letra do Estado: ");
    scanf("%c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Impressão dos dados da carta 2
    printf("Carta: %d\n", 2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhôes de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    
    printf("Cadastro das duas cartas finalizado.");
    
    return 0;
}
