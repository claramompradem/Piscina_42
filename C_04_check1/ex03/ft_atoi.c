/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:45:01 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/19 11:52:19 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	pos;
	int	num_ns;
	int	num;
	int	sign;

	pos = 0;
	num_ns = 0;
	num = 0;
	sign = -1;
	while (((str[pos] == 32) || (str[pos] >= 9 && str[pos] <= 13)))
		pos++;
	while (str[pos] == 43 || str[pos] == 45)
	{
		if (str[pos] == 45)
			num_ns++;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		num = num * 10 + (str[pos] - '0');
		pos++;
	}
	if (num_ns % 2 != 0)
		return (num * sign);
	return (num);
}
/*
int	main(void)
{
	char	str[] = "	-343";
	int	num = ft_atoi(str);

	printf("%i", num);
}
*/
