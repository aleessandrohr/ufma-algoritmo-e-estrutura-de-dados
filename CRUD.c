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
    printf("5. Deletar ultima avaliação feita\n");
    printf("6. Relatório\n");
    printf("7. Sair\n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      int avaliacao;

      
        if (quantidadeDeAvaliacoesDaCafeteria >= 10) {
        printf("Limite no numero de avaliações da loja! \n");

      }

      else{
        do {
          printf("Qual a sua avaliação para a cafeteria de 1 a 5? ");
        scanf("%d", &avaliacao);
          if (avaliacao >= 1 && avaliacao <= 5){
          avaliacoesDaCafeteria[quantidadeDeAvaliacoesDaCafeteria] = avaliacao;
        quantidadeDeAvaliacoesDaCafeteria++;

        printf("Avaliação adicionada com sucesso! \n");
        }
        else{
        printf("Avaliação deve ser um numero de 1 a 5\n");
        printf("Tente novamente\n");
        }
        
      } while (avaliacao < 1 || avaliacao > 5);

      do {
        printf("Digite 1 para continuar: ");
        scanf("%d", &opcao);

      } while (opcao != 1);

      }
      break;
    case 2:
      for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
        printf("Avaliação na posicão %d: %d\n", i, avaliacoesDaCafeteria[i]);
      }

      do {
        printf("Digite 1 para continuar: ");
        scanf("%d", &opcao);

      } while (opcao != 1);

      break;
    case 3:
      int avaliacaoBuscada;
      printf("Digite a avaliação que deseja buscar: ");
      scanf("%d", &avaliacaoBuscada);

      for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
        if (avaliacoesDaCafeteria[i] == avaliacaoBuscada) {
          printf("Avaliação %d encontrada na posição %d\n", avaliacaoBuscada,
                 i);
        } else {
          printf("Avaliação %d não encontrada", avaliacaoBuscada);
        }
      }

      do {
        printf("Digite 1 para continuar: ");
        scanf("%d", &opcao);

      } while (opcao != 1);

      break;

    case 4:
    if(quantidadeDeAvaliacoesDaCafeteria==0){
      printf("Ainda não há avaliações\n");
      break;
    }
    else{
       printf("Qual avaliação você gostaria de modificar ?\n");

       for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
          printf("Avaliação na posicão %d: %d\n", i, avaliacoesDaCafeteria[i]);
      }

      int valorPosicaoModificado;
      do
      {
       printf("Digite a posição correspondente da avaliação que você quer modificaar : ");

    scanf("%d", &valorPosicaoModificado);

    if (valorPosicaoModificado>=quantidadeDeAvaliacoesDaCafeteria || valorPosicaoModificado < 0){
      printf("Posição incorreta, por favor digite novamente:\n");
    }
      } while (valorPosicaoModificado>=quantidadeDeAvaliacoesDaCafeteria || valorPosicaoModificado < 0);
      
      
    int novaAvaliacao;
      do {
        printf("Digite a nova avaliação: ");
       scanf("%d", &novaAvaliacao);
         if(novaAvaliacao >= 1 && novaAvaliacao <= 5){
          avaliacoesDaCafeteria[valorPosicaoModificado] = novaAvaliacao;
            printf("Avaliação modificada com sucesso\n\n");
      }
        else{
          printf("Avaliação deve ser um numero de 1 a 5\n");
          printf("Tente novamente\n\n");
        }
      } while (novaAvaliacao < 1 || novaAvaliacao > 5);
    
    
   }

      break;
    case 5:
      if(quantidadeDeAvaliacoesDaCafeteria==0){
        printf("Ainda não foi realizada nenhhuma valaiação\n");
        break;
      }
      else{
        printf("Digite 1 para confirmar ou 2 para cancelar a operação: ");

      int confirmacao;
      do
      {
        scanf("%d", &confirmacao);  

      if (confirmacao==1){
        quantidadeDeAvaliacoesDaCafeteria--;
        avaliacoesDaCafeteria[quantidadeDeAvaliacoesDaCafeteria] = 0;
        printf("Avaliação apagada com sucesso\n\n");
      }

      else if(confirmacao==2){
        printf("Operação cancelada, voltando para o menu principal\n");
      break;
      }
      
      else{
        printf("Opção invalida por favor, digite uma das opções:\n");
      }
      } while (confirmacao<1 || confirmacao>2);

      printf("Total de avaliações recebidas pela cafeteria\n");
      for (int i = 0; i < quantidadeDeAvaliacoesDaCafeteria; i++) {
        printf("Avaliação na posicão %d: %d\n", i, avaliacoesDaCafeteria[i]);
      }
       do {
        printf("Digite 1 para continuar: ");
        scanf("%d", &opcao);

      } while (opcao != 1);

      }

      
      break;
    case 6:
      break;
    case 7:
      printf("Saindo...\n\n");

      return 0;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }
  } while (true);
}
