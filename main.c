#include "libft.h"
#include "stdio.h"

int cmp(const void *p_data1, const void *p_data2) {
    const int *p_int1 = p_data1;
    const int *p_int2 = p_data2;
    int ret;

    if (*p_int1 < *p_int2) {
        ret = -1;
    } else if (*p_int1 > *p_int2) {
        ret = 1;
    } else {
        ret = 0;
    }

    return ret;
}

int main (void)
{
	int arr[] = {1, 6, 3, 7, 2};

	ft_qsort(arr, 5, sizeof(int), &cmp);
	int i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}