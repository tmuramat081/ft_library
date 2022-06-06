#include "libft.h"

void ft_qsort(void *base, size_t n, size_t size,
            int (*cmp)(const void *, const void *))
{
    size_t lo = 0;
    size_t hi = n - 1;
    size_t pivot = n;
    size_t pt = (lo + hi) / 2;
    unsigned char  *v;
    unsigned char  *x;

    if (n <= 1)
        return ;
    v = (unsigned char *)base;
    while (true)
    {
        if (pivot != pt)
            x = &v[(pivot = pt) * size];
        while (cmp(&v[lo * size], x) < 0)
            lo++;
        while (cmp(&v[hi * size], x) > 0)
            hi--;
        if (lo >= hi)
            break;
        pt = (lo == pivot) ? hi : (hi == pivot) ? lo : pivot;
        ft_memswap(&v[lo * size], &v[hi * size], size);
        lo++;
        hi--;
    }
    if (0  < hi)
        qsort(&v[0], hi + 1, size, cmp);
    if (lo < n-1)
        qsort(&v[lo * size], n - lo, size, cmp);
}
