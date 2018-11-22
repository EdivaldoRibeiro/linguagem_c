#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_uppercase(x)
 *
 * FUNÇÃO:      retorna (1) se (x) é uma letra maiuscula, senão retorna (0)
 *
 * PSEUDOCODIGO:
 *              SE (x) está entre 'A' e 'Z' ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_uppercase.c -o macro_is_uppercase.exe
 *              chmod 755 macro_is_uppercase.exe
 *
 * TESTE:       ./macro_is_uppercase.exe
 *
 * SAIDA:
 *              0 = macro_is_uppercase('a')
 *              0 = macro_is_uppercase('9')
 *              1 = macro_is_uppercase(('B'))
 *              1 = macro_is_uppercase('W')
 */
#define macro_is_uppercase(x) (((x) >='A' && (x) <= 'Z') ? 1 : 0)

int main() {
  int retval = macro_is_uppercase('a');
  printf("%d = macro_is_uppercase('a')\n", retval);

  retval = macro_is_uppercase('9');
  printf("%d = macro_is_uppercase('9')\n", retval);

  retval = macro_is_uppercase(('B'));
  printf("%d = macro_is_uppercase(('B'))\n", retval);

  retval = macro_is_uppercase('W');
  printf("%d = macro_is_uppercase('W')\n", retval);
}
