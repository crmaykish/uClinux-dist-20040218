#include <asm/mackerel.h>

void duart_putc(char c)
{
    while ((MEM(DUART_SRB) & 0x04) == 0)
    {
    }

    MEM(DUART_TBB) = c;

    // Always print a carriage return after a line feed
    if (c == 0x0A)
    {
        duart_putc(0x0D);
    }
}

char duart_getc(void)
{
    while ((MEM(DUART_SRB) & 0x01) == 0)
    {
    }

    return MEM(DUART_RBB);
}
