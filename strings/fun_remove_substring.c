#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 22nov2018
 *
 * NOME:        fun_remove_substring(char string[], int first, int num_char)
 *
 * FUNÇÃO:      remove quantidade de caracteres especificado por 'num_char' na
 *              posição 'first' de string[].
 *
 * PSEUDOCODIGO:
 *              Mover string[0] até string[first] para temporario[]
 *              Cocatenar temporario[] com string[first+num_char]
 *
 * COMPILAÇÃO:
 *              gcc fun_remove_substring.c -o fun_remove_substring.exe
 *              chown 755 fun_remove_substring.exe
 *
 * TESTE:       ./fun_remove_substring.exe
 *
 * SAIDA:
 *              buff1=meu pe de laranja lima
 *              remove da posicao 17, 5 caracteres
 *              buff1=meu pe de laranja
 *              ret=0
 *
 *              buff1=meu pe de laranja lima
 *              remove da posicao 4, 3 caracteres
 *              buff1=meu de laranja lima
 *              ret=0
 */

int fun_remove_substring(char string[], size_t first, int num_char) {
  if(strlen(string) < (first+num_char)) {
    return ERRO;
  }

  char temporario[SIZEBUFF];
  memset(temporario, 0x00, sizeof(temporario));
  strncat(temporario, string, first);
  strcat(temporario, &string[first+num_char]);
  strcpy(string, temporario);
  return SUCESSO;
}

int main() {
  char buff1[SIZEBUFF];

  strcpy(buff1, "meu pe de laranja lima");
  printf("buff1=%s\n",buff1);

  int ret=fun_remove_substring(buff1, 17, 5);
  printf("remove da posicao 17, 5 caracteres\nbuff1=%s\nret=%d\n\n",buff1,ret);

  strcpy(buff1, "meu pe de laranja lima");
  printf("buff1=%s\n",buff1);

  ret=fun_remove_substring(buff1, 4, 3);
  printf("remove da posicao 4, 3 caracteres\nbuff1=%s\nret=%d\n\n",buff1,ret);
}
