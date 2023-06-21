#include "main.h"
/**
 *jack_bauer - function tha print style of all hors in day
 */
#include"main.h"
void jack_bauer(void)
{
int mint, hr;

for (hr = 0; hr <= 23; ++hr)
{
for (mint = 0; mint <= 59; ++mint)
{
_putchar((hr / 10) + 48);
_putchar((hr % 10) + 48);
_putchar(':');
_putchar((mint / 10) + 48);
_putchar((mint % 10) + 48);
_putchar('\n');
}
}
}
