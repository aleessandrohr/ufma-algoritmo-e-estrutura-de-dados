#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int nascimento, anoAtual, idade, tamanhoPode;
  bool podeNada, podeVotar, podeDirigir, podeAbrirEmpresa;
  char *pode[3];

  tamanhoPode = 0;
  anoAtual = 2026;

  printf("Digite o ano atual: ");
  scanf("%d", &nascimento);

  idade = anoAtual - nascimento;

  printf("Voce tem %d anos!\n", idade);

  podeNada = idade < 16;

  if (podeNada) {
    printf("Voce nao pode votar, dirigir ou abrir uma empresa!\n");

    return 0;
  }

  podeVotar = idade >= 16;

  if (podeVotar) {
    pode[0] = "votar";
    tamanhoPode++;
  }

  podeDirigir = idade >= 18;

  if (podeDirigir) {
    pode[1] = "dirigir";
    tamanhoPode++;
  }

  podeAbrirEmpresa = idade >= 21;

  if (podeAbrirEmpresa) {
    pode[2] = "abrir uma empresa";
    tamanhoPode++;
  }

  printf("Voce pode fazer as seguintes coisas: ");

  for (int i = 0; i < tamanhoPode; i++) {
    if (i == tamanhoPode - 1) {
      printf("%s.\n", pode[i]);
    } else {
      printf("%s, ", pode[i]);
    }
  }
}
