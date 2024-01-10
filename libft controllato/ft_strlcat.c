/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:26:42 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/10 12:49:15 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	size_dst2;
	size_t	sizesrc;
	size_t	count;
	size_t	i;

	sizesrc = ft_strlen(src);
	size_dst2 = ft_strlen(dst);
	if (dstsize == 0 || size_dst2 > dstsize)
		return (dstsize + sizeSRC);
	count = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && (count < dstsize - 1))
	{
		dst[count] = src[i];
		count++;
		i++;
	}
	dst[j] = '\0';
	return (size_dst2 + sizesrc);
}
