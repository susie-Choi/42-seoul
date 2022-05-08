/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:41:33 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:34:09 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cp_dst;
	unsigned char	*cp_src;

	i = 0;
	cp_dst = (unsigned char *)dst;
	cp_src = (unsigned char *)src;
	if (cp_dst == cp_src)
		return (NULL);
	while (n--)
	{
		*(cp_dst + i) = *(cp_src + i);
		i++;
	}
	return (cp_dst);
}
