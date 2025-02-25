/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:35:29 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/22 18:06:48 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	prod;
	int	result;

	prod = 0;
	result = 0;
	while (prod <= nb)
	{
		prod = result * result;
		if (prod == nb)
			return (result);
		result++;
	}
	return (0);
}
/*
int	main(void)
{
	int sqrt = ft_sqrt(25);
	printf("%i", sqrt);
}
*/
