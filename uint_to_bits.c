#include <stdio.h>
#include <stdlib.h>

char *uint_to_bits(unsigned int i)
{
    int n = sizeof(i) * 8;
    char *bit_string = malloc(n--); // reduces value of n for the subsequent shift

    for (int j = 0;n >= 0;n--, j++) {
        bit_string[j] = '0' + ((i >> n) & 1);
    }

    return bit_string;
    
}

