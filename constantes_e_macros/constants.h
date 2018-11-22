#ifndef _constants_
#define _constants_

/*************************************************************************************
Constante                           Significado
**************************************************************************************/
#define NULO '\0'                   /* define o caractere NULL */
#define EOL '\n'                    /* define o fim de linha */
#define EOF -1                      /* define fim de arquivo */
#define ERROR -1                    /* define o código de estado de retorno ERROR */
#define NEWLINE '\n'                /* define "carriage return/line feed" */
#define BACKSPACE '\b'
#define CARRIAGE_RETURN '\r'
#define FORMFEED '\r'
#define TRUE 1                      /* VERDADE booleano */
#define FALSE 0                     /* FALSO booleano */
#define PI 3.141592653
#define MAX_STRING 255              /* tamanho max que as strings são dimensionadas*/
#define IO_ERROR -1                 /* valor retornado se o usuário entrar com um dado
                                    ruim do teclado */
#define UNDEFINED -9999.9999        /* usado em funções trigonométricas */
#define BLANK ''
#define print_character(x) putch(x) /* para console I/O */
#define get_character(x) getch(x)   /* para console I/O */

#endif
