#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_to_lowercase(x)
 *
 * FUNÇÃO:      se (x) é maiúsculo converte para minúsculo.
 *
 * PSEUDOCODIGO:
 *              SE (x) é maiúsculo ENTÃO
 *                retorna (x) convertido para minúsculo
 *              SENÃO
 *                retorna (x)
 *
 * COMPILAÇÃO:
 *              gcc macro_to_lowercase.c -o macro_to_lowercase.exe
 *              chmod 755 macro_to_lowercase.exe
 *
 * TESTE:       ./macro_to_lowercase.exe
 *
 * SAIDA:
 *              a = macro_to_lowercase('a')
 *              c = macro_to_lowercase('c')
 *              b = macro_to_lowercase('B')
 *              w = macro_to_lowercase('W')
 */
#define macro_is_uppercase(x) (((x) >='A' && (x) <= 'Z') ? 1 : 0)
#define macro_to_lowercase(x) (macro_is_uppercase(x) ? x + 'a' - 'A' : x)

int main() {
  char ret = macro_to_lowercase('a');
  printf("%c = macro_to_lowercase('a')\n", ret);

  ret = macro_to_lowercase('c');
  printf("%c = macro_to_lowercase('c')\n", ret);

  ret = macro_to_lowercase('B');
  printf("%c = macro_to_lowercase('B')\n", ret);

  ret = macro_to_lowercase('W');
  printf("%c = macro_to_lowercase('W')\n", ret);
}
