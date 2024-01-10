/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:32:39 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/09 13:44:41 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	while (++i < n)
		d[i] = s[i];
	d[i] = '\0';
	return (dst);
}
