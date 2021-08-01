#include "ft_lib.h"

//        int atoi(const char *nptr);

// DESCRIPTION         top

//        The atoi() function converts the initial portion of the string
//        pointed to by nptr to int.  The behavior is the same as

//            strtol(nptr, NULL, 10);

//        except that atoi() does not detect errors.

//        The atol() and atoll() functions behave the same as atoi(),
//        except that they convert the initial portion of the string to
//        their return type of long or long long.

// RETURN VALUE         top

//        The converted value or 0 on error.

int ft_atoi (const char *nptr)
{
    if (*nptr == '\0')
    {
        return 0;
    }

    int result, i = 0;
    int sign = 1;

    if (nptr[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; nptr[i] != '\0'; i++)
    {
        if ((nptr[i] < '0') || (nptr[i] > '9'))
        {
            return 0;
        }
        result = result*10 + nptr[i] - '0';
    }
    return sign*result;
}
