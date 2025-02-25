/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:02:35 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/21 18:24:46 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;
	int	cont;

	cont = 0;
	div = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (div <= nb)
	{
		if (nb % div == 0)
			cont++;
		div++;
	}
	if (cont == 2)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int prime = ft_is_prime(11);
	printf("%i", prime);
}
*/
