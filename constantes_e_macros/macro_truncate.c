#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_truncate(x)
 *
 * FUNÇÃO:      trunca o valor contido em (x)
 *
 * PSEUDOCODIGO:
 *              Converter o valor de (x) para inteiro.
 *
 * COMPILAÇÃO:
 *              gcc macro_truncate.c -o macro_truncate.exe
 *              chmod 755 macro_truncate.exe
 *
 * TESTE:
 *              ./macro_truncate.exe
 *
 * SAIDA:
 *              teste com float: 9 = macro_truncate(9.3)
 *              teste com double: 7 = macro_truncate(7.5)
 */
#define macro_truncate(x) ((int)(x))

int main() {

  int ret = macro_truncate(9.3);
  printf("teste com float: %d = macro_truncate(9.3)\n", ret);

  ret = macro_truncate(7.5);
  printf("teste com double: %d = macro_truncate(7.5)\n", ret);

}
