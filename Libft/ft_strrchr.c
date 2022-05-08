/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:03:10 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:35:44 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cp_c;

	i = ft_strlen(s);
	cp_c = (char)c;
	while (i)
	{
		if (s[i] == cp_c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == cp_c)
		return ((char *)s + i);
	return (NULL);
}
