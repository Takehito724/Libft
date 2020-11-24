/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:52:11 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/20 15:52:26 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	to_find;
	int				i;

	src = (unsigned char*)s;
	to_find = (unsigned char)c;
	i = 0;
	while (i < (int)n)
	{
		if (src[i] == to_find)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
