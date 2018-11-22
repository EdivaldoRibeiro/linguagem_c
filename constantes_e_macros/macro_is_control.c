#include <stdio.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_is_control(x)
 *
 * FUNÇÃO:      retorna (1) quando (x) for controle, senão retorna (0).
 *
 * PSEUDOCODIGO:
 *              SE (x) é controle ENTÃO
 *                retorna (1)
 *              SENÃO
 *                retorna (0)
 *
 * COMPILAÇÃO:
 *              gcc macro_is_control.c -o macro_is_control.exe
 *              chmod 755 macro_is_control.exe
 *
 * TESTE:       ./macro_is_control.exe
 *
 * SAIDA:
 *              1 = macro_is_control(1)
 *              1 = macro_is_control(7)
 *              0 = macro_is_control((42))
 *              0 = macro_is_control('z')
 */
#define macro_is_control(x) (((x) > 0 && (x) < 32) ? 1 : 0)

int main() {
  int retval = macro_is_control(1);
  printf("%d = macro_is_control(1)\n", retval);

  retval = macro_is_control(7);
  printf("%d = macro_is_control(7)\n", retval);

  retval = macro_is_control((42));
  printf("%d = macro_is_control((42))\n", retval);

  retval = macro_is_control('z');
  printf("%d = macro_is_control('z')\n", retval);
}
