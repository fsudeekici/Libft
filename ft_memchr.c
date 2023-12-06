/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:24:45 by fekici            #+#    #+#             */
/*   Updated: 2023/11/01 14:50:28 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	count;
	unsigned char	*str;

	count = (unsigned char)c;
	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*str == count)
			return ((void *)str);
		str ++;
	}
	return (NULL);
}
