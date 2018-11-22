#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        fun_append_string(char string1[], char string2[2])
 *
 * FUNÇÃO:      cocatenar a string2 na string1.
 *
 * PSEUDOCODIGO:
 *              inicie idx1 e idx2 com zeros
 *              ENQUANTO string1[idx1] não é NULO {
 *                incrementar idx1
 *              }
 *              ENQUANTO string2[idx2] não é NULO {
 *                mover string2[idx2] para string1[idx1]
 *                incrementar idx1 e idx2
 *              }
 *
 * COMPILAÇÃO:
 *              gcc fun_append_string.c -o fun_append_string.exe
 *              chmod 755 fun_append_string.exe
 *
 * TESTE:       ./fun_append_string.exe
 *
 * SAIDA:
 *              buff1=hello
 *              buff2=world!
 *              buff3=hello world!
 *
 *              buff1=O Senhor e Salvador
 *              buff2=Jesus Cristo
 *              buff3=O Senhor e Salvador Jesus Cristo
 */

void fun_append_string(char string1[], char string2[]) {
  int idx1, idx2;
  for(idx1=0; string1[idx1] != NULO; idx1++);
  for(idx2=0; (string1[idx1++] = string2[idx2]) != NULO; idx2++);
}

int main() {
  char buff1[SIZEBUFF];
  char buff2[SIZEBUFF];
  char buff3[SIZEBUFF];

  strcpy(buff1, "hello ");
  strcpy(buff2, "world!");
  memset(buff3, 0x00, sizeof(buff3));
  fun_append_string(buff3,buff1);
  fun_append_string(buff3,buff2);
  printf("buff1=%s\nbuff2=%s\nbuff3=%s\n\n",buff1,buff2,buff3);

  strcpy(buff1, "O Senhor e Salvador ");
  strcpy(buff2, "Jesus Cristo");
  memset(buff3, 0x00, sizeof(buff3));
  fun_append_string(buff3,buff1);
  fun_append_string(buff3,buff2);
  printf("buff1=%s\nbuff2=%s\nbuff3=%s\n\n",buff1,buff2,buff3);

}
