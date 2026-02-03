#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //cadastro da carta 1
   char estado1 [50];
   char cidade1[50];
   char codigo1[50];
   int população1[50];
   float area1[50];
   float PIB1[50];
   int pontos_turisticos1[50];
   
   //cadastro da carta 2
    char estado2 [50];
    char cidade2 [50];
    char codigo2 [50];
    int população2 [50];
    float area2 [50];;
    float PIB2 [50];
    int pontos_turisticos2 [50];

  // Área para entrada de dados

 //Saudação inicil para o cliente
    printf("Bem vindo ao sistema de cadastramento de cartas do Super Trunfo!\n");

     //entrada de dados da carta 1
      printf("Vamos cadastrar a Carta 1\n");
        printf("Digite o nome do estado: \n");
        scanf("%s", estado1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);
        printf("Digite o código do estado: \n");
        scanf("%s", codigo1);
        printf("Digite a população do estado: \n");
        scanf("%d", &população1[0]);
        printf("Digite a área do estado (em km²): \n");
        scanf("%f", &area1[0]);
        printf("Digite o PIB do estado: \n");
        scanf("%f", &PIB1[0]);
        printf("Digite o número de pontos turísticos do estado: \n");
        scanf("%d", &pontos_turisticos1[0]);

        //confirmação do cadastro
          printf("Carta registrada com sucesso!\n");

    //entrada de dados da carta 2
    printf("Vamos cadastrar a Carta 2\n");
      printf("Digite o nome do estado: \n");
      scanf("%s", estado2);
      printf("Digite o nome da cidade: \n");
      scanf("%s", cidade2);
      printf("Digite o código do estado: \n");
      scanf("%s", codigo2);
      printf("Digite a população do estado: \n");
      scanf("%d", &população2[0]);
      printf("Digite a área do estado (em km²): \n");
      scanf("%f", &area2[0]);
      printf("Digite o PIB do estado: \n");
      scanf("%f", &PIB2[0]);
      printf("Digite o número de pontos turísticos do estado: \n");
      scanf("%d", &pontos_turisticos2[0]);

  //confirmação de cadastro 
    printf("Carta registrada com sucesso!\n");

  // Área para exibição dos dados da cidade
  //Exibição da confirmação da carta 1
    printf("CARTA 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1); 
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", população1[0]);
    printf("Área: %f km²\n", area1[0]);
    printf("PIB: %f\n", PIB1[0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1[0]);

    //Exivbição da confirmação da carta 2
    printf("CARTA 2 \n");
    printf("Estado: %s\n", estado2);     
    printf("Cidade: %s\n", cidade2); 
    printf("Código: %s\n", codigo2); 
    printf("População: %d\n", população2[0]);
    printf("Área: %f km²\n", area2[0]);
    printf("PIB: %f\n", PIB2[0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2[0]);

    //Mensagem final
    printf("Cadastro de cartas finalizado com sucesso!\n");
    printf("Obrigado por utilizar o sistema de cadastramento de cartas Super Trunfo!\n");
    return 0;

return 0;
} 
