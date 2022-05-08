/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:02:46 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:14:11 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cp_dst;
	unsigned char	*cp_src;

	cp_dst = (unsigned char *)dst;
	cp_src = (unsigned char *)src;
	if (dst == src)
		return (NULL);
	if (src > dst)
		while (len--)
			*cp_dst++ = *cp_src++;
	else
	{
		cp_dst += len - 1;
		cp_src += len - 1;
		while (len--)
			*cp_dst-- = *cp_src--;
	}
	return (dst);
}
