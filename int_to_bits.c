#include <stdio.h>
#include <stdlib.h>

char *int_to_bits(int i)
{
    char *bit_string = malloc(sizeof(int) * 8);

    for (int n = sizeof(i) * 8, j = 0; n > 0, j < 32; n--, j++) {
        printf("%d", ((i >> n) & 1));
        bit_string[j] = (i >> n) & 1;
    }

    return bit_string;
    
}