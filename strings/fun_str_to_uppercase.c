#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_str_to_uppercase(char string[])
 *
 * FUNÇÃO:      converte o conteúdo de um string para MAIÚSCULAS.
 *
 * PSEUDOCODIGO:
 *              inicie idx com zeros
 *              ENQUANTO string[idx] diferente de NULO {
 *                converta string[idx] para maiúsculo
 *                incremente idx
 *              }
 *
 * COMPILAÇÃO:
 *              gcc fun_str_to_uppercase.c -o fun_str_to_uppercase.exe
 *              chmod 755 fun_str_to_uppercase.exe
 *
 * TESTE:       ./fun_str_to_uppercase.exe
 *
 * SAIDA:
 *              buff1=hello world!
 *              buff2=O Senhor e Salvador Jesus Cristo
 *
 *              buff1=HELLO WORLD!
 *              buff2=O SENHOR E SALVADOR JESUS CRISTO
 */

void fun_str_to_uppercase(char string[]) {
  int idx=0;
  while(string[idx] != NULO) {
    string[idx] = macro_to_uppercase(string[idx]);
    ++idx;
  }
}

int main() {
  char buff1[SIZEBUFF];
  char buff2[SIZEBUFF];

  strcpy(buff1, "hello world!");
  strcpy(buff2, "O Senhor e Salvador Jesus Cristo");
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

  fun_str_to_uppercase(buff1);
  fun_str_to_uppercase(buff2);
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

}
