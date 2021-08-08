#include "ft_lib.h"

// void test_ft_strsplit()
// {
//     char ** dort = ft_strsplit("*make*me*pump*", '*');
//     printf("%s\n",dort[0]);
//     printf("%s\n",dort[1]);
//     printf("%s\n",dort[2]);
// }

void test_ft_strlen(void)
{
    char * i = "6789\n0das23423..e23456";
    if(strlen(i) == ft_strlen(i)){
        printf("Test ft_strlen() passed:    1/58\n");
    }
    else{
        printf("Test ft_strlen() NOT passed:    1/58\n");
    }
}

void test_ft_bzero(void)
{
    char * asrc = "a-670a83432490asdfdsg6789";
    char * a = malloc(strlen(asrc)+1);
    char * b = malloc(strlen(asrc)+1);
    strcpy(a, asrc);
    strcpy(b, asrc);
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

void test_ft_atoi(void)
{
    char * str1 = "-12345qwert";
    char * str2 = "1234qwerty";
    char * str3 = "123qw\tertyui";
    char * str4 = "12ertyu\biopjg";
    char * str5 = "-1dsfdsgfsdhdf";
    char * str6 = "\ta\bdsfsgsddgs";


    if ((atoi(str1) == ft_atoi(str1))&&(atoi(str2) == atoi(str2))&&(atoi(str3) == atoi(str3)))
    {
        if ((atoi(str4) == ft_atoi(str4))&&(atoi(str5) == atoi(str5))&&(atoi(str6) == atoi(str6)))
        {
            printf("Test ft_atoi() passed:    3/58\n");
        }
    }
}

int main ()
{
    // ft_strlen 1\58
    printf("hello\n");
    test_ft_strlen();
    test_ft_bzero();
    test_ft_atoi();
    // test_ft_atoi();need proper explanat in text)
    // test_ft_strsplit(); (need proper explanation in test)
    
    return 0;
}

