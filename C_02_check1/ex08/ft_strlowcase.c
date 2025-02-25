/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:10:12 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/14 17:12:38 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
			str[pos] = str[pos] + ('a' - 'A');
		pos++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "H@LA_deSDSDe";
	ft_strlowcase(string);

	for (int i = 0; i < 12; i++)
	{
		printf("%c", string[i]);
	}
}
*/
