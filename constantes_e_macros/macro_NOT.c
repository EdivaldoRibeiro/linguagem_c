#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_NOT(x)
 *
 * FUNÇÃO:      retorna NÃO booleano do valor de (x).
 *              Se (x) é verdadeiro, FALSO é retornado.
 *              Se (x) é falso, VERDADEIRO é retornado.
 *
 * PSEUDOCODIGO:
 *              SE (x) é maior que zeros ENTÃO
 *                retorna (0)
 *              SENÃO
 *                returna (1)
 *
 * COMPILAÇÃO:
 *              gcc macro_NOT.c -o macro_NOT.exe
 *              chmod 755 macro_NOT.exe
 *
 * TESTE:       ./macro_NOT.exe
 *
 * SAIDA:
 *              0 = macro_NOT(9.3)
 *              1 = macro_NOT(-1)
 *              1 = macro_NOT(0)
 */
#define macro_NOT(x) (((x) > 0) ? 0 : 1)

int main() {

  int ret = macro_NOT(9.3);
  printf("%d = macro_NOT(9.3)\n", ret);

  ret = macro_NOT(-1);
  printf("%d = macro_NOT(-1)\n", ret);

  ret = macro_NOT(0);
  printf("%d = macro_NOT(0)\n", ret);
}
