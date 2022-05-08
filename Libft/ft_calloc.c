/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:12:21 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 16:32:07 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			temp;

	i = 0;
	temp = count * size;
	ptr = (unsigned char *)malloc(temp);
	if (!ptr)
		return (NULL);
	while (temp--)
		*(ptr + (i++)) = 0;
	return (ptr);
}
