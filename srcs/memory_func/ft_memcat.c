/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:52:33 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/04 11:52:33 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_memcat(const void *buff1, const void *buff2, size_t s1, size_t s2)
{
	void	*dst;

	dst = malloc(s1 + s2);
	if (!dst)
		return (NULL);
	memmove(dst, buff1, s1);
	memmove(dst + s1, buff2, s2);
	return (dst);
}
