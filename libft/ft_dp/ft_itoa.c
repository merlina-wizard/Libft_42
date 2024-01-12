/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:08:27 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/11 16:35:02 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int i)
{
	int	j;

	j = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i *= -1;
		j++;
	}
	while (i > 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	int		j;

	j = -1 ;
	l = ft_numlen(n);
	str = (char *)malloc((sizeof(char) * (l + 1)));
	if (!str)
		return (NULL);
	str[l--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		j = 0;
	}
	while (l > j)
	{
		str[l] = 48 + (n % 10);
		n = n / 10;
		l--;
	}
	return (str);
}
