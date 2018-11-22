#include <stdio.h>
#include <string.h>
#include "constants_macros.h"

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 21nov2018
 *
 * NOME:        int insert_string(char string[], char substring[], size_t location)
 *
 * FUNÇÃO:      insere substring em string na posição especificada.
 *
 * PSEUDOCODIGO:
 *              SE location é maior que tamanho de string[] {
 *                retornar ERRO
 *              }
 *              Mover string[location] para temporario[]
 *              Mover substring[] para string[location]
 *              Mover temporario[] para string[location+(tamanho de substring[])]
 *
 * COMPILAÇÃO:
 *              gcc fun_insert_string.c -o fun_insert_string.exe
 *              chmod 755 fun_insert_string.exe
 *
 * TESTE:       ./fun_insert_string.exe
 *
 * SAIDA:
 *              buff1=meu () lima
 *              buff2=pe de laranja
 *
 *              buff1=meu (pe de laranja) lima
 *              buff2=pe de laranja
 *              ret=0
 *
 *              buff1=meu () lima
 *              buff2=pe de laranja
 *
 *              buff1=meu () lima
 *              buff2=pe de laranja
 *              ret=-1
 */
int fun_insert_string(char string[], char substring[], size_t location) {
  size_t size_string = strlen(string);
  if (location > size_string) {
    return ERRO;
  }

  int size_substring = strlen(substring);
  char temporario[SIZEBUFF];
  strcpy(temporario, string);
  strcpy(&string[0]+location,substring);
  strcat(string,&temporario[0]+location);
  return SUCESSO;
}

int main() {
  char buff1[SIZEBUFF];
  char buff2[SIZEBUFF];

  strcpy(buff1, "meu () lima");
  strcpy(buff2, "pe de laranja");
  printf("buff1=%s\nbuff2=%s\n\n",buff1,buff2);

  int ret=fun_insert_string(buff1, buff2, 5);
  printf("buff1=%s\nbuff2=%s\nret=%d\n\n",buff1,buff2,ret);

  strcpy(buff1, "meu () lima");
  strcpy(buff2, "pe de laranja");
  printf("buff1=%s\nbuff2=%s\n\n",buff1,buff2);

  ret=fun_insert_string(buff1, buff2, 25);
  printf("buff1=%s\nbuff2=%s\nret=%d\n\n",buff1,buff2,ret);

}
