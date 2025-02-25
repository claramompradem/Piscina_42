/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:44:29 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/14 18:02:18 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	pos;

	first = 1;
	pos = 0;
	while (str[pos] != '\0')
	{
		if ((str[pos] >= '0' && str[pos] <= '9')
			|| (str[pos] >= 'a' && str[pos] <= 'z')
			|| (str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			if (first == 1 && (str[pos] >= 'a' && str[pos] <= 'z'))
				str[pos] = str[pos] - ('a' - 'A');
			else if (first == 0 && (str[pos] >= 'A' && str[pos] <= 'Z'))
				str[pos] = str[pos] + ('a' - 'A');
			first = 0;
		}
		else
			first = 1;
		pos++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux";
	ft_strcapitalize(string);

	for (int i = 0; i <= 62; i++)
	{
	printf("%c", string[i]);
	}
}
*/
