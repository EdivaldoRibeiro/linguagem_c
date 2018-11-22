#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_to_decimal(x)
 *
 * FUNÇÃO:      converte o digito ASCII para o decimal correspondente.
 *
 * PSEUDOCODIGO:
 *              SE (x) é um digito ENTÃO
 *                retorna o decimal correspondente a (x).
 *              SENÃO
 *                retorna FALHA
 *
 * COMPILAÇÃO:
 *              gcc macro_to_decimal.c -o macro_to_decimal.exe
 *              chmod 755 macro_to_decimal.exe
 *
 * TESTE:       ./macro_to_decimal.exe
 *
 * SAIDA:
 *              0 = macro_to_decimal('0')
 *              9 = macro_to_decimal('9')
 *              ffffffff = macro_to_decimal((' '))
 *              ffffffff = macro_to_decimal('W')
 */
#define FALHA 0xff
#define macro_is_digit(x) ((((x) >= '0') && ((x) <= '9')) ? 1 : 0)
#define macro_to_decimal(x) (macro_is_digit(x) ? x - '0' : FALHA)

int main() {
  char ret = macro_to_decimal('0');
  printf("%x = macro_to_decimal('0')\n", ret);

  ret = macro_to_decimal('9');
  printf("%x = macro_to_decimal('9')\n", ret);

  ret = macro_to_decimal((' '));
  printf("%x = macro_to_decimal((' '))\n", ret);

  ret = macro_to_decimal('W');
  printf("%x = macro_to_decimal('W')\n", ret);
}
