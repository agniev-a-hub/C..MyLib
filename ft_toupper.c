#include "ft_lib.h"

int ft_toupper (int c){
    int ascii = (int) c;
    if (ascii >= 97 && ascii <= 122) {
        ascii -= 32;
        c = (char) ascii;
        return c;
    }
    else{
        return c;
    }
}