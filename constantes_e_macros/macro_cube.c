#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_cube(x)
 *
 * FUNÇÃO:      retorna o valor de (x) ao cubo.
 *
 * PSEUDOCODIGO:
 *              retorna (x) multiplicado por (x) e multiplicado por (x)
 *
 * COMPILAÇÃO:
 *              gcc macro_cube.c -o macro_cube.exe
 *              chmod 755 macro_cube.exe
 *
 * TESTE:       ./macro_cube.exe
 *
 * SAIDA:
 *              804.3570 = macro_cube(9.3)
 *              421.8750 = macro_cube(7.5)
 *              1000.0000 = macro_cube(10)
 */
#define macro_cube(x) ((x)*(x)*(x))

int main() {

  float ret = macro_cube(9.3);
  printf("%.04f = macro_cube(9.3)\n", ret);

  ret = macro_cube(7.5);
  printf("%.04f = macro_cube(7.5)\n", ret);

  ret = macro_cube(10);
  printf("%.04f = macro_cube(10)\n", ret);
}
