#include <stdio.h>

// Desafio Lógica Super Trunfo
// Nível MESTRE

int main()
{

  // Variáveis da Carta 1
  char estado1[50];              // Nome do estado
  char codigo1[5];               // Código da carta. Ex:A01,B01
  char cidade1[50];              // Nome da cidade
  unsigned long int populacao1;  // Número da população da cidade
  float area1;                   // Área em km²
  float PIB1;                    // Produto Interno Bruto
  int pontos_turisticos1;        // número dos pontos turísticos da cidade
  float densidade_populacional1; // divisão da população pela sua área
  float PIB_per_Capita1;         // divisão do PIB da cidade pela sua população
  float Super_Poder1;            // Soma de população, área, PIB per capita, densidade
  // populacional invertida para comparação e número de pontos turísticos.

  // Variáveis para Carta 2
  char estado2[50];
  char codigo2[5];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float PIB2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float PIB_per_Capita2;
  float Super_Poder2;

  printf("Super Trunfo - Tema: Cidades!\n");
  printf("---------------------------------\n\n");

  printf("=== Cadastro das Cartas ====\n\n");

  // Carta 1

  printf("Carta 1:\n");
  printf("----------\n");

  printf("Digite o nome do estado:\n");
  scanf("%s", estado1);

  printf("Digite um código:(exemplo:A01)\n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade1);

  printf("Digite o número da população(número inteiro):\n");
  scanf("%lu", &populacao1);

  printf("Digite a área da cidade em km²(número decimal):\n");
  scanf("%f", &area1);

  printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
  scanf("%f", &PIB1);

  printf("Digite o número de pontos turísticos(número inteiro):\n");
  scanf("%d", &pontos_turisticos1);

  // Cálculos Carta 1
  densidade_populacional1 = (float)populacao1 / area1;
  PIB_per_Capita1 = (float)(PIB1 * 1000000000) / populacao1;
  // Cálculo do Super Poder = soma todos os atributos numéricos + inverso da densidade
  Super_Poder1 = (float)populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_Capita1 +
                 (1.0 / densidade_populacional1);

  printf("\n\n=== Cadastro confirmado - Carta 1!===\n");
  printf("-----------------------------------------\n\n");

  printf("Nome do Estado:%s - Código:%s\n", estado1, codigo1);
  printf("Nome da cidade:%s\n", cidade1);
  printf("Número da população:%lu habitantes\n", populacao1);
  printf("Área:%.2f km²\n", area1);
  printf("PIB:R$%.2f bilhões\n", PIB1);
  printf("Número de pontos turísticos:%d\n", pontos_turisticos1);
  printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional1);
  printf("PIB per Capita é:%.2f reais\n", PIB_per_Capita1);
  printf("Super Poder: %.2f\n\n", Super_Poder1);

  // Carta 2

  printf("Carta 2:\n");
  printf("----------\n");

  printf("Digite o nome do estado:\n");
  scanf("%s", estado2);

  printf("Digite um código:(exemplo:A01)\n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade2);

  printf("Digite o número da população(número inteiro):\n");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade em km²(número decimal):\n");
  scanf("%f", &area2);

  printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos(número inteiro):\n");
  scanf("%d", &pontos_turisticos2);

  // Cálculos carta 2
  densidade_populacional2 = (float)populacao2 / area2;
  PIB_per_Capita2 = (float)(PIB2 * 1000000000) / populacao2;
  // Cálculo do Super Poder - soma todos os atributos numéricos + inverso da densidade
  Super_Poder2 = (float)populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_Capita2 +
                 (1.0 / densidade_populacional2);

  printf("\n\n === Cadastro confirmado - Carta 2!===\n");
  printf("-----------------------------------------\n\n");

  printf("Nome do Estado:%s - Código:%s\n", estado2, codigo2);
  printf("Nome da cidade:%s\n", cidade2);
  printf("Número da população:%lu habitantes\n", populacao2);
  printf("Área:%.2f km²\n", area2);
  printf("PIB:R$%.2f bilhões\n", PIB2);
  printf("Número de pontos turísticos:%d\n", pontos_turisticos2);
  printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional2);
  printf("PIB per Capita é:%.2f reais\n", PIB_per_Capita2);
  printf("Super Poder: %.2f\n\n", Super_Poder2);

  // MENU
  int opcao, opcao2;
  float valor1_carta1 = 0, valor1_carta2 = 0;
  float valor2_carta1 = 0, valor2_carta2 = 0;

  printf("=== MENU DE COMPARAÇÃO ===\n");
  printf("Escolha o primeiro atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - Super Poder\n");
  printf("Digite a opção (1 a 6): \n");
  scanf("%d", &opcao);

  if (opcao < 1 || opcao > 6)
  {
    printf("Opção inválida! Programa finalizado.\n");
    return 0;
  }

  // Menu dinâmico
  printf("\n=== Menu de Comparação - Segundo Atributo ===\n");
  printf("Escolha o segundo atributo para comparar:\n");
  if (opcao != 1)
    printf("1 - População\n");
  if (opcao != 2)
    printf("2 - Área\n");
  if (opcao != 3)
    printf("3 - PIB\n");
  if (opcao != 4)
    printf("4 - Pontos turísticos\n");
  if (opcao != 5)
    printf("5 - Densidade populacional\n");
  if (opcao != 6)
    printf("6 - Super Poder\n");
  printf("Digite a opção (1 a 6): \n");
  scanf("%d", &opcao2);

  if (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao)
  {
    printf("Opção inválida! Programa finalizado.\n");
    return 0;
  }

  // Valor do primeiro atributo
  switch (opcao)
  {
  case 1:
    valor1_carta1 = populacao1;
    valor1_carta2 = populacao2;
    break;

  case 2:
    valor1_carta1 = area1;
    valor1_carta2 = area2;
    break;

  case 3:
    valor1_carta1 = PIB1;
    valor1_carta2 = PIB2;
    break;

  case 4:
    valor1_carta1 = pontos_turisticos1;
    valor1_carta2 = pontos_turisticos2;
    break;
  case 5:
    valor1_carta1 = densidade_populacional1;
    valor1_carta2 = densidade_populacional2;
    break;

  case 6:
    valor1_carta1 = Super_Poder1;
    valor1_carta2 = Super_Poder2;
    break;
  }

  switch (opcao2)
  {
  case 1:
    valor2_carta1 = populacao1;
    valor2_carta2 = populacao2;
    break;

  case 2:
    valor2_carta1 = area1;
    valor2_carta2 = area2;
    break;

  case 3:
    valor2_carta1 = PIB1;
    valor2_carta2 = PIB2;
    break;

  case 4:
    valor2_carta1 = pontos_turisticos1;
    valor2_carta2 = pontos_turisticos2;
    break;
  case 5:
    valor2_carta1 = densidade_populacional1;
    valor2_carta2 = densidade_populacional2;
    break;

  case 6:
    valor2_carta1 = Super_Poder1;
    valor2_carta2 = Super_Poder2;
    break;
  }

  // COMPARAÇÃO DO PRIMEIRO ATRIBUTO
  printf("\nPrimeiro atributo: ------------\n\n");
  if (opcao == 1)
    printf("População: ");
  else if (opcao == 2)
    printf("Área: ");
  else if (opcao == 3)
    printf("PIB: ");
  else if (opcao == 4)
    printf("Pontos turísticos: ");
  else if (opcao == 5)
    printf("Densidade populacional: ");
  else
    printf("Super Poder: ");
  printf("%.2f | %.2f", valor1_carta1, valor1_carta2);

  // COMPARAÇÃO DO SEGUNDO ATRIBUTO
  printf("\n\nSegundo atributo: ------------\n\n");
  if (opcao2 == 1)
    printf("População: ");
  else if (opcao2 == 2)
    printf("Área: ");
  else if (opcao2 == 3)
    printf("PIB: ");
  else if (opcao2 == 4)
    printf("Pontos turísticos: ");
  else if (opcao2 == 5)
    printf("Densidade populacional: ");
  else
    printf("Super Poder: ");
  printf("%.2f | %.2f", valor2_carta1, valor2_carta2);

  // SOMA ===============================
  // TRATAMENTO PARA DENSIDADE(MENOR VENCE)
  float soma1 = (opcao == 5 ? -valor1_carta1 : valor1_carta1) + (opcao2 == 5 ? -valor2_carta1 : valor2_carta1);
  float soma2 = (opcao == 5 ? -valor1_carta2 : valor1_carta2) + (opcao2 == 5 ? -valor2_carta2 : valor2_carta2);

  printf("\n\n=== Soma total do atributos: ====\n\n");
  printf("%s: %.2f\n", cidade1, soma1);
  printf("%s: %.2f\n\n", cidade2, soma2);
  printf("==== RESULTADO: === \n");

  if (soma1 > soma2)
  {
    printf("Vencedora: %s !!!\n\n", cidade1);
  }
  else if (soma2 > soma1)
  {
    printf("Vencedora: %s !!!\n\n", cidade2);
  }
  else
  {
    printf("Empate!\n\n");
  }

  return 0;
}