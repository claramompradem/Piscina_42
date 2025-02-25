/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:10:00 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/16 12:23:39 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	dest_len;
	size_t	pos;
	size_t	src_len;

	dest_len = 0;
	pos = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != 0)
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	while (src[pos] != '\0' && (pos < (size - dest_len - 1)))
	{
		dest[dest_len + pos] = src[pos];
		pos++;
	}
	dest[dest_len + pos] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	strg[] = "hola";
	char	strg1[] = "que tal";

	unsigned int i = ft_strlcat(strg, strg1, 4);
	//strlcat(strg, strg1);
	for (int i = 0; i <= 10; i++)
		printf("%c", strg[i]);
	printf("%i", i);
}
*/
