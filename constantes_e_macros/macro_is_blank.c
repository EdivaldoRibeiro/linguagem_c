#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_blank(x)
 *
 * FUNÇÃO:      retorna (1) se (x) igual a espaços, senão retorna (0).
 *
 * PSEUDOCODIGO:
 *              SE (x) é igual a espaço ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_blank.c -o macro_is_blank.exe
 *              chmod 755 macro_is_blank.exe
 *
 * TESTE:       ./macro_is_blank.exe
 *
 * SAIDA:
 *              1 = macro_is_blank(' ')
 *              0 = macro_is_blank('9')
 *              0 = macro_is_blank(('B'))
 *              0 = macro_is_blank('W')
 */
#define macro_is_blank(x) (((x) == ' ') ? 1 : 0)

int main() {
  int retval = macro_is_blank(' ');
  printf("%d = macro_is_blank(' ')\n", retval);

  retval = macro_is_blank('9');
  printf("%d = macro_is_blank('9')\n", retval);

  retval = macro_is_blank(('B'));
  printf("%d = macro_is_blank(('B'))\n", retval);

  retval = macro_is_blank('W');
  printf("%d = macro_is_blank('W')\n", retval);
}
