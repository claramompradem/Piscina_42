/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:56:35 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/19 18:44:12 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	f_number;
	int	s_number;

	f_number = 0;
	while (f_number <= 98)
	{
		s_number = f_number + 1;
		while (s_number <= 99)
		{
			write(1, &(char){(f_number / 10) + '0'}, 1);
			write(1, &(char){(f_number % 10) + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){(s_number / 10) + '0'}, 1);
			write(1, &(char){(s_number % 10) + '0'}, 1);
			if (!(f_number == 98 && s_number == 99))
				write(1, ", ", 2);
			s_number++;
		}
		f_number++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
