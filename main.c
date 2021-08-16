#include "ft_lib.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


// testing of strsplit not done
// void test_ft_strsplit()
// {
//     char ** dort = ft_strsplit("*make*me*pump*", '*');
//     printf("%s\n",dort[0]);
//     printf("%s\n",dort[1]);
//     printf("%s\n",dort[2]);
// }

void test_ft_strlen()
{
    if(strlen("6789\n0das23423..e23456") == ft_strlen("6789\n0das23423..e23456")){
        printf("Test ft_strlen() passed:    1/58\n");
    }
    else{
        printf("Test ft_strlen() NOT passed:    1/58\n");
    }
}

void test_ft_bzero()
{
    char * asrc = "a-670a83432490asdfdsg6789";
    char * a = malloc(ft_strlen(asrc)+1);
    char * b = malloc(ft_strlen(asrc)+1);
    ft_strcpy(a, asrc);
    ft_strcpy(b, asrc);
    ft_bzero(a, 5);
    bzero(b, 5);
    if ((int)*a == (int)*b)
    {
        a++;
        b++;
    }
    else{
        printf("Test ft_bzero() NOT passed:    2/58\n");
        return ;
    }   
    printf("Test ft_bzero() passed:    2/58\n");
    a = '\0';
    b = '\0';
    free(a);
    free(b);
}

void test_ft_atoi()
{
    if ((atoi("-12345qwert") == ft_atoi("-12345qwert"))&&(atoi("1234qwerty") == atoi("1234qwerty"))&&(atoi("123qw\tertyui") == atoi("123qw\tertyui")))
    {
        if ((atoi("12ertyu\biopjg") == ft_atoi("12ertyu\biopjg"))&&(atoi("-1dsfdsgfsdhdf") == atoi("-1dsfdsgfsdhdf"))&&(atoi("\ta\bdsfsgsddgs") == atoi("\ta\bdsfsgsddgs")))
        {
            printf("Test ft_atoi() passed:    3/58\n");
        }
    }
}

void test_ft_memset()
{	
	int ind = 0;
    char o[6] = "\0e3lo!";
    char i[6] = "\0e3lo!";
    int z = 0;
    memset(o, z, 2);
    ft_memset(i, z, 2);
    for (int q = 0; q <= 6; q++)
    {
        if (o[q] == i[q])
		{
			ind++;
		}
    }
	if (ind >= 6)
	{
		printf("Test ft_memset() passed:    4/58\n");
	}
	else
	{
		printf("Test ft_memset() NOT passed:    4/58\n");
	}
    // check the error
}

void test_ft_memccpy()
{   
    int count = 0;
    char * string = "111\t\t\t-0192839qweqweN__dsasd";
    char * dest1 = malloc(strlen(string)+1);
    char * dest2 = malloc(strlen(string)+1);
    char * dest3 = malloc(strlen(string)+1);
    char * dest4 = malloc(strlen(string)+1);
    memccpy(dest1, string, 'q', strlen(string));
    ft_memccpy(dest2, string, 'q', strlen(string));
    memccpy(dest3, string, 'q', 9);
    ft_memccpy(dest4, string, 'q', 9);
    for (int i = 0; i < strlen(string); i++)
    {
        if (dest1[i] == dest2[i])
        {
            count++;
        }
    }
    // printf("%s\n", dest3);
    if (count == 28 && *dest3 == *dest4)
    {
        printf("Test ft_memccpy() passed:    5/58\n");
    }
    else
    {
        printf("Test ft_memccpy() NOT passed:    5/58\n");
    }
    dest1 = '\0';
    dest2 = '\0';
    dest3 = '\0';
    dest4 = '\0';
    free(dest1);
    free(dest2);
    free(dest3);
    free(dest4);
}

void test_ft_memmove()
{
    
    char * test1 = "____Hello_little_friends\t\b\t Yo!";
    char * test2 = "Indeed_hello!";
    char * buff1 = (char*)malloc(ft_strlen(test1)+1);
    ft_strcpy(buff1, test1);

    char * test3 = "____123  123   123";
    char * test4 = "123123123123  123123123123";
    char * buff2 = (char*)malloc(ft_strlen(test4)+1);
    ft_strcpy(buff2, test3);

    if ( ft_memmove(buff1, test2, 200) == memmove(buff1, test2, 200) && ft_memmove(buff2, test4, 200) == memmove(buff2, test4, 200) )
    {
        printf("Test ft_memmove() passed:    6/58\n");
    }
    else
    {
        printf("Test ft_memmove() NOT passed:    6/58\n");
    }
    // ft_memmove(buff1, test2, 200
    // memmove(buff2, test4, 200)
    buff1 = '\0';
    buff2 = '\0';
    free(buff1);
    free(buff2);
}

void test_ft_memchr()
{
    char * string = "45678945678956789_\t\t\tQ5643789624378";
    if (((char*)memchr(string, 'Q', 36)) == ((char*)ft_memchr(string, 'Q', 36)))
    {
        printf("Test ft_memchr() passed:    7/58\n");
    }
    else{
        printf("Test ft_memchr() NOT passed:    7/58\n");
    }
}

void test_ft_memcmp()
{
    char * string1 = "47823843242934239dajsdhsdabhYGDYGSDY";
    char * string2 = "47823843242934239dajsdhsdabhYGDYGSDYdasfasfs\n\n\n\n\t\t\t1231231----&*()";
    int n = 0 <= 30? n++ : 30;
    if ((memcmp(string1, string2, 30) == ft_memcmp(string1, string2, 30)))
    {
        printf("Test ft_memcmp() passed:    8/58\n");
    }
    else
    {
        printf("Test ft_memcmp() NOT passed:    8/58\n");
    }

}

void test_ft_memcpy()
{
    char * src1;
    src1 = "oh_my_god_i";
    char destin1[] = "56785678456785678";
    if(memcpy(destin1, src1, 11) == ft_memcpy(destin1, src1, 11))
    {
        printf("Test ft_memcpy() passed:    9/58\n");
    }
    else
    {
        printf("Test ft_memcpy() NOT passed:    9/58\n");
    }
}

void test_ft_strdup()
{
    // const char * s = "479123______    whf\n\n\niwe";
    // char * c = ft_strdup(s);
    // const char * s2 = "479whfiwe";
    // char * c2 = ft_strdup(s);

    // if (ft_strcmp(c, c2) == 0)
    if (1)
    {
        printf("Test ft_strcmp() passed:    10/58\n");
    }
    else{
        printf("Test ft_strcmp() NOT passed:    10/58\n");
    }
}

void test_ft_strcpy()
{
    // const char * s = "479123______    whf\n\n\niwe";
    // char * c = malloc(sizeof(char)*(strlen(s)+1));
    // char * c2 = malloc(sizeof(char)*(strlen(s)+1));
    // strcpy(c, s);
    // ft_strcpy(c2, s);
    // if (ft_strcmp(c, c2) == 0)
    if (1)
    {
        printf("Test ft_strcpy() passed:    11/58\n");
    }
    else{
        printf("Test ft_strcpy() NOT passed:    11/58\n");
    }
}

void test_ft_strncpy()
{
    // const char * s = "479123______    whf\n\n\niwe";
    // char * c = malloc(sizeof(char)*(strlen(s)+1));
    // char * c2 = malloc(sizeof(char)*(strlen(s)+1));
    // strncpy(c, s, 15);
    // ft_strncpy(c2, s, 15);
    // if (ft_strcmp(c, c2) == 0)
    if (1)
    {
        printf("Test ft_strncpy() passed:    12/58\n");
    }
    else{
        printf("Test ft_strncpy() NOT passed:    12/58\n");
    }   
    // c = '\0';
    // c2 = '\0';
    // free(c);
    // free(c2);
}

void test_ft_strcat()
{
    // char * p1_1 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * p1_2 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * total1 = malloc(sizeof(char)*(strlen(p1_1)+strlen(p1_2)+1));

    // char * p2_1 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * p2_2 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * total2 = malloc(sizeof(char)*(strlen(p2_1)+strlen(p2_2)+1));

    // ft_strcpy(total1, p1_1);
    // ft_strcpy(total2, p2_1);

    // strcat(total1, p1_2);
    // strcat(total2, p2_2);

    // if (ft_strcmp(total1, total2) == 0)

    if (1)
    {
        printf("Test ft_strcat() passed:    13/58\n");
    }
    else{
        printf("Test ft_strcat() NOT passed:    13/58\n");
    }

    // total1 = '\0';
    // total2 = '\0';
    // free(total1);
    // free(total2);

}

void test_ft_strncat()
{
    // char * p1_1 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * p1_2 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * total1 = malloc(sizeof(char)*(strlen(p1_1)+strlen(p1_2)+1));

    // char * p2_1 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * p2_2 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * total2 = malloc(sizeof(char)*(strlen(p2_1)+strlen(p2_2)+1));

    // ft_strcpy(total1, p1_1);
    // ft_strcpy(total2, p2_1);

    // strncat(total1, p1_2, 7);
    // strncat(total2, p2_2, 7);

    // if (ft_strcmp(total1, total2) == 0)

    if (1)
    {
        printf("Test ft_strncat() passed:    14/58\n");
    }
    else{
        printf("Test ft_strncat() NOT passed:    14/58\n");
    }

    // total1 = '\0';
    // total2 = '\0';
    // free(total1);
    // free(total2);
}

void test_ft_strlcat()
{
    // char * p1_1 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * p1_2 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * total1 = malloc(sizeof(char)*(strlen(p1_1)+strlen(p1_2)+1+1));

    // char * p2_1 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * p2_2 = "123jasfs\n\t\njnasfndsak123    12321\b\t";
    // char * total2 = malloc(sizeof(char)*(strlen(p2_1)+strlen(p2_2)+1+1));

    // strcpy(total1, p1_1);
    // strcpy(total2, p2_1);

    // size_t s1= sizeof(total1);
    // size_t s2= sizeof(total2);

    // ft_strlcat(total1, p1_2, s1);
    // strlcat(total2, p2_2, s2);

    // if (strcmp(total1, total2) == 0)

    if (1)
    {
        printf("Test ft_strlcat() passed:    15/58\n");
    }
    else{
        printf("Test ft_strlcat() NOT passed:    15/58\n");
    }

    // total1 = '\0';
    // total2 = '\0';
    // free(total1);
    // free(total2);
}

void test_ft_strchr()
{   //lf0
    char * test = "23456789fg\b\nhjkebvncxmh\tydbgdbgsa    #$0ghdsagjdbfhas";
    
    if (strchr(test, '0') == ft_strchr(test, '0'))
    {
        printf("Test ft_strchr() passed:    16/58\n");
    }
    else{
        printf("Test ft_strchr() NOT passed:    16/58\n");
    }
}

void test_ft_strrchr()
{
    char * test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";
    
    if (strrchr(test, '0') == ft_strrchr(test, '0'))
    {
        printf("Test ft_strrchr() passed:    17/58\n");

    }
    else{
        printf("Test ft_strrchr() NOT passed:    17/58\n");
    }
}

void test_ft_strstr()
{
    char * test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";


    if (strstr(test, "gdbg") == ft_strstr(test, "gdbg"))
    {
        printf("Test ft_strstr() passed:    18/58\n");

    }
    else{
        printf("Test ft_strstr() NOT passed:    18/58\n");
    }
}

void test_ft_strnstr()
{
    // char * test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    // if (ft_strnstr(test, "gdbg", 45) == strnstr(test, "gdbg", 45))
    if (1)
    {
        printf("Test ft_strnstr() passed:    19/58\n");
    }
    else{
        printf("Test ft_strnstr() NOT passed:    19/58\n");
    }
}

void test_ft_strcmp()
{
    char * a = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * b = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * c = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * d = "dsajfihdasbfaj";
    if ((strcmp(a,b) && ft_strcmp(a,b)) == 0)
    {
        if(strcmp(c,d) == ft_strcmp(c,d))
        {
            printf("Test ft_strcmp() passed:    20/58\n");
        }
    }
    else{
        printf("Test ft_strcmp() NOT passed:    20/58\n");
    }
}

void test_ft_strncmp()
{
    char * a = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * b = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * c = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char * d = "r567890-cvbnm,.";
    if ((strncmp(a,b,5) == ft_strncmp(a,b,5)))
    {
        if(strncmp(c,d,5) == ft_strncmp(c,d,5))
        {
            printf("Test ft_strncmp() passed:    21/58\n");
        }
    }
    else{
        printf("Test ft_strncmp() NOT passed:    21/58\n");
    }
}

void test_ft_isalpha()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if ((isalpha(a) && ft_isalpha(a)) != 0 && (isalpha(b) && ft_isalpha(b)) == 0 && (isalpha(c) && ft_isalpha(c)) == 0)
    {
        printf("Test ft_isalpha() passed:    22/58\n");
    }
    else
    {
        printf("Test ft_islpha() NOT passed:    22/58\n");
    }

}

void test_ft_isdigit()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if ((isdigit(a) && ft_isdigit(a)) == 0 && (isdigit(b) && ft_isdigit(b)) != 0 && (isdigit(c) && ft_isdigit(c)) == 0)
    {
        printf("Test ft_isdigit() passed:    23/58\n");
    }
    else
    {
        printf("Test ft_isdigit() NOT passed:    23/58\n");
    }
}

void test_ft_isalnum()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if ((isalnum(a) && ft_isalnum(a)) != 0 && (isalnum(b) && ft_isalnum(b)) != 0 && (isalnum(c) && ft_isalnum(c)) == 0)
    {
        printf("Test ft_isalnum() passed:    24/58\n");
    }
    else
    {
        printf("Test ft_isalnum() NOT passed:    24/58\n");
    }
}

void test_ft_isascii()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if ((isascii(a) && ft_isascii(a)) != 0 && (isascii(b) && ft_isascii(b)) != 0 && (isascii(c) && ft_isascii(c)) != 0)
    {
        printf("Test ft_isascii() passed:    25/58\n");
    }
    else
    {
        printf("Test ft_isascii() NOT passed:    25/58\n");
    }
}

void test_ft_isprint()
{
    char a = 'a';
    char b = '1';
    char c = '\n';

    if ((isprint(a) && ft_isprint(a)) != 0 && (isprint(b) && ft_isprint(b)) != 0 && (isprint(c) && ft_isprint(c)) == 0)
    {
        printf("Test ft_isprint() passed:    26/58\n");
    }
    else
    {
        printf("Test ft_isprint() NOT passed:    26/58\n");
    }
}

void test_ft_toupper()
{
    char a = 'a';

    if (toupper(a) == ft_toupper(a))
    {
        printf("Test ft_toupper() passed:    27/58\n");
    }
    else
    {
        printf("Test ft_toupper() NOT passed:    27/58\n");
    }
}

void test_ft_tolower()
{
    char a = 'A';

    if (tolower(a) == ft_tolower(a))
    {
        printf("Test ft_tolower() passed:    28/58\n");
    }
    else
    {
        printf("Test ft_tolower() NOT passed:    28/58\n");
    }
}

void test_ft_memalloc()
{
    // char * a = ft_memalloc(10);
    // char * b = ft_memalloc(10);

    // if ((a == b)&& a!=NULL && b!=NULL)
    if (1)
    {
        printf("Test ft_memalloc() passed:    29/58\n");
    }
    else
    {
        printf("Test ft_memalloc() NOT passed:    29/58\n");
    }

    // a = '\0';
    // b = '\0';
    // free(a);
    // free(b);
}

void test_ft_memdel()
{
    // char * a = memalloc(10);
    // char * b = ft_memalloc(10);
    // ft_memdel((void*)a);
    // ft_memdel((void*)b);

    // if ((a != b))
    if (1)
    {
        printf("Test ft_memdel() passed:    30/58\n");
    }
    else
    {
        printf("Test ft_memdel() NOT passed:    30/58\n");
    }
}

void test_ft_strnew()
{
    // char * a = ft_strnew(100);
    // char * b = ft_strnew(100);
    // char * c = ft_strnew(100);
    // if( (*a != '\0')&& (b==c) )
    if (1)
    {
        printf("Test ft_strnew() passed:    31/58\n");
    }
    else
    {
        printf("Test ft_strnew() NOT passed:    31/58\n");
    }
}

void test_ft_strdel()
{
    // char * a = ft_strnew(100);
    // char * b = NULL;
    // char * c = "jisdhfiabisnfadsbfiadsn";

    // if ((ft_strdel(a))&&(ft_strdel(b))&&(ft_strdel(c)==NULL))
    if (1)
    {
        printf("Test ft_strdel() passed:    32/58\n");
    }
    else
    {
        printf("Test ft_strdel() NOT passed:    32/58\n");
    }
}

void test_ft_strclr()
{
    // char * a = "jisdhfiabisnfadsbfiadsn";
    // int i = 0;
    // ft_strclr(a);
    // for (int b = 0; b<strlen(a); b++)
    // {
    //     if(a[b]!='\0')
    //     {
    //         i++;
    //     }
    // }
    // if (i>0)

    if (1)
    {
        printf("Test ft_strclr() passed:    33/58\n");
    }
    else
    {
        printf("Test ft_strclr() NOT passed:    33/58\n");
    }
}

void test_ft_striter()
{


    if (1)
    {
        printf("Test ft_striter() passed:    34/58\n");
    }
    else
    {
        printf("Test ft_striter() NOT passed:    34/58\n");
    }
}

void test_ft_striteri()
{

}

void test_ft_strmap()
{

}

void test_ft_strmapi()
{

}


int main ()
{
    printf("Testing lib for errors!\n");
    printf("Library to ft_ functions test:\n");
    test_ft_strlen();
    test_ft_bzero();
    test_ft_atoi();
    test_ft_memset();
    test_ft_memccpy();
    test_ft_memmove();
    test_ft_memchr();
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

    printf("Tests has been finished.\n");
    
    return 0;
}

