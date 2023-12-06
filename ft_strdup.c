/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:26:20 by fekici            #+#    #+#             */
/*   Updated: 2023/11/01 14:53:02 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s) + 1;
	str = (char *)malloc(i);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i);
	return (str);
}
