/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:45:05 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/16 11:20:34 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	pos;

	pos = 0;
	while ((s1[pos] != '\0' || s2[pos] != '\0') && pos < n)
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "hola";
	char	str2[] = "hoLaa";
	int	dif = ft_strncmp(str1, str2, 3);
	int	dif2 = strncmp(str1, str2, 3);

	printf("mi: %i, orig: %i\n", dif, dif2);
}
*/
