/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:53:45 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/20 14:27:00 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	int		i;

	if (dst == NULL || src == NULL)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	while (dstsize == 0)
		return (srcsize);
	while (src[i] != '\0')
	{
		if (i == (int)(dstsize - 1))
		{
			dst[i] = '\0';
			return (srcsize);
		}
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
