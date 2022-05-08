/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suschoi <suschoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:13:35 by suschoi           #+#    #+#             */
/*   Updated: 2022/04/27 14:06:41 by suschoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long	i;
	int				digit;
	int				res;
	int				temp;

	i = 0;
	res = 0;
	digit = 1;
	while (str[i] && ((str[i] == ' ') || (9 <= str[i] && str[i] <= 13)))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			digit = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		temp = res * 10 + str[i++] - '0';
		res = temp;
	}
	return (res * digit);
}
