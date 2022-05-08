/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:43:51 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:40:57 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s_ptr;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	s_ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_ptr)
		return (NULL);
	while (s[start] && len--)
		s_ptr[i++] = s[start++];
	s_ptr[i] = '\0';
	return (s_ptr);
}
