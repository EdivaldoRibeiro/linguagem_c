#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_str_to_lowercase(char string[])
 *
 * FUNÇÃO:      converte o conteúdo de um string para minúsculo.
 *
 * PSEUDOCODIGO:
 *              mover zeros para idx.
 *              ENQUANTO [string[idx] diferente de NULO] {
 *                converta string[idx] para minúsculo
 *                incremente idx
 *              }
 *
 * COMPILAÇÃO:
 *              gcc fun_str_to_lowercase.c -o fun_str_to_lowercase.exe
 *              chmod 755 fun_str_to_lowercase.exe
 *
 * TESTE:       ./fun_str_to_lowercase.exe
 *
 * SAIDA:
 *              buff1=hello world!
 *              buff2=O Senhor e Salvador Jesus Cristo
 *
 *              buff1=hello world!
 *              buff2=o senhor e salvador jesus cristo
 */
void fun_str_to_lowercase(char string[]) {
  int idx=0;
  while(string[idx] != NULO) {
    string[idx] = macro_to_lowercase(string[idx]);
    idx++;
  }
}

int main() {
  char buff1[SIZEBUFF];
  char buff2[SIZEBUFF];

  strcpy(buff1, "hello world!");
  strcpy(buff2, "O Senhor e Salvador Jesus Cristo");
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

  fun_str_to_lowercase(buff1);
  fun_str_to_lowercase(buff2);
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

}
