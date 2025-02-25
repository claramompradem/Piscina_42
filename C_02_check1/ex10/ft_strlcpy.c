/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:03:49 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/14 16:49:52 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	pos;
	size_t	len;

	pos = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while (pos <= size - 1)
	{
		dest[pos] = src[pos];
		pos++;
	}
	if (size > 0)
		dest[pos] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	string[] = "Hello, World";
	char	copy[5];

	int  i = ft_strlcpy(copy, string, 5);
	for (int i = 0; i < 4; i++)
	{
		printf("%c", copy[i]);
	}
	printf("%d", i);
}
*/
