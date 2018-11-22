#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_printable_ascii(x)
 *
 * FUNÇÃO:      retorna (1) se (x) é um caracter ASCII imprimível, senão retorna (0)
 *
 * PSEUDOCODIGO:
 *              SE (x) tem valor entre 32 e 127 ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_printable_ascii.c -o macro_is_printable_ascii.exe
 *              chmod 755 macro_is_printable_ascii.exe
 *
 * TESTE:       ./macro_is_printable_ascii.exe
 *
 * SAIDA:
 *              1 = macro_is_printable_ascii('a')
 *              1 = macro_is_printable_ascii('9')
 *              0 = macro_is_printable_ascii((0))
 *              0 = macro_is_printable_ascii(7)
 */
#define macro_is_printable_ascii(x) (((x) > 32 && (x) < 127) ? 1 : 0)

int main() {
  int retval = macro_is_printable_ascii('a');
  printf("%d = macro_is_printable_ascii('a')\n", retval);

  retval = macro_is_printable_ascii('9');
  printf("%d = macro_is_printable_ascii('9')\n", retval);

  retval = macro_is_printable_ascii((0));
  printf("%d = macro_is_printable_ascii((0))\n", retval);

  retval = macro_is_printable_ascii(7);
  printf("%d = macro_is_printable_ascii(7)\n", retval);
}
