#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_binary(x)
 *
 * FUNÇÃO:      retorna (1) quando (x) for '1' ou '0', senão retorna (0).
 *
 * PSEUDOCODIGO:
 *              SE (x) é zero ou um ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_binary.c -o macro_is_binary.exe
 *              chmod 755 macro_is_binary.exe
 *
 * TESTE:       ./macro_is_binary.exe
 *
 * SAIDA:
 *              1 = macro_is_binary('0')
 *              1 = macro_is_binary('1')
 *              0 = macro_is_binary(11)
 *              0 = macro_is_binary(0xff)
 */
#define macro_is_binary(x) (((x) == '0' || (x) == '1') ? 1 : 0)

int main() {
  int retval = macro_is_binary('0');
  printf("%d = macro_is_binary('0')\n", retval);

  retval = macro_is_binary('1');
  printf("%d = macro_is_binary('1')\n", retval);

  retval = macro_is_binary(11);
  printf("%d = macro_is_binary(11)\n", retval);

  retval = macro_is_binary(0xff);
  printf("%d = macro_is_binary(0xff)\n", retval);
}
