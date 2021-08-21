#include "ft_lib.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void test_ft_strlen()
{
    if(strlen("6789\n0das23423..e23456") == ft_strlen("6789\n0das23423..e23456")){
        printf("Test ft_strlen() passed:    1/58\n");
        return;
    }
    printf("Test ft_strlen() NOT passed:    1/58\n");

}

void test_ft_bzero()
{
    char * asrc = "a-670a83432490asdfdsg6789";
    const int len = strlen(asrc)+1;
    char * a = malloc(len);
    char * b = malloc(len);
    strcpy(a, asrc);
    strcpy(b, asrc);
    ft_bzero(a, 5);
    bzero(b, 5);
    int result = memcmp(a,b,len);
    if (!result ){
        printf("Test ft_bzero() passed:    2/58\n");
        free(a);
        free(b);
        return ;
    }
    printf("Test ft_bzero() NOT passed:    2/58\n");
    free(a);
    free(b);
}

void test_ft_atoi()
{
    if (ft_atoi("-12345qwert") != atoi("-12345qwert")){
        printf("Test case 1 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("1234qwerty") != atoi("1234qwerty")){
        printf("Test case 2 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("123qw\tertyui") != atoi("123qw\tertyui")){
        printf("Test case 3 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("12ertyu\biopjg") != atoi("12ertyu\biopjg")){
        printf("Test case 4 ft_atoi() NOT passed:    3/58\n");
        return;
    }

    if (ft_atoi("\ta\bdsfsgsddgs") != atoi("\ta\bdsfsgsddgs")){
        printf("Test case 5 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("   123qw\tertyui") != atoi("   123qw\tertyui")){
        printf("Test case 6 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("0123qw\tertyui") != atoi("0123qw\tertyui")){
        printf("Test case 7 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("0123qw\tertyui") != atoi("0123qw\tertyui")){
        printf("Test case 8  ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("-0123qw\tertyui") != atoi("-0123qw\tertyui")){
        printf("Test case 9 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("-q0123qw\tertyui") != atoi("-q0123qw\tertyui")){
        printf("Test case 10 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    printf("Test ft_atoi() passed:    3/58\n");
}

void test_ft_memset()
{
	int len = 6;
    char dest1[6] = "\0e3lo!";
    char dest2[6] = "\0e3lo!";
    int filler = 'a';
    memset(dest1, filler, 2);
    ft_memset(dest2, filler, 2);
    int res = memcmp(dest1,dest2,len);

	if (res)
    {
        printf("Test ft_memset() NOT passed:    4/58\n");
        return;
	}
	printf("Test ft_memset() passed:    4/58\n");
}

void test_ft_memccpy()
{
    char * string = "111\t\t\t-0192839qweqweN__dsasd";
    int len1 = strlen(string)+1;
    int len2 = 9;
    int lenToCmp = 14;
    char * dest1 = malloc(len1);
    char * dest2 = malloc(len1);
    char * dest3 = malloc(len1);
    char * dest4 = malloc(len1);
    memccpy(dest1, string, 'q', len1);
    ft_memccpy(dest2, string, 'q', len1);
    memccpy(dest3, string, 'q', len2);
    ft_memccpy(dest4, string, 'q', len2);
    if (memcmp(dest1,dest2,lenToCmp)){
        printf("Test case 1 ft_memccpy() NOT passed:    5/58\n");
        free(dest1);
        free(dest2);
        free(dest3);
        free(dest4);
        return;
    }
    if (memcmp(dest3,dest4,len2)){
        printf("Test case 2 ft_memccpy() NOT passed:    5/58\n");
        free(dest1);
        free(dest2);
        free(dest3);
        free(dest4);
        return;
    }
    printf("Test ft_memccpy() passed:    5/58\n");
    free(dest1);
    free(dest2);
    free(dest3);
    free(dest4);
}

void test_ft_memmove()
{
    char * test1 = "____Hello_little_friends\t\b\t Yo!";
    char * test2 = "Indeed_hello!";
    const int len1 = ft_strlen(test1)+1;
    const int lenToCmp = 12;
    char * buff1 = (char*)malloc(len1);
    char * buff2 = (char*)malloc(len1);
    memcpy(buff1,test1,len1);

    void *actual = ft_memmove(buff1, test2, lenToCmp);
    void *expected =  memmove(buff2, test2, lenToCmp);

    if (memcmp(actual,expected,15)){
        printf("Test ft_memmove() case 1 NOT passed:    6/58\n");
        free(buff1);
        free(buff2);
        return;
    }
    if (memcmp(NULL,NULL,len1)){
        printf("Test ft_memmove() case 2 NOT passed:    6/58\n");
        free(buff1);
        free(buff2);
        return;
    }
    free(buff1);
    free(buff2);
    printf("Test ft_memmove() passed:    6/58\n");
}

void test_ft_memchr()
{
    char * string = "45678945678956789_\t\t\tQ5643789624378";
    if (((char*)memchr(string, 'Q', 36)) == ((char*)ft_memchr(string, 'Q', 36)))
    {
        printf("Test ft_memchr() passed:    7/58\n");
        return;
    }
    printf("Test ft_memchr() NOT passed:    7/58\n");

}

void test_ft_memcmp()
{
    char * string1 = "47823843242934239dajsdhsdabhYGDYGSDY";
    char * string2 = "47823843242934239dajsdhsdabhYGDYGSDYdasfasfs\n\n\n\n\t\t\t1231231----&*()";
    int len = 30;
    if ((memcmp(string1, string2, len) == ft_memcmp(string1, string2, len))){
        printf("Test ft_memcmp() passed:    8/58\n");
        return;
    }
    printf("Test ft_memcmp() NOT passed:    8/58\n");

}

void test_ft_memcpy()
{
    char * src1;
    src1 = "oh_my_god_i";
    int len = strlen(src1);
    char destin1[] = "56785678456785678";
    char destin2[] = "56785678456785678";
    char*s1 = memcpy(destin1, src1, 11);
    char*s2 = memcpy(destin2, src1, 11);
    int res = memcmp(s1,s2,len);
    if(!res)
    {
        printf("Test ft_memcpy() passed:    9/58\n");
        return;
    }
    printf("Test ft_memcpy() NOT passed:    9/58\n");

}

void test_ft_strdup()
{
    const char * s1 = "479123______    whf\n\n\niwe";
    char * c1 = ft_strdup(s1);
    const char * s2 = "479whfiwe";
    char * c2 = ft_strdup(s2);

    if (strcmp(c1, s1) )
    {
        printf("Test ft_strdup() case1 NOT passed:    10/58\n");
        free(c1);
        free(c2);
        return;
    }

    if (strcmp(c2, s2) )
    {
        printf("Test ft_strdup() case2 NOT passed:    10/58\n");
        free(c1);
        free(c2);
        return;
    }
    free(c1);
    free(c2);
    printf("Test ft_strdup()  passed:    10/58\n");

}

void test_ft_strcpy()
{
    const char * s = "479123______    whf\n\n\niwe";
    char * test1 = malloc(sizeof(char)*(strlen(s)+1));
    char * test2 = malloc(sizeof(char)*(strlen(s)+1));
    strcpy(test1, s);
    ft_strcpy(test2, s);
    if (strcmp(test1,test2))
    {
        printf("Test ft_strcpy() NOT passed:    11/58\n");
        free(test1);
        free(test2);

    }
    free(test1);
    free(test2);
    printf("Test ft_strcpy() passed:    11/58\n");
}

void test_ft_strncpy()
{
    const char * s = "479123______    whf\n\n\niwe";
    int len =strlen(s)+1;
    char * expected = malloc(sizeof(char)*len);
    char * actual = malloc(sizeof(char)*len);
    strncpy(expected, s, 15);
    ft_strncpy(actual, s, 15);

    if (ft_strcmp(expected, actual) ){
        free(expected);
        free(actual);
        printf("Test ft_strncpy() NOTpassed:    12/58\n");
    }
    printf("Test ft_strncpy()  passed:    12/58\n");
    free(expected);
    free(actual);
}

void test_ft_strcat()
{
    char * s1 = "first string\b\t";
    char * s2= "second";
    int size = sizeof(char)*(strlen(s1)+strlen(s2)+1);
    char * actual = malloc(size);
    char * expected = malloc(size);

    strcpy(actual, s1);
    strcpy(expected,s1);

    strcat(expected, s2);
    ft_strcat(actual, s2);

    if (ft_strcmp(actual, expected))
    {
         printf("Test ft_strcat() NOT passed:    13/58\n");
         return;
    }
    printf("Test ft_strcat()  passed:    13/58\n");
    free(expected);
    free(actual);

}

void test_ft_strncat()
{
    char * s1 = "first string\b\t";
    char * s2= "second";
    int size = sizeof(char)*(strlen(s1)+strlen(s2)+1);
    char * actual = malloc(size);
    char * expected = malloc(size);

    strcpy(actual, s1);
    strcpy(expected,s1);
    int from = 5;
    strncat(expected, s2,from);
    ft_strncat(actual, s2,from);

    if (ft_strcmp(actual, expected))
    {
         printf("Test ft_strncat() NOT passed:    14/58\n");
         return;
    }
    printf("Test ft_strncat()  passed:    14/58\n");
    free(expected);
    free(actual);

}

void test_ft_strlcat()
{
    char * s1 = "first string\b\t";
    char * s2= "second";
    int size = sizeof(char)*(strlen(s1)+strlen(s2)+1);
    char * actual = malloc(size);
    char * expected = malloc(size);

    strcpy(actual, s1);
    strcpy(expected,s1);
    int from = 5;
    int actualLen = strlcat(expected, s2,from);
    int expectedLen = ft_strlcat(actual, s2,from);

    if (actualLen !=expectedLen )
    {
         printf("Test ft_strlcat() NOT passed:    15/58\n");
         return;
    }
    printf("Test ft_strlcat()  passed:    15/58\n");
    free(expected);
    free(actual);

}

void test_ft_strchr()
{
    char * test = "23456789fg\b\nhjkebvncxmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (strchr(test, '0') == ft_strchr(test, '0'))
    {
        printf("Test ft_strchr() passed:    16/58\n");
        return;
    }
    printf("Test ft_strchr() NOT passed:    16/58\n");
}

void test_ft_strrchr()
{
    char * test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (strrchr(test, '0') == ft_strrchr(test, '0'))
    {
        printf("Test ft_strrchr() passed:    17/58\n");
        return;
    }

    printf("Test ft_strrchr() NOT passed:    17/58\n");

}

void test_ft_strstr()
{
    char * test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";


    if (strstr(test, "gdbg") != ft_strstr(test, "gdbg"))
    {
        printf("Test ft_strstr() case1 NOT passed:    18/58\n");
        return;
    }
    printf("Test ft_strstr()  passed:    18/58\n");

}

void test_ft_strnstr()
{
    char * test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (ft_strnstr(test, "gdbg", 45) == strnstr(test, "gdbg", 45))
    {
        printf("Test ft_strnstr() passed:    19/58\n");
        return;
    }

    printf("Test ft_strnstr() NOT passed:    19/58\n");

}

void test_ft_strcmp()
{
    char * a = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * b = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * c = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * d = "dsajfihdasbfaj";
    if(strcmp(a,b) != ft_strcmp(a,b)){
        printf("Test ft_strcmp() case 1 NOT passed:    20/58\n");
        return;
    }
    if((strcmp(c,d) && ft_strcmp(c,d))){
        printf("Test ft_strcmp() case 2 NOT passed:    20/58\n");
        return;
    }
    printf("Test ft_strcmp() passed:    20/58\n");
}

void test_ft_strncmp()
{
    char * a = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * b = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * c = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * d = "r567890-cvbnm,.";
    if ((strncmp(a,b,5) != ft_strncmp(a,b,5)))
    {
        printf("Test ft_strncmp() NOT passed:    21/58\n");
        return;
    }
    if(strncmp(c,d,5) != ft_strncmp(c,d,5))
    {
        printf("Test ft_strncmp() NOT passed:    21/58\n");
        return;
    }

    printf("Test ft_strncmp() passed:    21/58\n");
}

void test_ft_isalpha()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if (!(isalpha(a) && ft_isalpha(a)))
    {
        printf("Test ft_isalpha() case 1 NOT passed:    22/58\n");
        return;
    }

    if (isalpha(b) && ft_isalpha(b))
    {
        printf("Test ft_isalpha() case 2 NOT passed:    22/58\n");
        return;
    }

    if (isalpha(c) && ft_isalpha(c))
    {
        printf("Test ft_isalpha() case 3 NOT passed:    22/58\n");
        return;
    }

    printf("Test ft_islpha() passed:    22/58\n");


}

void test_ft_isdigit()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if ((isdigit(a) && ft_isdigit(a)))
    {
        printf("Test ft_isdigit() case1 passed:    23/58\n");
         return;
    }
    if ((isdigit(b) && ft_isdigit(b)) == 0)
    {
        printf("Test ft_isdigit() case2 passed:    23/58\n");
         return;
    }
    if ((isdigit(c) && ft_isdigit(c)) != 0)
    {
        printf("Test ft_isdigit() case3 passed:    23/58\n");
         return;
    }

    printf("Test ft_isdigit() passed:    23/58\n");

}

void test_ft_isalnum()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if (!(isalnum(a) && ft_isalnum(a)))
    {
        printf("Test ft_isalnum() case 1 NOT passed:    24/58\n");
        return;
    }
    if (!(isalnum(b) && ft_isalnum(b)))
    {
        printf("Test ft_isalnum() case 2 NOT passed:    24/58\n");
        return;
    }
    if  (isalnum(c) && ft_isalnum(c))
    {
        printf("Test ft_isalnum() case 3 NOT passed:    24/58\n");
        return;
    }
    printf("Test ft_isalnum()  passed:    24/58\n");

}

void test_ft_isascii()
{
    char a = 'a';
    char b = '1';
    char c = '\t';
    int d = 12321;

    if (!(isascii(a) && ft_isascii(a)))
    {
        printf("Test ft_isascii() case 1 NOT passed:    25/58\n");
        return;
    }
    if (!(isascii(b) && ft_isascii(b)))
    {
        printf("Test ft_isascii() case 2 NOT passed:    25/58\n");
        return;
    }
    if (!(isascii(c) && ft_isascii(c)))
    {
        printf("Test ft_isascii() case 3 NOT passed:    25/58\n");
        return;
    }
    if (isascii(d) && ft_isascii(d))
    {
        printf("Test ft_isascii() case 4 NOT passed:    25/58\n");
        return;
    }
    printf("Test ft_isascii() passed:    25/58\n");

}

void test_ft_isprint()
{
    char a = 'a';
    char b = '1';
    char c = '\n';

    if (!(isprint(a) && ft_isprint(a)))
    {
        printf("Test ft_isprint() case 1 NOT passed:    26/58\n");
        return;
    }
    if (!(isprint(b) && ft_isprint(b)))
    {
        printf("Test ft_isprint() case 1 NOT passed:    26/58\n");
        return;
    }
    if (isprint(c) && ft_isprint(c))
    {
        printf("Test ft_isprint() case 1 NOT passed:    26/58\n");
        return;
    }
    printf("Test ft_isprint() passed:    26/58\n");

}

void test_ft_toupper()
{
    char a = 'a';
    char b = 'B';
    if (toupper(a) != ft_toupper(a))
    {
        printf("Test ft_toupper() NOT passed:    27/58\n");
        return;
    }
    if (toupper(b) != ft_toupper(b))
    {
        printf("Test ft_toupper() NOT passed:    27/58\n");
        return;
    }

    printf("Test ft_toupper() passed:    27/58\n");

}

void test_ft_tolower()
{
    char a = 'A';
    char b = 'b';
    if (tolower(a) != ft_tolower(a))
    {
        printf("Test ft_tolower() case 1 NOT passed:    28/58\n");
        return;
    }
    if (tolower(b) != ft_tolower(b))
    {
        printf("Test ft_tolower() case 2 NOT passed:    28/58\n");
        return;
    }

    printf("Test ft_tolower() passed:    28/58\n");

}

void test_ft_memalloc()
{
    char * a = ft_memalloc(10);
    if (!a)
    {
        printf("Test ft_memalloc() NOT passed:    29/58\n");
        return;
    }
    printf("Test ft_memalloc() passed:    29/58\n");

    free(a);
}

void test_ft_memdel()
{
    char * a = malloc(123);
    ft_memdel((void**)&a);
    if (a){
        printf("Test ft_memdel() NOT passed:    30/58\n");
    }
    printf("Test ft_memdel() passed:    30/58\n");
}

void test_ft_strnew()
{
    size_t len  = 100;
    char * a = ft_strnew(len);

    if(a)
    {
        for(int i = 0; i < 100;i++){
            if (a[i]!=0){
                 printf("Test ft_strnew() NOT passed:    31/58\n");
                 free(a);
            }
        }

    }

    printf("Test ft_strnew() passed:    31/58\n");
    free(a);
}

void test_ft_strdel()
{
    char * a = ft_strnew(100);
    char * b = NULL;
    char * testString = "jisdhfiabisnfadsbfiadsn";
    char *c = strdup(testString);
    ft_strdel(&a);
    ft_strdel(&b);
    ft_strdel(&c);
    if (a ) {
        printf("Test ft_strdel() case 1 NOT passed:    32/58\n");
    }
    if (b ) {
        printf("Test ft_strdel() case 2 NOT passed:    32/58\n");
    }
    if ( c) {
        printf("Test ft_strdel() case 3 NOT passed:    32/58\n");
    }
    printf("Test ft_strdel() passed:    32/58\n");
}

void test_ft_strclr()
{
    char * constString = "jisdhfiabisnfadsbfiadsn";
    char * stringToBeNulled = strdup(constString);
    ft_strclr(stringToBeNulled);
    int len = strlen(stringToBeNulled);
    for (int i = 0; i <len; ++i)
    {
        if(stringToBeNulled[i]!='\0')
        {
            printf("Test ft_strclr() NOT passed:    33/58\n");
            free(stringToBeNulled);
            return;
        }
    }
    printf("Test ft_strclr() passed:    33/58\n");
}

void test_iter_toupper(char * b)
{
    for (size_t i = 0; i <= strlen(b); i++)
    {
        b[i] = toupper(b[i]);
    }
}

void test_ft_striter()
{
    char * testConstString = "const";
    char * testOutputString = "CONST";
    char * b = strdup(testConstString);
    ft_striter(b, test_iter_toupper);
    int result = strcmp(b,testOutputString);
    if (result)
    {
        printf("Test ft_striter() NOT passed:    34/58\n");
        free(b);
        return;
    }
    free(b);
    printf("Test ft_striter()  passed:    34/58\n");

}

void test_iteri_toupper(unsigned int i, char * b)
{
    for (i = 0; i <= strlen(b); i++)
    {
        b[i] = toupper(b[i]);
    }
}

void test_ft_striteri()
{
    char * testConstString = "const";
    char * testOutputString = "CONST";
    char * b = strdup(testConstString);
    ft_striteri(b, test_iteri_toupper);
    int result = strcmp(b,testOutputString);
    if (result)
    {
        printf("Test ft_striteri() NOT passed:    35/58\n");
        free(b);
        return;
    }
    free(b);
    printf("Test ft_striteri()  passed:    35/58\n");

}

char test_map_upper(char c ){
    return toupper(c);
}

void test_ft_strmap()
{
    char * input = "string";
    char * output = "STRING";
    char * b = ft_strmap(input, test_map_upper);
    if (strcmp(b,output)){
        printf("Test ft_strmap() NOT passed:    36/58\n");
        free(b);
        return;
    }

    printf("Test ft_strmap() passed:    36/58\n");
    free(b);
}

char test_to_upper_odd(unsigned int index, char a)
{
    return isupper(a) && index%2!=0 ? toupper(a) : a;
}

void test_ft_strmapi()
{
    char * input = "const";
    char* expectedOutput = "CoNsT";
    char * b = ft_strmapi(input, test_to_upper_odd);
    if (strcmp(b,expectedOutput))
    {
        free(b);
        printf("Test ft_strmapi() NOT passed:    37/58\n");
        return;
    }
    free(b);
    printf("Test ft_strmapi() NOT passed:    37/58\n");

}

void test_ft_strequ()
{
    char a[] = "fdshf2432423";
    char b[] = "fdshf2432423";
    char c[] = "fdshf";

    if  (!ft_strequ(a,c))
    {
        printf("Test ft_strequ() case 1 NOT passed:    38/58\n");
         return;
    }
    if (ft_strequ(a,b))
    {
        printf("Test ft_strequ() case 2 NOT passed:    38/58\n");
        return;
    }

    printf("Test ft_strequ()  passed:    38/58\n");

}

void test_ft_strnequ()
{
    char a[] = "fdshf2432423";
    char b[] = "fdshf2432423";
    char c[] = "fdshf";

    if  (ft_strnequ(a,c,13))
    {
        printf("Test ft_strnequ() case 1 NOT passed:    39/58\n");
         return;
    }
    if (!ft_strnequ(a,b,6))
    {
        printf("Test ft_strnequ() case 2 NOT passed:    39/58\n");
        return;
    }

    printf("Test ft_strequ()  passed:    38/58\n");
}

void test_ft_strsub()
{
    char * a = "123456789";
    char * b = ft_strsub(a, 1, 9);
    if (strcmp(b, "23456789"))
    {
        printf("Test ft_strsub() NOT passed:    40/58\n");
        free(b);
        return;
    }

    printf("Test ft_strmsub()  passed:    40/58\n");

}

void test_ft_strjoin()
{
    char * a = "jfdsfsd1";
    char * b = "1jsfsdffsdfs";
    char * expected = "jfdsfsd11jsfsdffsdfs";
    char * ab = ft_strjoin (a,b);
    if (strcmp(expected,ab)){
        printf("Test ft_strjoin() NOT passed:    41/58\n");
        free(ab);
        return;
    }
    free(ab);
    printf("Test ft_strjoin() passed:    41/58\n");

}

void test_ft_strtrim()
{
    char * input = " 123123123 ";
    char * expected = "123123123";
    char * a = ft_strtrim(input);
    if (strcmp(a,expected))
    {
        printf("Test ft_strtrim() NOT passed:    42/58\n");
        free(a);
        return;
    }
    free(a);
    printf("Test ft_strtrim()  passed:    42/58\n");
}

void freeSplitted(char**splitted){
    for (int i = 0; splitted[i]; i++){
        free(splitted[i]);
    }
    free(splitted);
}

void test_ft_strsplit()
{

    char * a = "***first**second*third*****";
    char **splited = ft_strsplit(a, '*');
    const char*expected[] = {"first","second","third"};

    for(int i = 0; splited[i];i++){
        if (strcmp(splited[i], expected[i])){
            printf("Test ft_strsplit() on word[%d] = %s  NOT passed:    43/58\n",i,expected[i]);
            freeSplitted(splited);
            return;
        }
    }

    freeSplitted(splited);
    printf("Test ft_strsplit()  passed:    43/58\n");
}

void test_ft_itoa()
{
    int a = -85839;
    char *expected = "-85839";
    char * output = ft_itoa(a);
    if (strcmp(expected,ft_itoa(a)))
    {
        printf("Test ft_itoa() NOT passed:    44/58\n");
        free(output);
        return;
    }

    printf("Test ft_itoa() passed:    44/58\n");

}

void test_ft_putchar()
{
    char *testString ="Test ft_putchar() passed:    45/58\n";
    int len = strlen(testString);
    for (int i = 0; i < len; ++i){
        ft_putchar(testString[i]);
    }
}

void test_ft_putstr()
{
    char *testString ="Test ft_putstr() passed:    46/58\n";
    ft_putstr(testString);
}

void test_ft_putendl()
{
    char *testString ="Test ft_putendl() passed:    47/58";
    ft_putendl(testString);
}

void test_ft_putnbr()
{
    char *testString ="Test ft_putnbr() passed:    ";

    int currentTestNumber = 48;
    int testLen = 58;
    ft_putstr(testString);
    ft_putnbr(currentTestNumber);
    ft_putchar('/');
    ft_putnbr(testLen);
    ft_putchar('\n');

}

void test_ft_putchar_fd()
{
    char *testString ="Test ft_putchar_fd() passed:    45/58\n";
    int len = strlen(testString);
    for (int i = 0; i < len; ++i){
        ft_putchar_fd(testString[i],1);
    }
}

void test_ft_putstr_fd()
{
    char *testString ="Test ft_putstr_fd() passed:    46/58\n";
    ft_putstr_fd(testString,1);
}

void test_ft_putendl_fd()
{
    char *testString ="Test ft_putendl_fd() passed:    51/58";
    ft_putendl_fd(testString,1);
}

void test_ft_putnbr_fd()
{
    char *testString ="Test ft_putnbr_fd() passed:    ";
    int currentTestNumber = 52;
    int testLen = 58;
    ft_putstr(testString);
    ft_putnbr_fd(currentTestNumber,1);
    ft_putchar('/');
    ft_putnbr(testLen);
    ft_putchar('\n');
}

void test_ft_lstnew()
{
    char * content = "content";
	size_t contentSize = (strlen(content)+1);
	t_list * new = ft_lstnew(content, contentSize);

    if(memcmp(content,new->content,contentSize) && new->content_size == contentSize){
        printf("Test ft_lstnew() passed:    53/58\n");
        free(new->content);
        free(new);
        return;
    }

    printf("Test ft_lstnew() NOT passed:    53/58\n");
}

void del (void * content, size_t size)
{
    memset(content,0,size);
	free(content);
}

void test_ft_lstdelone()
{
    char * content = "content";
	size_t contentSize = (strlen(content)+1);
	t_list * new = ft_lstnew(content, contentSize);

	ft_lstdelone(&new, del);
    if (new){
         printf("Test ft_lstdelone() NOT passed:    54/58\n");
         return;
    }
    printf("Test ft_lstdelone() passed:    54/58\n");

}
int lstLen(t_list*head){
    if(!head){
        return 0;
    }
    int i = 0;
    while(head){
        i++;
        head = head->next;
    }
    return i;
}
void test_ft_lstdel()
{
    char * headContent = "content";
	size_t headContentSize = (strlen(headContent)+1);
    char * newHeadContent = "newHeadContent";
	size_t newHeadContentSize = (strlen(newHeadContent)+1);
    char * newHeadContent2 = "newHeadContent 2";
	size_t newHeadContentSize2 = (strlen(newHeadContent2)+1);

    t_list*head = ft_lstnew(headContent, headContentSize);
    t_list*newHead = ft_lstnew(newHeadContent, newHeadContentSize);
    ft_lstadd(&head, newHead);
    t_list*newHead2 = ft_lstnew(newHeadContent2, newHeadContentSize2);
    ft_lstadd(&newHead, newHead2);
    int curentLen = lstLen(newHead2);
    if (!curentLen){
         printf("Test ft_lstdel() NOT passed:    55/58\n");
         return;
    }
    // printf("head = %p\nnewHead = %p\nnewHead2 = %p\n",head,newHead,newHead2);
    ft_lstdel(&newHead2,del);
    int listLengthAfterDel = lstLen(newHead2);
    if (listLengthAfterDel){
         printf("Test ft_lstdel() NOT passed:    55/58\n");
         return;
    }
    printf("Test ft_lstdel() passed:    55/58\n");

}

void test_ft_lstadd()
{

    char * headContent = "content";
	size_t headContentSize = (strlen(headContent)+1);
    char * newHeadContent = "newHeadContent";
	size_t newHeadContentSize = (strlen(newHeadContent)+1);
    char * newHeadContent2 = "newHeadContent 2";
	size_t newHeadContentSize2 = (strlen(newHeadContent2)+1);

    t_list*head = ft_lstnew(headContent, headContentSize);
    t_list*newHead = ft_lstnew(newHeadContent, newHeadContentSize);
    ft_lstadd(&head, newHead);
    t_list*newHead2 = ft_lstnew(newHeadContent2, newHeadContentSize2);
    ft_lstadd(&newHead, newHead2);
    int curentLen = lstLen(newHead2);
    if (curentLen != 3){
         printf("Test ft_lstdel() NOT passed:    55/58\n");
         ft_lstdel(&newHead2,del);
         return;
    }
    ft_lstdel(&newHead2,del);
    printf("Test ft_lstadd() passed:    56/58\n");

}

const char * valueForTest = "value";
void testLstIterFunc(t_list*elem){

    free(elem->content);
    elem->content_size = strlen(valueForTest);
    elem->content = malloc(elem->content_size);
    memcpy(elem->content,valueForTest,elem->content_size);
}
void test_ft_lstiter()
{
    char * headContent = "content";
    size_t headContentLen = strlen(headContent)+1;


    char * newHeadContent = "newHeadContent";
    size_t newheadContentLen = strlen(newHeadContent)+1;


    char * newHeadContent2 = "newHeadContent 2";
    size_t newHeadContentLen2 = strlen(newHeadContent2)+1;

    t_list*head = ft_lstnew(headContent, headContentLen);
    t_list*newHead = ft_lstnew(newHeadContent, newheadContentLen);
    ft_lstadd(&head, newHead);
    t_list*newHead2 = ft_lstnew(newHeadContent2, newHeadContentLen2);
    ft_lstadd(&newHead, newHead2);

    ft_lstiter(newHead2,testLstIterFunc);
    t_list*iter = newHead2;
    const size_t newConentSize =  strlen(valueForTest);
    while(iter){
        if (iter->content_size !=newConentSize || memcmp(iter->content,valueForTest,newConentSize)){

            printf("Test ft_lstiter() NOT passed:    57/58\n");
            ft_lstdel(&newHead2,del);
            return;
        }
        iter=iter->next;
    }
    ft_lstdel(&newHead2,del);
    printf("Test ft_lstiter() passed:    57/58\n");
}

t_list* testLstMapFunc(t_list*elem){
    char * newContent = ft_strjoin(valueForTest,elem->content);
    size_t newContentLen = strlen(newContent);
    return ft_lstnew(newContent, newContentLen);
}
void test_ft_lstmap()
{
 char * headContent = "content";
    size_t headContentLen = strlen(headContent)+1;


    char * newHeadContent = "newHeadContent";
    size_t newheadContentLen = strlen(newHeadContent)+1;


    char * newHeadContent2 = "newHeadContent 2";
    size_t newHeadContentLen2 = strlen(newHeadContent2)+1;

    t_list*head = ft_lstnew(headContent, headContentLen);
    t_list*newHead = ft_lstnew(newHeadContent, newheadContentLen);
    ft_lstadd(&head, newHead);
    t_list*newHead2 = ft_lstnew(newHeadContent2, newHeadContentLen2);
    ft_lstadd(&newHead, newHead2);

    ft_lstiter(newHead2,testLstIterFunc);

    t_list*newListFromMap =ft_lstmap(newHead2, testLstMapFunc);
    t_list*iter = newHead2;
    t_list*mapIter = newListFromMap;
    char * test= NULL;
    size_t len = 0;
    int cmpResult = 0;
    while(iter) {
        test = ft_strjoin(valueForTest,iter->content);
        len = strlen(test);
        cmpResult = memcmp(test,mapIter->content,len);
        if (!mapIter ){
            printf("Test ft_lstmap() NOT passed:    58/58\n");
            ft_lstdel(&newHead2,del);
            ft_lstdel(&newListFromMap,del);
            return;
        }
        if(cmpResult || mapIter->content_size != len){
            printf("Test ft_lstmap() NOT passed:    58/58\n");
            ft_lstdel(&newHead2,del);
            ft_lstdel(&newListFromMap,del);
            return;
        }
        mapIter=mapIter->next;
        iter=iter->next;
    }
    ft_lstdel(&newHead2,del);
    ft_lstdel(&newListFromMap,del);
    printf("Test ft_lstmap() passed:    58/58\n");
}

int main ()
{
    printf("Testing lib for errors!\n");
    printf("Library to ft_ functions test:\n");
    /*test1*/test_ft_strlen();
    /*test2*/test_ft_bzero();
    /*test3*/test_ft_atoi();
    /*test4*/test_ft_memset();
    /*test5*/test_ft_memccpy();
    /*test6*/test_ft_memmove();
    /*test7*/test_ft_memchr();
    test_ft_memcmp();
    test_ft_memcpy();
    test_ft_strdup();
    test_ft_strcpy();
    test_ft_strncpy();
    test_ft_strcat();
    test_ft_strncat();
    test_ft_strlcat();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strstr();
    test_ft_strnstr();
    test_ft_strcmp();
    test_ft_strncmp();
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    printf("Custom ft_ functions test:\n");
    test_ft_memalloc();
    test_ft_memdel();
    test_ft_strnew();
    test_ft_strdel();
    test_ft_strclr();
    test_ft_striter();
    test_ft_striteri();
    test_ft_strmap();
    test_ft_strmapi();
    test_ft_strequ();
    test_ft_strnequ();
    test_ft_strsub();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_strsplit();
    test_ft_itoa();
    test_ft_putchar();
    test_ft_putstr();
    test_ft_putendl();
    test_ft_putnbr();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();
    test_ft_lstnew();
    test_ft_lstdelone();
    test_ft_lstdel();
    test_ft_lstadd();
    test_ft_lstiter();
    test_ft_lstmap();

    printf("Tests has been finished.\n");

    return 0;
}

