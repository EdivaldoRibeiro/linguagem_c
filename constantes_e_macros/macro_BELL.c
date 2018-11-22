#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_BELL
 *
 * FUNÇÃO:      tocar sinal sonoro do computador.
 *
 * PSEUDOCODIGO:
 *              enviar o código ASCII 7 para o console.
 *
 * COMPILAÇÃO:
 *              gcc macro_BELL.c -o macro_BELL.exe
 *              chmod 755 macro_BELL.exe
 *
 * TESTE:       ./macro_BELL.exe
 *
 * SAIDA:
 *              <sinal sonoro>
 *              ..........
 */
#define macro_BELL (putchar (7))

int main() {
  for(int i=0; i<10; i++) {
    macro_BELL;
    printf(".");
  }
  printf("\n");
}
