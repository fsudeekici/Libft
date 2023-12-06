/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:24:32 by fekici            #+#    #+#             */
/*   Updated: 2023/11/01 14:50:45 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*fstr;
	unsigned char	*sstr;
	size_t			i;

	i = 0;
	fstr = (unsigned char *)s1;
	sstr = (unsigned char *)s2;
	while (i < n)
	{
		if (fstr[i] != sstr[i])
			return (fstr[i] - sstr[i]);
		i++;
	}
	return (0);
}
