#include "ft_lib.h"

char ft_islower_alpha(char c){
   return c >= 'a' && c <= 'z';
}
char ft_isupper_alpha(char c){
   return c >= 'A' && c <= 'Z';
}
char ft_isalpha(char c){
    return ft_islower_alpha(c) || ft_isupper_alpha(c);
}
