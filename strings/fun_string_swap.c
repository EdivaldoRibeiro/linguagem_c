#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_string_swap(char string1[], char string2[])
 *
 * FUNÇÃO:      troca string2[] por string1[]
 *
 * PSEUDOCODIGO:
 *              copiar string1[] para temporario[]
 *              copiar string2[] para string1[]
 *              copiar temporario[] para string1[]
 *
 * COMPILAÇÃO:
 *              gcc fun_string_swap.c -o fun_string_swap.exe
 *              chmod 755 fun_string_swap.exe
 *
 * TESTE:       ./fun_string_swap.exe
 *
 * SAIDA:
 *              buff1=hello world!
 *              buff2=O Senhor e Salvador Jesus Cristo
 *
 *              buff1=O Senhor e Salvador Jesus Cristo
 *              buff2=hello world!
 */

void fun_string_swap(char string1[], char string2[])  {
  char temporario[SIZEBUFF];

  strcpy(temporario, string1);
  strcpy(string1, string2);
  strcpy(string2, temporario);
}

int main() {
  char buff1[SIZEBUFF];
  char buff2[SIZEBUFF];

  strcpy(buff1, "hello world!");
  strcpy(buff2, "O Senhor e Salvador Jesus Cristo");
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

  fun_string_swap(buff2,buff1);
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

}
