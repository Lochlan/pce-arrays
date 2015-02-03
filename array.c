#include "huc.h"

int array[8];

empty_array() {
    int length, i;
    length = sizeof(array) / 2;

    for (i = 0; i < length; i++) {
        /* an element equal to 0 is considered empty */
        array[i] = 0;
    }
}

print_array() {
    int length, i;
    length = sizeof(array) / 2;

    for (i = 0; i < length; i++) {
        /* skip empty elements */
        if (array[i] == 0) {
            continue;
        }
        put_hex(array[i], 4, 9, i + 2);
    }
}

main() {
    int i;

    empty_array();

    array[0] = 0x1234;
    array[1] = 0xABCD;
    array[3] = 0x9876;

    put_string("array:", 2, 2);
    print_array();

    vsync(0);
}
