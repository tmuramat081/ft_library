/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_bound.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:19:54 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/06 19:19:54 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_upper_bound(int arr[], int n, int x)
{
	int	mid;
	int	lo;
	int	hi;

	lo = 0;
	hi = n;
	while (lo < hi)
	{
		mid = lo + (hi - lo) / 2;
		if (arr[mid] < x)
			hi = mid + 1;
		else
			hi = mid;
	}
	if (lo < n && arr[lo] < x)
		lo++;
	return (lo);
}
