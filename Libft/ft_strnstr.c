/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:14:55 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/12 21:47:32 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)haystack;
	if (!*needle)
		return (result);
	while (*result && len)
	{
		i = 0;
		while (*(result + i) == *(needle + i) && i < len)
			if (*(needle + (++i)) == '\0')
				return (result);
		result++;
		len--;
	}
	return (NULL);
}
