/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:54:05 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:39:54 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strtrim_process(char const *s1, size_t left, size_t right)
{
	size_t	i;
	char	*res_ptr;

	i = right - left + 1;
	res_ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!res_ptr)
		return (NULL);
	ft_strlcpy(res_ptr, s1 + left, i + 1);
	return (res_ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left;
	size_t	right;

	left = 0;
	if (!s1[0])
		return (ft_strdup(""));
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	right = ft_strlen(s1) - 1;
	while (right > 0 && ft_strrchr(set, s1[right]))
		right--;
	if (left > right)
		return (ft_strdup(""));
	return (ft_strtrim_process(s1, left, right));
}
