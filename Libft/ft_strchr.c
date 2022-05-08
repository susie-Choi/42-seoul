/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:30:02 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:22:56 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			s_len;
	unsigned char	cp_c;

	i = 0;
	s_len = ft_strlen(s);
	cp_c = (char)c;
	while (s[i] && s[i] != cp_c)
		i++;
	if (s[i] == cp_c)
		return ((char *)s + i);
	else if (i == s_len)
		return (NULL);
	return ((char *)s + i);
}
