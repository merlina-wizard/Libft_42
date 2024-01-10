/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:11:26 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/10 12:46:00 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	while (len-- > 0)
		*(ptr++) = (unsigned char) c;
	return (b);
}
