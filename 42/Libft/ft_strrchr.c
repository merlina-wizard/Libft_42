/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:02:01 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/10 12:50:10 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	b;
	int		i;

	b = c;
	i = ft_strlen((char *)s) - 1;
	while (i >= 0 && (b != s[i]))
		i--;
	return ((char *)s + i);
}
