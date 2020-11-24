/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:53:25 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/20 15:28:44 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	int				i;

	tmp = (unsigned char*)b;
	i = 0;
	while (i < (int)len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
