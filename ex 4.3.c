#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int s;
    int mn;
    int h;

    s = atoi(av[0]);
    mn = atoi(av[1]);
    h = atoi[av[2]);
    if (s >= 59)
    {
        mn = mn + 1;
        s = 0;
        if (mn > 59)
        {
            h = h + 1;
            mn = 0;
            if (h = 24)
                h = 0;
        }
    }
    printf("%d, %d, %d", h, mn, s);
}