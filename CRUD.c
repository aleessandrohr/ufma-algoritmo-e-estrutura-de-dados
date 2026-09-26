#include <stdbool.h>
#include <stdio.h>

// Domínio do CRUD: Avaliacão da cafeteria

int main(void) {
  int avaliacoesDaCafeteria[10];
  int quantidadeDeAvaliacoesDaCafeteria = 0;

  do {
    printf("Escolha uma opção:\n");
    printf("1. Adicionar avaliação\n");
    printf("2. Mostrar avaliações\n");
    printf("3. Buscar avaliação\n");
    printf("4. Atualizar avaliação\n");
    printf("5. Deletar avaliação\n");
    printf("6. Relatório\n");
    printf("7. Sair\n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    case 2:
    case 3:
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      printf("Saindo...\n");

      return 0;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }
  } while (true);
}
