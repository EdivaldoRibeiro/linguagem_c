#include <stdio.h>
#include <string.h>

/*
 * COLABORADOR: Edivaldo Ribeiro (java.betel@uol.com.br) - 20nov2018
 *
 * NOME:        macro_bit_mask(x,y)
 *
 * FUNÇÃO:      executa E bit a bit entre x e y.
 *
 * PSEUDOCODIGO:
 *              executar E (&) bit a bit de x e y.
 *
 * COMPILAÇÃO:
 *              gcc macro_bit_mask.c -o macro_bit_mask.exe
 *              chmod 755 macro_bit_mask.exe
 *
 * TESTE:       ./macro_bit_mask.exe
 *
 * SAIDA:
 *              x = 0000000000010111
 *              y = 0000000001001011
 *              --> 0000000000000011
 *
 *              0000000000000011 = macro_bit_mask(0000000000010111, 0000000001001011)
 */
#define macro_bit_mask(x,y) ((short int)(x) & (short int)(y))

#define MAX (sizeof(short int)*8+1)

void getBinaryString(size_t const size, void const * const ptr, char *string) {
  unsigned char *b = (unsigned char*) ptr;
  unsigned char byte;
  int i, j;

  for (i=size-1;i>=0;i--) {
    for (j=7;j>=0;j--) {
      byte = (b[i] >> j) & 1;
      sprintf(string+strlen(string), "%c", (byte+0x30));
    }
  }
}

int main() {
  short int b1 = 23;
  short int b2 = 75;
  short int ret = macro_bit_mask(b1,b2);

  char b1Str[MAX] = "";
  char b2Str[MAX] = "";
  char retStr[MAX] = "";

  memset(b1Str, 0x00, MAX);
  memset(b2Str, 0x00, MAX);
  memset(retStr, 0x00, MAX);

  getBinaryString(sizeof(b1), &b1, b1Str);
  getBinaryString(sizeof(b2), &b2, b2Str);
  getBinaryString(sizeof(ret), &ret, retStr);

  printf("x = %s\n", b1Str);
  printf("y = %s\n", b2Str);
  printf("--> %s\n\n", retStr);

  printf("%s = macro_bit_mask(%s, %s)\n", retStr, b1Str, b2Str);
}
