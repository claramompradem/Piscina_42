/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:58:14 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/13 11:20:23 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	pos;

	pos = 0;
	while (pos < n && src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "holaquetal";
	char	destination[20];

	ft_strncpy(destination, source, 3);
	printf("%s\n", destination);
}
*/
