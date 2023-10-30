#include <stdio.h>

typedef struct
{
    char c1;
    char c2;
} TPAREJA;

TPAREJA SwapFunction(TPAREJA p) // :) funcional
{
    char tmp = p.c1;
    p.c1 = p.c2;
    p.c2 = tmp;
    return p;
}

int main(void)
{
    TPAREJA in = {'a', 'b'};

    printf("ch1: %c; ch2: %c; tmp: %c\n", in.c1, in.c2, tmp);

    TPAREJA out;
    out = SwapFunction(in); // :) funcional

    printf("ch1: %c; ch2: %c; tmp: %c\n", out.c1, out.c2, tmp);

    return 0;
}