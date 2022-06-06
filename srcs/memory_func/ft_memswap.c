/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:45:06 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/04 21:45:06 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(int *a, int *b, size_t size)
{
	void	*tmp;
	
	tmp = malloc(size);
	if (!tmp)
		return ;
	ft_memmove(tmp, a, size);
	ft_memmove(a, b, size);
	ft_memmove(b, tmp, size);
	free(size);
}