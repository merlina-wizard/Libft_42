/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:52:54 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/13 19:34:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == '\0')
		return ((char*)str);
	while (haystack != '\0')
	{
		j = 0;
		while(str[j + i] == needle[j] && (i + j) < len)
		{
			if (needle[j + i] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return(0);
}
