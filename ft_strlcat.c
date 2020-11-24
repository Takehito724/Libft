/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:33:49 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/23 16:01:49 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	while (src[i] != '\0')
	{
		if (dstlen + i + 1 == dstsize)
			break ;
		dst[(int)dstlen + i] = src[i];
		i++;
	}
	dst[(int)dstlen + i] = '\0';
	return (dstlen + srclen);
}
