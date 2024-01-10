/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:09:48 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/10 12:34:03 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= "0" && c <= "9")
		return (1);
	if ((c >= "A" && c <= "Z") || (c >= "a" && c <= "z"))
		return (1);
	else
		return (0);
}
