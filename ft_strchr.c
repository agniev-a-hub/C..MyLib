#include "ft_lib.h"

//        #include <string.h>

//        char *strchr(const char *s, int c);
//        char *strrchr(const char *s, int c);

//        #define _GNU_SOURCE         /* See feature_test_macros(7) */
//        #include <string.h>

//        char *strchrnul(const char *s, int c);

// DESCRIPTION         top

//        The strchr() function returns a pointer to the first occurrence
//        of the character c in the string s.

//        The strrchr() function returns a pointer to the last occurrence
//        of the character c in the string s.

//        The strchrnul() function is like strchr() except that if c is not
//        found in s, then it returns a pointer to the null byte at the end
//        of s, rather than NULL.

//        Here "character" means "byte"; these functions do not work with
//        wide or multibyte characters.


char *ft_strchr (const char *s, char c){

   while(*s != c && *s != '\0') {
      s++;
   }
   if(*s == (char) c) {
   // const discard if no ()
      return ((char*)s);
   }
   else {
      return (NULL);
   }
}