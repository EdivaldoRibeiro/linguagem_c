#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:      macro_is_odd(x)
 *
 * FUNÇÃO:    retorna 1 se o valor contido em (x) é impar, senão retorna 0.
 *
 * PSEUDOCODIGO:
 *            SE (x) é impar ENTÃO
 *              retorna 1
 *            SENÃO
 *              retorna 0
 *
 * COMPILAÇÃO:
 *            gcc macro_is_odd.c -o macro_is_odd.exe
 *            chmod 755 macro_is_odd.exe
 *
 * TESTE:
 *            ./macro_is_odd.exe
 *
 * SAIDA:
 *            teste com inteiro: 0 = macro_is_odd(-8)
 *            teste com float: 1.00 = macro_is_odd(9.0)
 *            teste com long: 0 = macro_is_odd((5*6))
 *            teste com double: 1.00 = macro_is_odd(7.0)
 */
#define macro_is_odd(x) ((((int)(x) % 2) == 1) ? 1 : 0)

int main() {
  int retint = macro_is_odd(-8);
  printf("teste com inteiro: %d = macro_is_odd(-8)\n", retint);

  float retfloat = macro_is_odd(9.0);
  printf("teste com float: %.02f = macro_is_odd(9.0)\n", retfloat);

  long retlong = macro_is_odd((5*6));
  printf("teste com long: %ld = macro_is_odd((5*6))\n", retlong);

  double retdouble = macro_is_odd(7.0);
  printf("teste com double: %.02f = macro_is_odd(7.0)\n", retdouble);

}
