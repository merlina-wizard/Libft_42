/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:19:39 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/15 11:19:39 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(count * size + 1);
	if (!dst)
		return (0);
	while (i <= (count * size))
	{
		(dst[i]) = 0;
		i++;
	}
	return (dst);
}
