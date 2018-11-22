#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:      macro_max(x,y)
 *
 * FUNÇÃO:    retorna o valor máximo entre x e y
 *
 * PSEUDOCODIGO:
 *            SE (x) é maior que (y) ENTÃO
 *              retorne (x)
 *            SENÃO
 *              retorne (y)
 *
 * COMPILAÇÃO:
 *            gcc macro_max.c -o macro_max.exe
 *            chmod 755 macro_max.exe
 *
 * TESTE:
 *            ./macro_max.exe
 *
 * SAIDA:
 *            -7 = macro_max(-7, -9)
 *            9 = macro_max(9, 9)
 *            49 = macro_max((7*7), (6*8))
 *            8 = macro_max(7-2, 5+3)
 */
#define macro_max(x,y) (((x) > (y)) ? (x) : (y))

int main() {
  int retval = macro_max(-7, -9);
  printf("%d = macro_max(-7, -9)\n", retval);

  retval = macro_max(9, 9);
  printf("%d = macro_max(9, 9)\n", retval);

  retval = macro_max((7*7), (6*8));
  printf("%d = macro_max((7*7), (6*8))\n", retval);

  retval = macro_max(7-2, 5+3);
  printf("%d = macro_max(7-2, 5+3)\n", retval);
}
