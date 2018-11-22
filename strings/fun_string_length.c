#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_string_length(string)
 *
 * FUNÇÃO:      retorna uma contagem do número de caracteres na variável string.
 *              String é examinada até encontrar NULL.
 *
 * PSEUDOCODIGO:
 *              Inicie size com 0
 *              ENQUANTO string[size] diferente de zeros {
 *                incremente size
 *              }
 *              Retorne size
 *
 * COMPILAÇÃO:
 *              gcc fun_string_length.c -o fun_string_length.exe
 *              chown 755 fun_string_length.exe
 *
 * TESTE:       ./fun_string_length.exe
 *
 * SAIDA:
 *              hello world! (12 caracteres)
 *
 *              O Senhor e Salvador Jesus Cristo (32 caracteres)
 */

int fun_string_length(char string[]) {
  int size;
  for(size=0; string[size] != NULO; ++size);
  return size;
}

int main() {
  char buff[64];

  strcpy(buff, "hello world!");
  printf("%s (%d caracteres)\n\n", buff, fun_string_length(buff));

  strcpy(buff, "O Senhor e Salvador Jesus Cristo");
  printf("%s (%d caracteres)\n\n", buff, fun_string_length(buff));

}
