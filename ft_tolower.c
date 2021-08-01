#include "ft_lib.h"

int ft_tolower (int c){
    int ascii = (int) c;
    if (ascii >= 65 && ascii <= 90) {
        ascii += 32;
        c = (char) ascii;
        return c;
    }
    else{
        return c;
    }
}