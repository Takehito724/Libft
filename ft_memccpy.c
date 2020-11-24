/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:00:49 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/20 15:39:26 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	end;
	int				i;

	s1 = (unsigned char*)dest;
	s2 = (unsigned char*)src;
	end = (unsigned char)c;
	i = 0;
	while (i < (int)n)
	{
		s1[i] = s2[i];
		if (s2[i] == end)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
