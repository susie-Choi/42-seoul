/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:54:21 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:11:39 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_itoa_process(char *res, int sign, int i, int *arr)
{
	int	j;

	if (sign)
	{
		res[0] = '-';
		j = 1;
		while (--i >= 0)
			res[j++] = arr[i] * (-1) + '0';
	}
	else
	{
		j = 0;
		while (--i >= 0)
			res[j++] = arr[i] + '0';
	}
	res[j] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		sign;
	int		arr[13];
	char	*res;

	i = 0;
	sign = 0;
	if (n < 0)
		sign = 1;
	while (!i || n)
	{
		arr[i++] = n % 10;
		n /= 10;
	}
	res = (char *)malloc(sizeof(char) * (i + 1 + sign));
	if (!res)
		return (NULL);
	return (ft_itoa_process(res, sign, i, arr));
}
