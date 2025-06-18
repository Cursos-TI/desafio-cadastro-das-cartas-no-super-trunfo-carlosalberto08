#include <stdio.h>
#include <string.h>

int main() {
  char estado1, estado2;
  char codigo1[4], codigo2[4]; // Supondo códigos de até 3 caracteres + '\0'

  printf("Cadastro de cartas Super Trunfo - Nível Novato\n");

  // Leitura da primeira carta
  printf("Carta 1:\n");
  printf("Estado (A a H): ");
  scanf(" %c", &estado1); // Espaço antes de %c para consumir o '\n' pendente
  printf("Código (ex: A01): ");
  scanf("%s", codigo1);

  // Leitura da segunda carta
  printf("\nCarta 2:\n");
  printf("Estado (A a H): ");
  scanf(" %c", &estado2);
  printf("Código (ex: A01): ");
  scanf("%s", codigo2);

  // Exibição das cartas cadastradas
  printf("\nCartas cadastradas:\n");
  printf("Carta 1: Estado = %c, Código = %s\n", estado1, codigo1);
  printf("Carta 2: Estado = %c, Código = %s\n", estado2, codigo2);

  return 0;
}

