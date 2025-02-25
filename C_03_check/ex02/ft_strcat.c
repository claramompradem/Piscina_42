/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:54:13 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/16 12:27:35 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	size_t	dest_len;
	size_t	pos;

	dest_len = 0;
	pos = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[pos] != '\0')
	{
		dest[dest_len + pos] = src[pos];
		pos++;
	}
	dest[dest_len + pos] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	strg[] = "hola";
	char	strg1[] = "que tal";

	ft_strcat(strg, strg1);
	//strcat(strg, strg1);
	for (int i = 0; i <= 10; i++)
		printf("%c", strg[i]);
}
*/
