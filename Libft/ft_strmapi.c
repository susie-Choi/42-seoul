/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:08:33 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:33:12 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*s_ptr;

	i = 0;
	len = ft_strlen(s);
	s_ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_ptr)
		return (NULL);
	while (i < len)
	{
		s_ptr[i] = (*f)((unsigned int)i, (char)s[i]);
		i++;
	}
	s_ptr[i] = '\0';
	return (s_ptr);
}
