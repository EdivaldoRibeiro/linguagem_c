#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_lowercase(x)
 *
 * FUNÇÃO:      retorna (1) se (x) é minúsculo, senão retorna (0)
 *
 * PSEUDOCODIGO:
 *              SE (x) está entre 'a' e 'z' ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_lowercase.c -o macro_is_lowercase.exe
 *              chmod 755 macro_is_lowercase.exe
 *
 * TESTE:       ./macro_is_lowercase.exe
 *
 * SAIDA:
 *              1 = macro_is_lowercase('a')
 *              0 = macro_is_lowercase('9')
 *              0 = macro_is_lowercase(('B'))
 *              0 = macro_is_lowercase('W')
 */
#define macro_is_lowercase(x) (((x) >='a' && (x) <='z') ? 1 : 0)

int main() {
  int retval = macro_is_lowercase('a');
  printf("%d = macro_is_lowercase('a')\n", retval);

  retval = macro_is_lowercase('9');
  printf("%d = macro_is_lowercase('9')\n", retval);

  retval = macro_is_lowercase(('B'));
  printf("%d = macro_is_lowercase(('B'))\n", retval);

  retval = macro_is_lowercase('W');
  printf("%d = macro_is_lowercase('W')\n", retval);
}
