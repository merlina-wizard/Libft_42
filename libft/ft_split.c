/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:20:16 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/15 15:51:25 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_malloc(char **tknv, int position, size_t buffer)
{
	int	i;

	i = 0;
	tknv[position] = malloc(buffer);
	if (tknv[position] == NULL)
	{
		while (i < position)
		{
			free(tknv[i++]);
		}
		free(tknv);
		return (1);
	}
	return (0);
}

int	ft_fill(char **tknv, char const *s, char spr)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == spr && *s)
			++s;
		while (*s != spr && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			safe_malloc(tknv, i, len + 1);
		}
		return (ft_strlcpy(tknv[i], s - len, len + 1));
	}
	return (0);
}

size_t	ft_count_tkn(char const *s, char spr)
{
	size_t	tkn;
	bool	ft_inside_tkn;

	tkn = 0;
	while (*s)
	{
		ft_inside_tkn = false;
		while (*s == spr && *s)
			++s;
		while (*s != spr && *s)
		{
			if (!ft_inside_tkn)
			{
				tkn++;
				ft_inside_tkn = true;
			}
			++s;
		}
	}
	return (tkn);
}

char	**ft_split(char const *s, char c)
{
	size_t	tkn;
	char	**tknv;

	if (s == NULL)
		return (NULL);
	tkn = 0;
	tkn = ft_count_tkn(s, c);
	tknv = malloc(sizeof(char *) * (tkn + 1));
	if (tknv == NULL)
		return (NULL);
	tknv[tkn] = NULL;
	if (!ft_fill(tknv, s, c))
		return (NULL);
	return (tknv);
}

int main (int argc, char **argv)
{
    char **pollo;
    int i;

	i = 0;
	if (argc == 2)
    {
        pollo = ft_split(argv[1], ' ');
        while(pollo)
        {
            printf("%s", *pollo);
			pollo++;
        }
    }
    return (0);
}
