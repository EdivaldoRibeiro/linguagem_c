#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_even(x)
 *
 * FUNÇÃO:      retorna 1 se (x) é par, senão retorna 0.
 *
 * PSEUDOCODIGO:
 *              SE (x) é par ENTÃO
 *                retorna 1
 *              SENÃO
 *                retorna 0
 *
 * COMPILAÇÃO:
 *              gcc macro_is_even.c -o macro_is_even.exe
 *              chmod 755 macro_is_even.exe
 *
 * TESTE:
 *              ./macro_is_even.exe
 *
 * SAIDA:
 *              teste com inteiro: 1 = macro_is_even(-8)
 *              teste com float: 0.00 = macro_is_even(9.0)
 *              teste com long: 1 = macro_is_even((5*6))
 *              teste com double: 0.00 = macro_is_even(7.0)
 */
#define macro_is_even(x) ((((int)(x) % 2) == 0) ? 1 : 0)

int main() {
  int retint = macro_is_even(-8);
  printf("teste com inteiro: %d = macro_is_even(-8)\n", retint);

  float retfloat = macro_is_even(9.0);
  printf("teste com float: %.02f = macro_is_even(9.0)\n", retfloat);

  long retlong = macro_is_even((5*6));
  printf("teste com long: %ld = macro_is_even((5*6))\n", retlong);

  double retdouble = macro_is_even(7.0);
  printf("teste com double: %.02f = macro_is_even(7.0)\n", retdouble);

}
