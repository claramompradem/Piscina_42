/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:01:57 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/23 11:10:41 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	size_t	j;

	j = 0;
	if (argc >= 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j])
			{
				write(1, &argv[argc - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
}
