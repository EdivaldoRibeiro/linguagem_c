#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_octal(x)
 *
 * FUNÇÃO:      Retorna (1) se (x) é octal, senão retorna (0)
 *
 * PSEUDOCODIGO:
 *              SE (x) está entre '0' e '7' ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:  gcc macro_is_octal.c -o macro_is_octal.exe
 *              chmod 755 macro_is_octal.exe
 *
 * TESTE:       ./macro_is_octal.exe
 *
 * SAIDA:
 *              1 = macro_is_octal('0')
 *              1 = macro_is_octal('1')
 *              1 = macro_is_octal('7')
 *              0 = macro_is_octal('8')
 *              0 = macro_is_octal('g')
 */
#define macro_is_octal(x) (((x) >= '0' && (x) <= '7') ? 1 : 0)

int main() {
  int retval = macro_is_octal('0');
  printf("%d = macro_is_octal('0')\n", retval);

  retval = macro_is_octal('1');
  printf("%d = macro_is_octal('1')\n", retval);

  retval = macro_is_octal('7');
  printf("%d = macro_is_octal('7')\n", retval);

  retval = macro_is_octal('8');
  printf("%d = macro_is_octal('8')\n", retval);

  retval = macro_is_octal('g');
  printf("%d = macro_is_octal('g')\n", retval);
}
