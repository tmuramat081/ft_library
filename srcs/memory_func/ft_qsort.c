/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 03:34:58 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/07 03:34:58 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsort(void *base, size_t n, size_t size,
			int (*cmp)(const void *, const void *))
{
	size_t			lo;
	size_t			hi;
	size_t			pt;
	unsigned char	*v;
	unsigned char	*x;

	lo = 0;
	hi = n - 1;
	pt = (lo + hi) / 2;
	if (n <= 1)
		return ;
	v = (unsigned char *)base;
	while (true)
	{
		x = &v[pt * size];
		while (cmp(&v[lo * size], x) < 0)
			lo++;
		while (cmp(&v[hi * size], x) > 0)
			hi--;
		if (lo >= hi)
			break ;
		ft_memswap(&v[lo * size], &v[hi * size], size);
		lo++;
		hi--;
	}
	if (0 < hi)
		qsort(&v[0], hi + 1, size, cmp);
	if (lo < n - 1)
		qsort(&v[lo * size], n - lo, size, cmp);
}
