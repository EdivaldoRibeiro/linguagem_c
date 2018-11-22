#ifndef _constants_macros_
#define _constants_macros_

// CONSTANTES
#define NULO '\0'                   /* define o caractere NULL */
#define SIZEBUFF  64                /* tamanho do buffer */

// MACROS
#define macro_is_lowercase(x) (((x) >='a' && (x) <='z') ? 1 : 0)
#define macro_is_uppercase(x) (((x) >='A' && (x) <= 'Z') ? 1 : 0)
#define macro_to_uppercase(x) ( macro_is_lowercase(x) ? (x - 'a' + 'A') : x)
#define macro_to_lowercase(x) ( macro_is_uppercase(x) ? (x + 'a' - 'A') : x)

#endif
