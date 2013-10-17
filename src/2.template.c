#include <stdio.h>
#include <stdlib.h>

int
main()
{
    int ncase, i, l, r;

    /* read cases */
    scanf("%d\n", &ncase);
    for (i = 0; i < ncase; i++)
    {
        /* read data */
        scanf("%d %d\n", &l, &r);
        printf("%d\n", l + r);
    }

    return 0;
}
