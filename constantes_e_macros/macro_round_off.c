#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_round_off(x)
 *
 * FUNÇÃO:      arredonda o valor contido em x.
 *
 * PSEUDOCODIGO:
 *              Some 0.5 ao valor "(x) transformado em inteiro" convertendo resultado para inteiro.
 *
 * COMPILAÇÃO:
 *              gcc macro_round_off.c -o macro_round_off.exe
 *              chmod 755 macro_round_off.exe
 *
 * TESTE:
 *              ./macro_round_off.exe
 *
 * SAIDA:
 *              teste com float: 9.00 = macro_round_off(9.3)
 *              teste com double: 8.00 = macro_round_off(7.5)
 */
#define macro_round_off(x) ((int)((x) + 0.5))

 int main() {

   float retfloat = macro_round_off(9.3);
   printf("teste com float: %.02f = macro_round_off(9.3)\n", retfloat);

   double retdouble = macro_round_off(7.5);
   printf("teste com double: %.02f = macro_round_off(7.5)\n", retdouble);

 }
