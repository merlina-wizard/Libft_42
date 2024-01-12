/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:26:28 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/11 16:40:03 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = (unsigned int)len;
	if (ft_strlen(s) <= len)
		sub = (char *)malloc(ft_strlen(s) + 1);
	else
		sub = (char *)malloc(sizeof(char) * (j + 1));
	if (!sub)
		return (NULL);
	if ((!(unsigned int)ft_strlen(s)) < start)
	{
		while (s[start] != '\0' && i < j)
		{
			sub[i] = s[start];
			start++;
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
