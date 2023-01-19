#include <stdio.h>
#include "endian.h"

int main(int argc, char *argv[])
{
    if (argc > 1 && argc != 2) {
        fprintf(stderr, "Usage: %s [-v]\n", argv[0]);
        return 1;
    }

    printf("Signed Representations\n"
            " 1: %s\n"
            " 2: %s\n"
            " 3: %s\n"
            " 4: %s\n"
            "16: %s\n"
            "32: %s\n", 
            int_to_bits(1), int_to_bits(2), int_to_bits(3), int_to_bits(4),
            int_to_bits(16), int_to_bits(32));
    printf("Unsigned Representations\n"
            " 1: %s\n"
            " 2: %s\n"
            " 3: %s\n"
            " 4: %s\n"
            "16: %s\n"
            "32: %s\n", 
            uint_to_bits(1), uint_to_bits(2), uint_to_bits(3), uint_to_bits(4),
            uint_to_bits(16), uint_to_bits(32));

    return 0;

}
