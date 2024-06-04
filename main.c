#include <stdio.h>
#include "demo_for.h"

int main()
{
    unsigned char a = -10;
    int b = 100000;
    double c = -30.14;

    b = a = 5;

    b = a + 5 + a;

    demo_for();

    int result = a + 10;
    printf("Result: %d len=%lu\n", result, sizeof(double));
    return 0;
}
