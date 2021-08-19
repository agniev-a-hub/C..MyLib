#ifndef FT_LIB_H
# define FT_LIB_H
// for malloc() free ()
# include <stdlib.h>
//for write()
# include <unistd.h>
# include <string.h>
# include <stdio.h>
// lists
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}   t_list;
//lib functions
void *ft_memset(void *str, int c, size_t n);//tested
void ft_bzero(void *s, size_t n); //tested
void *ft_memccpy(void *dst, const void *src, int c, size_t n); //tested
void *ft_memmove(void *dest, const void *src, size_t n); // tested
void *ft_memchr(const void *s, int c, size_t n);	//tested;
int	ft_memcmp(const void *s1, const void *s2, size_t n);//tested;
void *ft_memcpy(void *dest, const void *src, size_t n);//tested
size_t ft_strlen(const char *str); //tested
char *ft_strdup(const char *s);//tested
char *ft_strcpy(char * dest, const char * src);//tested with //memory
char *ft_strncpy(char * dest, const char * src, size_t n);//tested with //memory
char *ft_strcat(char *dest, const char *src);//tested with //memory
char* ft_strncat(char* dest, const char* src, size_t n);///tested with //memory
size_t ft_strlcat (char *dst, const char *src, size_t size);//tested with //memory
char *ft_strchr (const char *s, int c); //tested
char *ft_strrchr(const char *s, int c);//tested
char *ft_strstr(const char *haystack, const char *needle);//tested
char *ft_strnstr(const char *big, const char *little, size_t n);//tested -- BSD not working
int ft_strcmp(const char *s1, const char *s2);//tested
int ft_strncmp(const char *s1, const char *s2, size_t n);//tested
int ft_atoi (const char *nptr); //tested
char ft_isalpha(char c);//tested
int ft_isdigit (char c);//tested
int ft_isalnum(int c);///tested
int ft_isascii(int ch);//tested
int ft_isprint(int c);//tested
int ft_toupper (int c);//tested
int ft_tolower (int c);//tested
// custom fuctions
void *ft_memalloc(size_t size);//tested with //memory
void ft_memdel(void **ap);//tested with //memory
char *ft_strnew(size_t size); //tested with //memory
void ft_strdel(char **as); //tested with //memory
void ft_strclr (char *s); //tested with //memory
void ft_striter(char *s, void (*f)(char*)); //tested with //memory
void ft_striteri(char *s, void (*f)(unsigned int, char *)); //tested with //memory
char *ft_strmap (const char *s, char (*f)(char)); //tested with //memory
char *ft_strmapi (const char *s, char (*f)(unsigned int, char)); ///tested with //memory
int ft_strequ (char const * s1, char * s2); ///tested 
int ft_strnequ (char const * s1, char * s2, size_t n); ////tested 
char *ft_strsub(char const *s, unsigned int start, size_t len); //tested 
char * ft_strjoin(char const * s1, char const * s2);//tested 
char *ft_strtrim(char const *s);///tested 
char ** ft_strsplit(char const * s, char c);///tested 
char * ft_itoa(int n);///tested 
void ft_putchar(char c);//->//tested 
void ft_putchar_fd(char c, int fd);//->//tested 
void ft_putstr_fd(char const *s, int fd);//->//tested 
void ft_putstr (char const * s);//->//tested 
void ft_putendl(char const *s);//->//tested 
void ft_putnbr(int n);//->//tested 
void ft_putendl_fd(char const *s, int fd);//->//tested 
void ft_putnbr_fd(int n, int fd);//->//tested 
//lists
t_list * ft_lstnew(void const * content, size_t content_size);//->
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));//->
void ft_lstdel(t_list **alst, void (*del)(void*, size_t));//->
void ft_lstadd(t_list **alst, t_list *new);//->
void ft_lstiter(t_list * lst, void (*f)(t_list * elem));//->
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));//->


#endif