/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:04:01 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/14 10:46:37 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	hex_digit(int val)
{
	if (val >= 0 && val <= 9)
		return (val + '0');
	else if (val >= 10 && val <= 15)
		return ('a' + (val - 10));
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char			b_sig	;
	char			b_nsig;
	unsigned char	val;

	while (*str != '\0')
	{
		val = *str;
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			b_sig = hex_digit((val >> 4) & 0x0F);
			b_nsig = hex_digit(val & 0x0F);
			write(1, "\\", 1);
			write(1, &b_sig, 1);
			write(1, &b_nsig, 1);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	string[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(string);
}
*/
