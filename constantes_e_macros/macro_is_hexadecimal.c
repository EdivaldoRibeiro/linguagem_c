#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_hexadecimal(x)
 *
 * FUNÇÃO:      retorna (1) se (x) é hexadecimal, senão retorna (0)
 *
 * PSEUDOCODIGO:
 *              SE (x) tem valor entre zero e 'f' ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:    gcc macro_is_hexadecimal.c -o macro_is_hexadecimal.exe
 *                chmod 755 macro_is_hexadecimal.exe
 *
 * TESTE:         ./macro_is_hexadecimal.exe
 *
 * SAIDA:
 *                1 = macro_is_hexadecimal('0')
 *                1 = macro_is_hexadecimal('1')
 *                1 = macro_is_hexadecimal('a')
 *                1 = macro_is_hexadecimal('A')
 *                0 = macro_is_hexadecimal('g')
 */
#define macro_is_digit(x) ((((x) >= '0') && ((x) <= '9')) ? 1 : 0)
#define macro_is_hexadecimal(x) (( macro_is_digit(x) || ((x) >= 'A' && (x) <= 'F') || ((x) >= 'a' && (x) <= 'f')) ? 1 : 0)

int main() {
  int retval = macro_is_hexadecimal('0');
  printf("%d = macro_is_hexadecimal('0')\n", retval);

  retval = macro_is_hexadecimal('1');
  printf("%d = macro_is_hexadecimal('1')\n", retval);

  retval = macro_is_hexadecimal('a');
  printf("%d = macro_is_hexadecimal('a')\n", retval);

  retval = macro_is_hexadecimal('A');
  printf("%d = macro_is_hexadecimal('A')\n", retval);

  retval = macro_is_hexadecimal('g');
  printf("%d = macro_is_hexadecimal('g')\n", retval);
}
