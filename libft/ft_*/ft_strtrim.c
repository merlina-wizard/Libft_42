/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:41:18 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/11 19:00:45 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find(char const c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_insert(char *s1, char *str, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		str[i] = s1[c];
		i++;
	}
	str[i] = '\0';
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && (ft_find(s1[i], (char *) set)))
		i++;
	while ((ft_find(s1[j], (char *) set)) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	ft_insert((char *) s1, str, (j - i + 1));
	return (str);
}
