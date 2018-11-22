#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_square(x)
 *
 * FUNÇÃO:      retorna o quadrado de (x)
 *
 * PSEUDOCODIGO:
 *              multiplicar (x) por (x)
 *
 * COMPILAÇÃO:
 *              gcc macro_square.c -o macro_square.exe
 *              chmod 755 macro_square.exe
 *
 * TESTE:       ./macro_square.exe
 *
 * SAIDA:
 *              86.4900 = macro_square(9.3)
 *              56.2500 = macro_square(7.5)
 *              100.0000 = macro_square(10)
 */
#define macro_square(x) ((x)*(x))

int main() {

  float ret = macro_square(9.3);
  printf("%.04f = macro_square(9.3)\n", ret);

  ret = macro_square(7.5);
  printf("%.04f = macro_square(7.5)\n", ret);

  ret = macro_square(10);
  printf("%.04f = macro_square(10)\n", ret);
}
