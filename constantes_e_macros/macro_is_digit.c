#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_digit(x)
 *
 * FUNÇÃO:      retorna (1) se (x) entre '0' e '9', senão retorna (0)
 *
 * PSEUDOCODIGO:
 *              SE (x) está entre '0' e '9' ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_digit.c -o macro_is_digit.exe
 *              chmod 755 macro_is_digit.exe
 *
 * TESTE:       ./macro_is_digit.exe
 *
 * SAIDA:
 *              0 = macro_is_digit('a')
 *              1 = macro_is_digit('9')
 *              1 = macro_is_digit(('0'))
 *              0 = macro_is_digit('z')
 */
#define macro_is_digit(x) ((((x) >= '0') && ((x) <= '9')) ? 1 : 0)

int main() {
  int retval = macro_is_digit('a');
  printf("%d = macro_is_digit('a')\n", retval);

  retval = macro_is_digit('9');
  printf("%d = macro_is_digit('9')\n", retval);

  retval = macro_is_digit(('0'));
  printf("%d = macro_is_digit(('0'))\n", retval);

  retval = macro_is_digit('z');
  printf("%d = macro_is_digit('z')\n", retval);
}
