#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_invert_string(char string[])
 *
 * FUNÇÃO:      converte caracteres minúsculo em maiúsculo e vice-versa.
 *
 * PSEUDOCODIGO:
 *              mover zeros para idx
 *              ENQUANTO string[idx] diferente de NULO {
 *                SE string[idx] é maiúsculo ENTÃO
 *                  converte para minúsculo
 *                SENÃO
 *                  converte para maiúsculo
 *              }
 *
 * COMPILAÇÃO:
 *              gcc fun_invert_string.c -o fun_invert_string.exe
 *              chown 755 fun_invert_string.exe
 *
 * TESTE:       ./fun_invert_string.exe
 *
 * SAIDA:
 *              buff1=hello world!
 *              buff2=O Senhor e Salvador Jesus Cristo
 *
 *              buff1=HELLO WORLD!
 *              buff2=o sENHOR E sALVADOR jESUS cRISTO
 */
void fun_invert_string(char string[]) {
  int idx=0;
  while(string[idx] != NULO) {
    if (macro_is_lowercase(string[idx]) == 1)
      string[idx] = macro_to_uppercase(string[idx]);
    else
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

  fun_invert_string(buff1);
  fun_invert_string(buff2);
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

}
