/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:40:41 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/21 18:24:29 by cmomprad         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(nb))
			nb++;
		return (nb);
	}
}
/*
int	main(void)
{
	int 	i = ft_find_next_prime(6);
	printf("%i", i);
}
*/
