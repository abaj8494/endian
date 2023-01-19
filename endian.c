#include <stdio.h>
#include "endian.h"

int main(int argc, char *argv[])
{
    if (argc > 1 && argc != 2) {
        fprintf(stderr, "Usage: %s [-v]\n", argv[0]);
        return 1;
    }

    char *test = int_to_bits(4);
    printf("test string: %s\n", test);

    return 0;

}
