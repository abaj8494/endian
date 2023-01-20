#include <stdio.h>
#include "endian.h"
#include <string.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc > 1 && argc != 2) {
        fprintf(stderr, "Usage: %s [-v]\n", argv[0]);
        return 1;
    }

    if (argc == 2 && !strcmp(argv[1], "-v")) {
    for (int i = 0; i < 37; i++) printf("-");
    printf("\n");
    printf("Signed Representations\n"
            "  1: %s\n"
            "  2: %s\n"
            "  3: %s\n"
            "  4: %s\n"
            " 16: %s\n"
            " 32: %s\n" 
            " -1: %s\n"
            " -2: %s\n"
            " -3: %s\n"
            " -4: %s\n"
            "-16: %s\n"
            "-32: %s\n", 
            int_to_bits(1), int_to_bits(2), int_to_bits(3), int_to_bits(4),
            int_to_bits(16), int_to_bits(32), 
            int_to_bits(-1), int_to_bits(-2), int_to_bits(-3), int_to_bits(-4),
            int_to_bits(-16), int_to_bits(-32));
    for (int i = 0; i < 37; i++) printf("-");
    printf("\n");
    printf("Unsigned Representations\n"
            "  1: %s\n"
            "  2: %s\n"
            "  3: %s\n"
            "  4: %s\n"
            " 16: %s\n"
            " 32: %s\n", 
            uint_to_bits(1), uint_to_bits(2), uint_to_bits(3), uint_to_bits(4),
            uint_to_bits(16), uint_to_bits(32));
    for (int i = 0; i < 37; i++) printf("-");
    printf("\n");
    }

    uint8_t b;
    uint32_t u;
    u = 0x03040506;
    b = *(uint8_t *)&u; // load first byte of u
    if (b == 3) printf("Big-Endian\n");
    else if (b == 6) printf("Little-Endian\n");

    printf("%s\n", int_to_bits(0x03040506));

    return 0;

}
