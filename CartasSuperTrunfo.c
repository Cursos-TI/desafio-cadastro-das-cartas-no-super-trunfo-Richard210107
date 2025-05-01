#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado;
    char CodCarta[50];
    char Cidade[20];
    int Populacao;
    float AreaKm2;
    float PIB;
    int Pturisticos;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Estado\n");
    scanf("%c", &Estado);

    printf("Digite o Codigo da Carta\n");
    scanf("%s", &CodCarta);

    printf("Digite o nome da Cidade\n");
    scanf("%s", &Cidade);

    printf("Digite a Populacao\n");
    scanf("%d", &Populacao);

    printf("Digite a Area KM2\n");
    scanf("%f", &AreaKm2);

    printf("Digite o PIB\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &Pturisticos);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("Estado: %c\n", Estado);
printf("Codigo da Carta: %s\n", CodCarta);
printf("Cidade: %s\n", Cidade);
printf("Populacao: %d\n", Populacao);
printf("Area KM2: %%f\n", AreaKm2);
printf("PIB: %f\n", PIB);
printf("Pontos Turisticos: %d\n", Pturisticos);






    return 0;
}
