#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //CARTA 1
    char Estado;
    char CodCarta[50];
    char Cidade[20];
    int Populacao;
    float AreaKm2;
    float PIB;
    int Pturisticos;
    float Dpopu; //Densidade populacional
    float PPC; //PIB per Capita

    //CARTA 2
    char Estado2;
    char CodCarta2[50];
    char Cidade2[20];
    int Populacao2;
    float AreaKm22;
    float PIB2;
    int Pturisticos2;
    float Dpopu2; //Densidade populacional
    float PPC2; //PIB per Capita

    char temp; // variável auxiliar para limpar buffer


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
              //CARTA 1
 printf("CARTA 1:\n");
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

    Dpopu = Populacao / AreaKm2; // calcula a densidade populacional

    printf("Digite o PIB\n");
    scanf("%f", &PIB);

    PPC = PIB / Populacao; // calcula o pib per capita

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &Pturisticos);


    scanf("%c", &temp); // limpa o buffer

     //CARTA 2
    printf("CARTA 2:\n");
     printf("Digite o Estado\n");
     scanf("%c", &Estado2);
 
     printf("Digite o Codigo da Carta\n");
     scanf("%s", &CodCarta2);
 
     printf("Digite o nome da Cidade\n");
     scanf("%s", &Cidade2);
 
     printf("Digite a Populacao\n");
     scanf("%d", &Populacao2);
 
     printf("Digite a Area KM2\n");
     scanf("%f", &AreaKm22);

     Dpopu2 = Populacao2 / AreaKm22; // calcula a densidade populacional
 
     printf("Digite o PIB\n");
     scanf("%f", &PIB2);

     PPC2 = PIB2 / Populacao2; // calcula o pib per capita
 
     printf("Digite a quantidade de pontos turisticos\n");
     scanf("%d", &Pturisticos2);
 

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //CARTA 1
    printf("CARTA 1:\n");
printf("Estado: %c\n", Estado);
printf("Codigo da Carta: %s\n", CodCarta);
printf("Cidade: %s\n", Cidade);
printf("Populacao: %d\n", Populacao);
printf("Area KM2: %f\n", AreaKm2);
printf("PIB: %f\n", PIB);
printf("Pontos Turisticos: %d\n", Pturisticos);
printf("Densidade Populacional: %f\n", Dpopu);
printf("PIB per Capita: %f\n", PPC);

//CARTA 2
     printf("CARTA 2:\n");
printf("Estado: %c\n", Estado2);
printf("Codigo da Carta: %s\n", CodCarta2);
printf("Cidade: %s\n", Cidade2);
printf("Populacao: %d\n", Populacao2);
printf("Area KM2: %%f\n", AreaKm22);
printf("PIB: %f\n", PIB2);
printf("Pontos Turisticos: %d\n", Pturisticos2);
printf("Densidade Populacional: %f\n", Dpopu2);
printf("PIB per Capita: %f\n", PPC2);


    return 0;
}
