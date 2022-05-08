/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:44:35 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:18:42 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_split_tlen(char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			len++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			len++;
		i++;
	}
	return (len);
}

static size_t	ft_split_olen(char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char	*ft_split_process(char const *s, char c, size_t *i)
{
	size_t	k;
	size_t	len;
	char	*ptr;

	k = 0;
	len = ft_split_olen((char *)s, c, *i);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s[*i] && s[*i] != c)
	{
		ptr[k] = s[*i];
		(*i)++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

static char	**free_arr(char **arr, size_t j)
{
	while (j--)
		free(arr[j]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**arr;

	i = 0;
	j = 0;
	len = ft_split_tlen((char *)s, c);
	arr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[j] = ft_split_process(s, c, &i);
			if (!arr[j])
				return (free_arr(arr, j));
			j++;
		}
		else
			i++;
	}
	arr[j] = 0;
	return (arr);
}
