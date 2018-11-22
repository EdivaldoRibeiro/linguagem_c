#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:    macro_percent (x,y)
 *
 * FUNÇÃO:  retorna a porcentagem de x/y.
 *
 * VARIÁVEIS USADAS:
 *          x: o dividendo
 *          y: o divisor
 *
 * PSEUDOCODIGO:
 *          divida (x) por (y) e multiplique por 100.0 (converte para ponto flutuante)
 *
 * COMPILAÇÃO:
 *          gcc macro_percent.c -o macro_percent.exe
 *          chmod 755 ./macro_percent.exe
 *
 * TESTE:
 *          ./macro_percent.exe
 *
 * SAIDA:
 *          57.14 = macro_percent(2.40, 4.20)
 */
#define macro_percent(x,y) (100.0 * (x)/(y))

int main() {
  float dividendo=2.4f;
  float divisor=4.2f;
  float perc = macro_percent(dividendo, divisor);
  printf("%.2f = macro_percent(%.2f, %.2f)\n\n", perc, dividendo, divisor);
}
