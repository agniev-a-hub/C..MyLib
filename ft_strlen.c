#include "ft_lib.h"

// size_t strlen(const char *str);

// DESCRIPTION

// The strlen() function calculates the length of the string pointed
// to by str, excluding the terminating null byte ('\0').


size_t ft_strlen(const char *str)
{
    size_t length = 0;
    while (*str++)
      length++;
    return (length);
}