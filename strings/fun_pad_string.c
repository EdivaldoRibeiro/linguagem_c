#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 22nov2018
 *
 * NOME:        void fun_pad_string(char string[], int num_blanks)
 *
 * PSEUDOCODIGO:
 *              mover quantidade 'num_blanks' em temporario[]
 *              concatenar string[] em temporario[]
 *              mover temporario[] para string[]
 *
 * COMPILAÇÃO:
 *              gcc fun_pad_string.c -o fun_pad_string.exe
 *              chmod 755 fun_pad_string.exe
 *
 * TESTE:       ./fun_pad_string.exe
 *
 * SAIDA:
 *              buff1=meu pe de laranja lima
 *              buff1=     meu pe de laranja lima
 */
void fun_pad_string(char string[], int num_blanks) {
  char temporario[SIZEBUFF];
  memset(temporario,0x00,sizeof(temporario));
  while(num_blanks > 0) temporario[--num_blanks] = ' ';
  strcat(temporario, string);
  strcpy(string, temporario);
}

int main() {
  char buff1[SIZEBUFF];

  strcpy(buff1, "meu pe de laranja lima");
  printf("buff1=%s\n",buff1);

  fun_pad_string(buff1, 5);
  printf("buff1=%s\n\n",buff1);

}
