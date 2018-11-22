#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_remainder(x,y)
 *
 * FUNÇÃO:      retorna o resto da divisão inteira de x por y.
 *
 * PSEUDOCODIGO:
 *              Retornar o inteiro do módulo de (x) por (y).
 *
 * COMPILAÇÃO:
 *              gcc macro_remainder.c -o macro_remainder.exe
 *              chmod 755 macro_remainder.exe
 * TESTE:
 *              ./macro_remainder.exe
 * SAIDA:
 *              1 = macro_remainder(9.3, 2.5)
 *              2 = macro_remainder(7.5, 5.5)
 */
#define macro_remainder(x,y) ((int)(x) % (int)(y))

int main() {

  int ret = macro_remainder(9.3, 2.5);
  printf("%d = macro_remainder(9.3, 2.5)\n", ret);

  ret = macro_remainder(7.5, 5.5);
  printf("%d = macro_remainder(7.5, 5.5)\n", ret);

}
