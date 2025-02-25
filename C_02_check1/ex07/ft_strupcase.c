/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:53:11 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/14 16:08:26 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] -= ('a' - 'A');
		pos++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "H@la que tal";
	ft_strupcase(string);

	for (int i = 0; i < 12; i++)
	{
		printf("%c", string[i]);
	}	
}
*/
