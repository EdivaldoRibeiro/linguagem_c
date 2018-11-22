#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_to_uppercase(x)
 *
 * FUNÇÃO:      converte (x) em maiúsculo se (x) é minúsculo.
 *
 * PSEUDOCODIGO:
 *              SE (x) é minúsculo ENTÃO
 *                converte (x) para maiúsculo
 *
 * COMPILAÇÃO:
 *              gcc macro_to_uppercase.c -o macro_to_uppercase.exe
 *              chmod 755 macro_to_uppercase.exe
 *
 * TESTE:       ./macro_to_uppercase.exe
 *
 * SAIDA:
 *              A = macro_to_uppercase('a')
 *              C = macro_to_uppercase('c')
 *              B = macro_to_uppercase('B')
 *              W = macro_to_uppercase('W')
 */
#define macro_is_lowercase(x) (((x) >='a' && (x) <='z') ? 1 : 0)
#define macro_to_uppercase(x) ( macro_is_lowercase(x) ? (x - 'a' + 'A') : x)

int main() {
  char ret = macro_to_uppercase('a');
  printf("%c = macro_to_uppercase('a')\n", ret);

  ret = macro_to_uppercase('c');
  printf("%c = macro_to_uppercase('c')\n", ret);

  ret = macro_to_uppercase('B');
  printf("%c = macro_to_uppercase('B')\n", ret);

  ret = macro_to_uppercase('W');
  printf("%c = macro_to_uppercase('W')\n", ret);
}
