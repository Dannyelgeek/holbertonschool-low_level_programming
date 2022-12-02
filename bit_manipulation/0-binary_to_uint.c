#include "main.h"

/**
 * binary_to_uint - 
*/

unsigned int binary_to_uint(const char *b)
{
    int bin_len = 0, result = 1, new_int = 0;

    if (!b)
        return (0);
    for (; b[bin_len]; bin_len++)
        ;
    for (bin_len -= 1; bin_len >= 0; bin_len--)
    {
        if (b[bin_len] != '0' && b[bin_len] != '1')
            return (0);
        new_int += result * (b[bin_len] - '0');
        result *= 2;
    }
    return (new_int);
}
