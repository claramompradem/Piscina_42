/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:44:47 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/23 11:05:55 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	size_t	pos;

	pos = 0;
	if (argc >= 1)
	{
		while (argv[0][pos] != '\0')
		{
			write(1, &argv[0][pos], 1);
			pos++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
