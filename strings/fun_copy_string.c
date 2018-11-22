#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

// Protótipos
void fun_copy_string(char string1[], char string2[]);

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_copy_string(char string1[], char string2[])
 *
 * FUNÇÃO:      copia o conteúdo de string1 em string2
 *
 * PSEUDOCODIGO:
 *              inicie idx com zero
 *              ENQUANTO string2[idx] diferente de NULO {
 *                copiar string2[idx] para string1[idx]
 *                incrementar idx
 *              }
 *              setar string1[idx] com NULO
 *
 * COMPILAÇÃO:
 *              gcc fun_copy_string.c -o fun_copy_string.exe
 *              chmod 755 fun_copy_string.exe
 *
 * TESTE:       ./fun_copy_string.exe
 *
 * SAIDA:
 *              buff1=hello world!
 *              buff2=hello world!
 *
 *              buff1=O Senhor e Salvador Jesus Cristo
 *              buff2=O Senhor e Salvador Jesus Cristo
 */

void fun_copy_string(char string1[], char string2[]) {
  int idx=0;
  for(idx=0; (string1[idx] = string2[idx]) != NULO; idx++);
}

int main() {
  char buff1[SIZEBUFF];
  char buff2[SIZEBUFF];

  strcpy(buff1, "hello world!");
  fun_copy_string(buff2,buff1);
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

  strcpy(buff1, "O Senhor e Salvador Jesus Cristo");
  fun_copy_string(buff2,buff1);
  printf("buff1=%s\nbuff2=%s\n\n", buff1, buff2);

}
