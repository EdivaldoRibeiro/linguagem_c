#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:      macro_abs_val(x)
 *
 * FUNÇÃO:    retorna o valor absoluto de x.
 *
 * PSEUDOCODIGO:
 *            SE (x) é positivo ENTÃO
 *               retorna (x)
 *            SENÃO
 *               retorna -(x)
 *
 * COMPILAÇÃO:
 *            gcc macro_abs_val.c -o macro_abs_val.exe
 *            chmod 755 macro_abs_val.exe
 *
 * TESTE:
 *            ./macro_abs_val.exe
 *
 * SAIDA:
 *            7 = macro_abs_val(-7)
 *            9 = macro_abs_val(9)
 *            12 = macro_abs_val((7-19))
 *            12 = macro_abs_val(7-19)
 */
#define macro_abs_val(x)  (((x) >= 0) ? (x) : 0 - (x))

int main() {
  int retval = macro_abs_val(-7);
  printf("%d = macro_abs_val(-7)\n", retval);

  retval = macro_abs_val(9);
  printf("%d = macro_abs_val(9)\n", retval);

  retval = macro_abs_val((7-19));
  printf("%d = macro_abs_val((7-19))\n", retval);

  retval = macro_abs_val(7-19);
  printf("%d = macro_abs_val(7-19)\n", retval);
}
