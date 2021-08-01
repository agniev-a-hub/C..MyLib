#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>

void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
size_t ft_strlen(const char *str);
char *ft_strdup(const char *s);
char *ft_strcpy(char * dest, const char * src);
char *ft_strncpy(char * dest, const char * src, size_t n);
char *ft_strcat(char *dest, const char *src);
char* ft_strncat(char* dest, const char* src, size_t n);
size_t ft_strlcat (char *dst, const char *src, size_t size);
char *ft_strchr (const char *s, char c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *big, const char *little, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi (const char *nptr);
char ft_isalpha(char c);
int ft_isdigit (char c);
int ft_isalnum(int c);
int ft_isascii(int ch);
int ft_isprint(int c);
int ft_toupper (int c);
int ft_tolower (int c);
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char * ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr (char *s);


#endif