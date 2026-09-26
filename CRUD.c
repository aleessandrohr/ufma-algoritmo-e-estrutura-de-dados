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
      int avaliacao;

      do {
        printf("Qual a sua avaliação para a cafeteria de 1 a 5? ");
        scanf("%d", &avaliacao);
      } while (avaliacao < 1 || avaliacao > 5);

      if (quantidadeDeAvaliacoesDaCafeteria > 10) {
        printf("Limite no numero de avaliações da loja! \n");

      } else {
        avaliacoesDaCafeteria[quantidadeDeAvaliacoesDaCafeteria] = avaliacao;
        quantidadeDeAvaliacoesDaCafeteria++;

        printf("Avaliação adicionada com sucesso! \n");
      }

      int opcao;

      do {
        printf("Digite 1 para continuar: ");
        scanf("%d", &opcao);

      } while (opcao != 1);

      break;
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
