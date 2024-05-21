#include <stdio.h>

int main()
{

    char vChar = 'A';
    short vShort = 10;
    int vInt = 10;
    long vLong = 10;
    float vFloat = 10.0;
    double vDouble = 10.0;
    long double vLongDouble = 10.0;

    printf("Hello, World!\n");

    printf("size of char: %lu\n", sizeof(vChar));
    printf("size of short: %lu\n", sizeof(vShort));
    printf("size of int: %lu\n", sizeof(vInt));
    printf("size of long: %lu\n", sizeof(vLong));
    printf("size of float: %lu\n", sizeof(vFloat));
    printf("size of double: %lu\n", sizeof(vDouble));
    printf("size of long double: %lu\n", sizeof(vLongDouble));

    return 0;
}
