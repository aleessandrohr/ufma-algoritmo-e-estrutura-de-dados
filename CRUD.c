#include <stdbool.h>
#include <stdio.h>

// Domínio do CRUD: Avaliação da cafeteria

int main(void) {
  int avaliacoesDaCafeteria[10];
  int quantidadeDeAvaliacoesDaCafeteria = 0;

  do {
    printf("\n=== Avaliações da cafeteria ===\n");
    printf("Escolha uma opção:\n");
    printf("1. Adicionar avaliação\n");
    printf("2. Mostrar avaliações\n");
    printf("3. Buscar avaliação\n");
    printf("4. Atualizar avaliação\n");
    printf("5. Remover última avaliação feita\n");
    printf("6. Relatório\n");
    printf("7. Sair\n");

    int opcao;
    printf("Opção: ");
    scanf("%d", &opcao);
    int continuar;

    switch (opcao) {
    case 1:
      int avaliacao;

      if (quantidadeDeAvaliacoesDaCafeteria >= 10) {
        printf("\nLimite de 10 avaliações atingido.\n");
      }

      else {
        bool avaliacaoValida;

        do {
          printf("\nQual é a sua avaliação para a cafeteria (de 1 a 5)? ");
          scanf("%d", &avaliacao);

          avaliacaoValida = avaliacao >= 1 && avaliacao <= 5;

          if (avaliacaoValida) {
            avaliacoesDaCafeteria[quantidadeDeAvaliacoesDaCafeteria] =
                avaliacao;
            quantidadeDeAvaliacoesDaCafeteria++;

            printf("\nAvaliação adicionada com sucesso!\n");
          } else {
            printf("\nA avaliação deve ser um número de 1 a 5.\n");
            printf("Tente novamente.\n");
          }

        } while (!avaliacaoValida);

        do {
          printf("\nDigite 1 para voltar ao menu: ");
          scanf("%d", &continuar);

        } while (continuar != 1);
      }

      break;
    case 2:
      for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
        printf("Avaliação na posição %d: %d\n", i, avaliacoesDaCafeteria[i]);
      }

      if (quantidadeDeAvaliacoesDaCafeteria == 0) {
        printf("\nAinda não há avaliações cadastradas.\n");
      }

      do {
        printf("\nDigite 1 para voltar ao menu: ");
        scanf("%d", &continuar);

      } while (continuar != 1);

      break;
    case 3:
      int avaliacaoBuscada;
      bool avaliacaoBuscadaValida;
      bool encontrou = false;

      do {
        printf("\nDigite a avaliação que deseja buscar (de 1 a 5): ");
        scanf("%d", &avaliacaoBuscada);

        avaliacaoBuscadaValida = avaliacaoBuscada >= 1 && avaliacaoBuscada <= 5;

        if (!avaliacaoBuscadaValida) {
          printf("A avaliação deve ser um número de 1 a 5. Tente novamente.\n");
        }
      } while (!avaliacaoBuscadaValida);

      for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
        if (avaliacoesDaCafeteria[i] == avaliacaoBuscada) {
          printf("Avaliação %d encontrada na posição %d\n", avaliacaoBuscada,
                 i);

          encontrou = true;
        }
      }

      if (!encontrou) {
        printf("Avaliação %d não encontrada\n", avaliacaoBuscada);
      }

      do {
        printf("\nDigite 1 para voltar ao menu: ");
        scanf("%d", &continuar);

      } while (continuar != 1);

      break;
    case 4:
      if (quantidadeDeAvaliacoesDaCafeteria == 0) {
        printf("\nAinda não há avaliações cadastradas.\n");
      } else {
        printf("\nQual avaliação você gostaria de modificar?\n");

        for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
          printf("Avaliação na posição %d: %d\n", i, avaliacoesDaCafeteria[i]);
        }

        int valorPosicaoModificado;
        bool posicaoValida;

        do {
          printf("\nDigite a posição da avaliação que deseja modificar: ");
          scanf("%d", &valorPosicaoModificado);

          posicaoValida =
              valorPosicaoModificado >= 0 &&
              valorPosicaoModificado < quantidadeDeAvaliacoesDaCafeteria;

          if (!posicaoValida) {
            printf("Posição inválida. Digite uma posição listada acima.\n");
          }
        } while (!posicaoValida);

        int novaAvaliacao;
        bool novaAvaliacaoValida;

        do {
          printf("\nDigite a nova avaliação (de 1 a 5): ");
          scanf("%d", &novaAvaliacao);

          novaAvaliacaoValida = novaAvaliacao >= 1 && novaAvaliacao <= 5;

          if (novaAvaliacaoValida) {
            avaliacoesDaCafeteria[valorPosicaoModificado] = novaAvaliacao;
            printf("\nAvaliação atualizada com sucesso.\n");
          } else {
            printf("\nA avaliação deve ser um número de 1 a 5.\n");
            printf("Tente novamente.\n");
          }
        } while (!novaAvaliacaoValida);
      }

      do {
        printf("\nDigite 1 para voltar ao menu: ");
        scanf("%d", &continuar);

      } while (continuar != 1);

      break;
    case 5:
      if (quantidadeDeAvaliacoesDaCafeteria == 0) {
        printf("\nAinda não foi realizada nenhuma avaliação.\n");
      } else {
        printf("\nDigite 1 para confirmar ou 2 para cancelar a remoção: ");

        int confirmacao;
        bool confirmacaoValida;

        do {
          printf("\nConfirmação: ");
          scanf("%d", &confirmacao);

          confirmacaoValida = confirmacao == 1 || confirmacao == 2;

          if (confirmacao == 1) {
            quantidadeDeAvaliacoesDaCafeteria--;
            avaliacoesDaCafeteria[quantidadeDeAvaliacoesDaCafeteria] = 0;

            printf("\nAvaliação removida com sucesso.\n");
            printf("Avaliações restantes no vetor:\n");

            if (quantidadeDeAvaliacoesDaCafeteria == 0) {
              printf("Nenhuma avaliação cadastrada.\n");
            } else {
              for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
                printf("Posição %d: %d\n", i, avaliacoesDaCafeteria[i]);
              }
            }

            do {
              printf("\nDigite 1 para voltar ao menu: ");
              scanf("%d", &continuar);
            } while (continuar != 1);
          }

          else if (confirmacao == 2) {
            printf("\nOperação cancelada. Voltando ao menu principal.\n");
          }

          else {
            printf("Opção inválida. Digite 1 para confirmar ou 2 para "
                   "cancelar.\n");
          }
        } while (!confirmacaoValida);
      }

      break;
    case 6:
      break;
    case 7:
      printf("\nSaindo...\n");

      return 0;
    default:
      printf("\nOpção inválida. Escolha uma opção de 1 a 7.\n");
    }
  } while (true);
}
