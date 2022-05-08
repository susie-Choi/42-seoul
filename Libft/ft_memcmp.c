/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:14:25 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:13:07 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr1;
	unsigned char	*s_ptr2;

	i = 0;
	s_ptr1 = (unsigned char *)s1;
	s_ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (s_ptr1[i] != s_ptr2[i])
			return (s_ptr1[i] - s_ptr2[i]);
		i++;
	}
	return (0);
}
