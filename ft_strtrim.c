/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 23:09:28 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/20 16:59:35 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *s2)
{
	int				i;
	unsigned int	start;
	size_t			len;
	char			*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (ft_strchr(s2, (int)s1[i]) != NULL)
		i++;
	start = i;
	while (s1[i] != '\0')
		i++;
	while (ft_strchr(s2, (int)s1[i]) != NULL)
		i--;
	if (i < (int)start)
		len = 0;
	else
		len = (size_t)(i - start + 1);
	res = ft_substr(s1, start, len);
	return (res);
}
