#include <stdio.h>

int main() {
  int meu_nobre[10] = {32, 43, 54, 32, 87};
  int i = 0;

  while (i <= 9) {
    int meu_nobre_atual = meu_nobre[i];

    if (meu_nobre_atual) {
      printf("O valor na posição %d é %d\n", i, meu_nobre_atual);
    }

    i++;
  }

  return 0;
}
