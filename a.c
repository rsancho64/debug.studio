#include <stdio.h>

int trySwapProcedure(char x, char y)
{

    printf("swap:    me pasan %c; %c; \n", x, y);

    int tmp;
    tmp = x;
    x = y;
    y = tmp;

    printf("swap: termino con %c; %c; \n", x, y);
}

int SwapProcedure(char *px, char *py)
{
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{

    char ch1 = 'a';
    char ch2 = 'b';
    char tmp;

    printf("ch1: %c; ch2: %c; tmp: %c\n", ch1, ch2, tmp);

    // tmp = ch1;
    // ch1 = ch2;
    // ch2 = tmp;

    // trySwapProcedure(ch1, ch2); // :/ intento de procedimiento
    SwapProcedure(&ch1, &ch2);  // :/ procedimiento real en C
    // TO-DO: SwapFunction

    printf("ch1: %c; ch2: %c; tmp: %c\n", ch1, ch2, tmp);

    return 0;
}