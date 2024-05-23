#include <stdio.h>

int main()
{
    unsigned char a = -10;
    int b = 100000;
    double c = -30.14;

    b = a = 5;

    b = a + 5 + a;

    a = -b;
    a = +b + 7;

    a = b ? 1 : 0;

    a = !1;
    b = ++a;
    a = (char)c;
    a = 1;
    b = 1 << 20;

    int result = a + 10;
    printf("Result: %d len=%lu\n", result, sizeof(double));
    return 0;
}
