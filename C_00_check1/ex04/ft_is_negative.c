/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:22:10 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/11 12:22:20 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signo;

	if (n < 0)
	{
		signo = 'N';
		write(1, &signo, 1);
	}
	else
	{
		signo = 'P';
		write(1, &signo, 1);
	}
}
/*
int	main(void)
{
	int	n;

	n = 1;
	ft_is_negative(n);
}
*/
