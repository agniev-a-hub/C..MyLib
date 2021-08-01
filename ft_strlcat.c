#include "ft_lib.h"

// size_t strlcpy (char *dst const char *src size_t size);
// size_t strlcat (char *dst const char *src size_t size);
 
// DESCRIPTION
// The strlcpy ();
// and strlcat ();
// functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy ();
// and strlcat ();
// take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as Fa size is larger than 0 or, in the case of strlcat (,);
// as long as there is at least one byte free in Fa dst ) . Note that you should include a byte for the NUL in Fa size . Also note that strlcpy ();
// and strlcat ();
// only operate on true ``C'' strings. This means that for strlcpy ();
// Fa src must be NUL-terminated and for strlcat ();
// both Fa src and Fa dst must be NUL-terminated.

// The strlcpy ();
// function copies up to Fa size - 1 characters from the NUL-terminated string Fa src to Fa dst , NUL-terminating the result.

// The strlcat ();
// function appends the NUL-terminated string Fa src to the end of Fa dst . It will append at most Fa size - strlen(dst) - 1 bytes, NUL-terminating the result.  
// RETURN VALUES
// The strlcpy ();
// and strlcat ();
// functions return the total length of the string they tried to create. For strlcpy ();
// that means the length of Fa src . For strlcat ();
// that means the initial length of Fa dst plus the length of Fa src . While this may seem somewhat confusing it was done to make truncation detection simple.

// Note however, that if strlcat ();
// traverses Fa size characters without finding a NUL, the length of the string is considered to be Fa size and the destination string will not be NUL-terminated (since there was no space for the NUL). This keeps strlcat ();
// from running off the end of a string. In practice this should not happen (as it means that either Fa size is incorrect or that Fa dst is not a proper ``C'' string). The check exists to prevent potential security problems in incorrect code.   

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  slen;
    len = 0;
    slen = ft_strlen(src);
    while (*dst && size > 0)
    {
        dst++;
        len++;
        size--;
    }
    while (*src && size-- > 1)
        *dst++ = *src++;
    if (size == 1 || *src == 0)
        *dst = '\0';
    return (slen + len);
}