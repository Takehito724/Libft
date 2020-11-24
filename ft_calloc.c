/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:19:42 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/20 16:46:06 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			len;
	int				i;

	len = count * size;
	i = 0;
	if (!(res = (unsigned char*)malloc(sizeof(unsigned char) * len)))
		return (NULL);
	while (i < (int)len)
	{
		res[i] = 0;
		i++;
	}
	return ((void*)res);
}
