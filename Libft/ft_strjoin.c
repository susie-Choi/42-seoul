/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:38:24 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 17:04:09 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;
	char	*s_ptr;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_ptr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!s_ptr)
		return (NULL);
	ft_strlcpy(s_ptr, s1, s1_len + 1);
	ft_strlcat(s_ptr + s1_len, s2, s2_len + 1);
	return (s_ptr);
}
