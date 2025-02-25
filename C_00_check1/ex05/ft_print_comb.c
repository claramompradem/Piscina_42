/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:22:47 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/11 12:22:56 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f_number;
	char	s_number;
	char	t_number;

	f_number = '0';
	while (f_number <= '9')
	{
		s_number = f_number + 1;
		while (s_number <= '9')
		{
			t_number = s_number + 1;
			while (t_number <= '9')
			{
				write(1, &f_number, 1);
				write(1, &s_number, 1);
				write(1, &t_number, 1);
				if (!(f_number == '7' && s_number == '8' && t_number == '9'))
					write(1, ", ", 2);
				t_number++;
			}
			s_number++;
		}
		f_number++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
