#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_to_ascii(x)
 *
 * FUNÇÃO:      conver um número para o correspondente da tabela ASCII.
 *
 * PSEUDOCODIGO:
 *              SE (x) está entre 0 e 9 ENTÃO
 *                retornar (x) correspondente em ASCII
 *              SENÃO
 *                retornar NULO
 *
 * COMPILAÇÃO:
 *              gcc macro_to_ascii.c -o macro_to_ascii.exe
 *              chmod 755 macro_to_ascii.exe
 *
 * TESTE:       ./macro_to_ascii.exe
 *
 * SAIDA:
 *              48 = macro_to_ascii(0)
 *              57 = macro_to_ascii(9)
 *              0 = macro_to_ascii(11)
 *              0 = macro_to_ascii(0xff)
*/
#define NULO 0x00
#define macro_to_ascii(x) (((x) >= 0 && (x) <= 9) ? '0' + x : NULO)

int main() {
  int retval = macro_to_ascii(0);
  printf("%d = macro_to_ascii(0)\n", retval);

  retval = macro_to_ascii(9);
  printf("%d = macro_to_ascii(9)\n", retval);

  retval = macro_to_ascii(11);
  printf("%d = macro_to_ascii(11)\n", retval);

  retval = macro_to_ascii(0xff);
  printf("%d = macro_to_ascii(0xff)\n", retval);
}
