#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:      macro_min(x,y)
 *
 * FUNÇÃO:    retorna o valor mínimo entre x e y
 *
 * PSEUDOCODIGO:
 *            SE (x) é menor que (y) ENTÃO
 *              retorna (x)
 *            SENÃO
 *              retorna (y)
 *
 * COMPILAÇÃO:
 *            gcc macro_min.c -o macro_min.exe
 *            chown 755 macro_min.exe
 *
 * TESTE:
 *            ./macro_min.exe
 *
 * SAÍDA:
 *            teste com inteiro: -9 = macro_min(-7, -9)
 *            teste com float: 9.20 = macro_min(9.2, 9.5)
 *            teste com long: 48 = macro_min((7*7), (6*8))
 *            teste com double: 5.30 = macro_min(7.8, 5.3)
 */
#define macro_min(x,y)  (((x) < (y)) ? (x) : (y))

int main(){
  int retint = macro_min(-7, -9);
  printf("teste com inteiro: %d = macro_min(-7, -9)\n", retint);

  float retfloat = macro_min(9.2, 9.5);
  printf("teste com float: %.02f = macro_min(9.2, 9.5)\n", retfloat);

  long retlong = macro_min((7*7), (6*8));
  printf("teste com long: %ld = macro_min((7*7), (6*8))\n", retlong);

  double retdouble = macro_min(7.8, 5.3);
  printf("teste com double: %.02f = macro_min(7.8, 5.3)\n", retdouble);

}
